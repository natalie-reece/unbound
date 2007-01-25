/*
 * util/netevent.h - event notification
 *
 * Copyright (c) 2007, NLnet Labs. All rights reserved.
 *
 * This software is open source.
 * 
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 
 * Redistributions of source code must retain the above copyright notice,
 * this list of conditions and the following disclaimer.
 * 
 * Redistributions in binary form must reproduce the above copyright notice,
 * this list of conditions and the following disclaimer in the documentation
 * and/or other materials provided with the distribution.
 * 
 * Neither the name of the NLNET LABS nor the names of its contributors may
 * be used to endorse or promote products derived from this software without
 * specific prior written permission.
 * 
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED
 * TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR
 * PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE REGENTS OR CONTRIBUTORS BE
 * LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 * SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 * INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
 * CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 */

/**
 * \file
 *
 * This file contains event notification functions.
 *
 * There are three types of communication points
 *    o UDP socket - perthread buffer.
 *    o TCP-accept socket - array of TCP-sockets, socketcount.
 *    o TCP socket - own buffer, parent-TCPaccept, read/write state,
 *                   number of bytes read/written, timeout.
 *
 * There are sockets aimed towards our clients and towards the internet.
 *    o frontside - aimed towards our clients, queries come in, answers back.
 *    o behind - aimed towards internet, to the authoritative DNS servers.
 *
 */

#ifndef NET_EVENT_H
#define NET_EVENT_H

#include "config.h"
struct comm_point;

/* internal event notification data storage structure. */
struct internal_event;
struct internal_base;

/** callback from communication point function type */
typedef int comm_point_callback_t(struct comm_point*, void*, int);

/**
 * A communication point dispatcher. Thread specific.
 */
struct comm_base {
	/** behind the scenes structure. with say libevent info. alloced */
	struct internal_base* eb;
};

/** 
 * Communication point to the network 
 * These behaviours can be accomplished by setting the flags
 * and passing return values from the callback.
 *    udp frontside: called after readdone. sendafter.
 *    tcp frontside: called readdone, sendafter. close.
 *    udp behind: called after readdone. No send after.
 *    tcp behind: write done, read done, then called. No send after.
 */
struct comm_point {
	/** behind the scenes structure, with say libevent info. alloced. */
	struct internal_event* ev;

	/** file descriptor for communication point */
	int fd;

	/** timeout (NULL if it does not). Malloced. */
	struct timeval *timeout;

	/** buffer pointer. Either to perthread, or own buffer or NULL */
	ldns_buffer *buffer;

	/* -------- TCP Handler -------- */
	/** Read/Write state for TCP */
	int tcp_is_reading;
	/** The current read/write count for TCP */
	size_t tcp_byte_count;
	/** parent communication point (for TCP sockets) */
	struct comm_point *tcp_parent;

	/* -------- TCP Accept -------- */
	/** current number of TCP connections on this socket */
	int cur_tcp_count;
	/** the number of TCP handlers for this tcp-accept socket */
	int max_tcp_count;
	/** malloced array of tcp handlers for a tcp-accept, 
	    of size max_tcp_count. */
	struct comm_point **tcp_handlers;
	/** linked list of free tcp_handlers to use for new queries.
	    For tcp_accept the first entry, for tcp_handlers the next one. */
	struct comm_point *tcp_free;

	/** is this a UDP, TCP-accept or TCP socket. */
	enum comm_point_type {
		/** UDP socket - handle datagrams. */
		comm_udp, 
		/** TCP accept socket - only creates handlers if readable. */
		comm_tcp_accept, 
		/** TCP handler socket - handle byteperbyte readwrite. */
		comm_tcp  
	} type;

	/* ---------- Behaviour ----------- */
	/** if set, the connection is closed on error, on timeout, 
	    and after read/write completes. No callback is done. */
	int tcp_do_close;

	/** if set, read/write completes:
		read/write state of tcp is toggled.
		buffer reset/bytecount reset.
		this flag cleared.
	    So that when that is done the callback is called. */
	int tcp_do_toggle_rw;

	/** callback when done.
	    tcp_accept does not get called back, is NULL then.
	    If a timeout happens, callback with timeout=1 is called.
	    If an error happens, callback is called with error set 
	    nonzero. If nonzero, it is an errno value.
	    If the connection is closed (by remote end) then the
	    callback is called with error set to -1.

	    declare as: 
	    int my_callback(struct comm_point* c, void* my_arg, 
	        int timeout, int error);

	    if the routine returns 0, nothing is done.
	    Notzero, the buffer will be sent back to client.
	    		For UDP this is done without changing the commpoint.
			In TCP it sets write state.
	*/
	comm_point_callback_t* callback;
	/** argument to pass to callback. */
	void *cb_arg;
};

/**
 * Create a new comm base.
 * @return: the new comm base. NULL on error.
 */
struct comm_base* comm_base_create();

/**
 * Destroy a comm base.
 * All comm points must have been deleted.
 * @param b: the base to delete.
 */
void comm_base_delete(struct comm_base* b);

/**
 * Dispatch the comm base events.
 * @param b: the communication to perform.
 */
void comm_base_dispatch(struct comm_base* b);

/**
 * Create an UDP comm point. Calls malloc.
 * setups the structure with the parameters you provide.
 * @param base: in which base to alloc the commpoint.
 * @param fd : file descriptor of open UDP socket.
 * @param buffer: shared buffer by UDP sockets from this thread.
 * @param callback: callback function pointer.
 * @param callback_arg: will be passed to your callback function.
 * @return: returns the allocated communication point. NULL on error.
 * Sets timeout to NULL. Turns off TCP options.
 */
struct comm_point* comm_point_create_udp(struct comm_base *base,
	int fd, ldns_buffer* buffer, 
	comm_point_callback_t* callback, void* callback_arg);

/**
 * Create a TCP listener comm point. Calls malloc.
 * Setups the structure with the parameters you provide.
 * Also Creates TCP Handlers, pre allocated for you.
 * Uses the parameters you provide.
 * @param base: in which base to alloc the commpoint.
 * @param fd: file descriptor of open TCP socket set to listen nonblocking.
 * @param num: becomes max_tcp_count, the routine allocates that
 *	many tcp handler commpoints.
 * @param bufsize: size of buffer to create for handlers.
 * @param callback: callback function pointer for TCP handlers.
 * @param callback_arg: will be passed to your callback function.
 * @return: returns the TCP listener commpoint. You can find the
 *  	TCP handlers in the array inside the listener commpoint.
 *	returns NULL on error.
 * Inits timeout to NULL. All handlers are on the free list.
 */
struct comm_point* comm_point_create_tcp(struct comm_base *base,
	int fd, int num, size_t bufsize, 
	comm_point_callback_t* callback, void* callback_arg);

/**
 * Close a comm point fd.
 * @param c: comm point to close.
 */
void comm_point_close(struct comm_point* c);

/**
 * Close and deallocate (free) the comm point. If the comm point is
 * a tcp-accept point, also its tcp-handler points are deleted.
 * @param c: comm point to delete.
 */
void comm_point_delete(struct comm_point* c);

/**
 * Reset the callback argument for a comm point.
 * @param c: the comm point to change.
 * @param arg: the new callback user argument.
 */
void comm_point_set_cb_arg(struct comm_point* c, void *arg);

#endif /* NET_EVENT_H */
