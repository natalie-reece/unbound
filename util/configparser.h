/* A Bison parser, made by GNU Bison 3.6.4.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2020 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_UTIL_CONFIGPARSER_H_INCLUDED
# define YY_YY_UTIL_CONFIGPARSER_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    SPACE = 258,                   /* SPACE  */
    LETTER = 259,                  /* LETTER  */
    NEWLINE = 260,                 /* NEWLINE  */
    COMMENT = 261,                 /* COMMENT  */
    COLON = 262,                   /* COLON  */
    ANY = 263,                     /* ANY  */
    ZONESTR = 264,                 /* ZONESTR  */
    STRING_ARG = 265,              /* STRING_ARG  */
    VAR_FORCE_TOPLEVEL = 266,      /* VAR_FORCE_TOPLEVEL  */
    VAR_SERVER = 267,              /* VAR_SERVER  */
    VAR_VERBOSITY = 268,           /* VAR_VERBOSITY  */
    VAR_NUM_THREADS = 269,         /* VAR_NUM_THREADS  */
    VAR_PORT = 270,                /* VAR_PORT  */
    VAR_OUTGOING_RANGE = 271,      /* VAR_OUTGOING_RANGE  */
    VAR_INTERFACE = 272,           /* VAR_INTERFACE  */
    VAR_PREFER_IP4 = 273,          /* VAR_PREFER_IP4  */
    VAR_DO_IP4 = 274,              /* VAR_DO_IP4  */
    VAR_DO_IP6 = 275,              /* VAR_DO_IP6  */
    VAR_PREFER_IP6 = 276,          /* VAR_PREFER_IP6  */
    VAR_DO_UDP = 277,              /* VAR_DO_UDP  */
    VAR_DO_TCP = 278,              /* VAR_DO_TCP  */
    VAR_TCP_MSS = 279,             /* VAR_TCP_MSS  */
    VAR_OUTGOING_TCP_MSS = 280,    /* VAR_OUTGOING_TCP_MSS  */
    VAR_TCP_IDLE_TIMEOUT = 281,    /* VAR_TCP_IDLE_TIMEOUT  */
    VAR_EDNS_TCP_KEEPALIVE = 282,  /* VAR_EDNS_TCP_KEEPALIVE  */
    VAR_EDNS_TCP_KEEPALIVE_TIMEOUT = 283, /* VAR_EDNS_TCP_KEEPALIVE_TIMEOUT  */
    VAR_CHROOT = 284,              /* VAR_CHROOT  */
    VAR_USERNAME = 285,            /* VAR_USERNAME  */
    VAR_DIRECTORY = 286,           /* VAR_DIRECTORY  */
    VAR_LOGFILE = 287,             /* VAR_LOGFILE  */
    VAR_PIDFILE = 288,             /* VAR_PIDFILE  */
    VAR_MSG_CACHE_SIZE = 289,      /* VAR_MSG_CACHE_SIZE  */
    VAR_MSG_CACHE_SLABS = 290,     /* VAR_MSG_CACHE_SLABS  */
    VAR_NUM_QUERIES_PER_THREAD = 291, /* VAR_NUM_QUERIES_PER_THREAD  */
    VAR_RRSET_CACHE_SIZE = 292,    /* VAR_RRSET_CACHE_SIZE  */
    VAR_RRSET_CACHE_SLABS = 293,   /* VAR_RRSET_CACHE_SLABS  */
    VAR_OUTGOING_NUM_TCP = 294,    /* VAR_OUTGOING_NUM_TCP  */
    VAR_INFRA_HOST_TTL = 295,      /* VAR_INFRA_HOST_TTL  */
    VAR_INFRA_LAME_TTL = 296,      /* VAR_INFRA_LAME_TTL  */
    VAR_INFRA_CACHE_SLABS = 297,   /* VAR_INFRA_CACHE_SLABS  */
    VAR_INFRA_CACHE_NUMHOSTS = 298, /* VAR_INFRA_CACHE_NUMHOSTS  */
    VAR_INFRA_CACHE_LAME_SIZE = 299, /* VAR_INFRA_CACHE_LAME_SIZE  */
    VAR_NAME = 300,                /* VAR_NAME  */
    VAR_STUB_ZONE = 301,           /* VAR_STUB_ZONE  */
    VAR_STUB_HOST = 302,           /* VAR_STUB_HOST  */
    VAR_STUB_ADDR = 303,           /* VAR_STUB_ADDR  */
    VAR_TARGET_FETCH_POLICY = 304, /* VAR_TARGET_FETCH_POLICY  */
    VAR_HARDEN_SHORT_BUFSIZE = 305, /* VAR_HARDEN_SHORT_BUFSIZE  */
    VAR_HARDEN_LARGE_QUERIES = 306, /* VAR_HARDEN_LARGE_QUERIES  */
    VAR_FORWARD_ZONE = 307,        /* VAR_FORWARD_ZONE  */
    VAR_FORWARD_HOST = 308,        /* VAR_FORWARD_HOST  */
    VAR_FORWARD_ADDR = 309,        /* VAR_FORWARD_ADDR  */
    VAR_DO_NOT_QUERY_ADDRESS = 310, /* VAR_DO_NOT_QUERY_ADDRESS  */
    VAR_HIDE_IDENTITY = 311,       /* VAR_HIDE_IDENTITY  */
    VAR_HIDE_VERSION = 312,        /* VAR_HIDE_VERSION  */
    VAR_IDENTITY = 313,            /* VAR_IDENTITY  */
    VAR_VERSION = 314,             /* VAR_VERSION  */
    VAR_HARDEN_GLUE = 315,         /* VAR_HARDEN_GLUE  */
    VAR_MODULE_CONF = 316,         /* VAR_MODULE_CONF  */
    VAR_TRUST_ANCHOR_FILE = 317,   /* VAR_TRUST_ANCHOR_FILE  */
    VAR_TRUST_ANCHOR = 318,        /* VAR_TRUST_ANCHOR  */
    VAR_VAL_OVERRIDE_DATE = 319,   /* VAR_VAL_OVERRIDE_DATE  */
    VAR_BOGUS_TTL = 320,           /* VAR_BOGUS_TTL  */
    VAR_VAL_CLEAN_ADDITIONAL = 321, /* VAR_VAL_CLEAN_ADDITIONAL  */
    VAR_VAL_PERMISSIVE_MODE = 322, /* VAR_VAL_PERMISSIVE_MODE  */
    VAR_INCOMING_NUM_TCP = 323,    /* VAR_INCOMING_NUM_TCP  */
    VAR_MSG_BUFFER_SIZE = 324,     /* VAR_MSG_BUFFER_SIZE  */
    VAR_KEY_CACHE_SIZE = 325,      /* VAR_KEY_CACHE_SIZE  */
    VAR_KEY_CACHE_SLABS = 326,     /* VAR_KEY_CACHE_SLABS  */
    VAR_TRUSTED_KEYS_FILE = 327,   /* VAR_TRUSTED_KEYS_FILE  */
    VAR_VAL_NSEC3_KEYSIZE_ITERATIONS = 328, /* VAR_VAL_NSEC3_KEYSIZE_ITERATIONS  */
    VAR_USE_SYSLOG = 329,          /* VAR_USE_SYSLOG  */
    VAR_OUTGOING_INTERFACE = 330,  /* VAR_OUTGOING_INTERFACE  */
    VAR_ROOT_HINTS = 331,          /* VAR_ROOT_HINTS  */
    VAR_DO_NOT_QUERY_LOCALHOST = 332, /* VAR_DO_NOT_QUERY_LOCALHOST  */
    VAR_CACHE_MAX_TTL = 333,       /* VAR_CACHE_MAX_TTL  */
    VAR_HARDEN_DNSSEC_STRIPPED = 334, /* VAR_HARDEN_DNSSEC_STRIPPED  */
    VAR_ACCESS_CONTROL = 335,      /* VAR_ACCESS_CONTROL  */
    VAR_LOCAL_ZONE = 336,          /* VAR_LOCAL_ZONE  */
    VAR_LOCAL_DATA = 337,          /* VAR_LOCAL_DATA  */
    VAR_INTERFACE_AUTOMATIC = 338, /* VAR_INTERFACE_AUTOMATIC  */
    VAR_STATISTICS_INTERVAL = 339, /* VAR_STATISTICS_INTERVAL  */
    VAR_DO_DAEMONIZE = 340,        /* VAR_DO_DAEMONIZE  */
    VAR_USE_CAPS_FOR_ID = 341,     /* VAR_USE_CAPS_FOR_ID  */
    VAR_STATISTICS_CUMULATIVE = 342, /* VAR_STATISTICS_CUMULATIVE  */
    VAR_OUTGOING_PORT_PERMIT = 343, /* VAR_OUTGOING_PORT_PERMIT  */
    VAR_OUTGOING_PORT_AVOID = 344, /* VAR_OUTGOING_PORT_AVOID  */
    VAR_DLV_ANCHOR_FILE = 345,     /* VAR_DLV_ANCHOR_FILE  */
    VAR_DLV_ANCHOR = 346,          /* VAR_DLV_ANCHOR  */
    VAR_NEG_CACHE_SIZE = 347,      /* VAR_NEG_CACHE_SIZE  */
    VAR_HARDEN_REFERRAL_PATH = 348, /* VAR_HARDEN_REFERRAL_PATH  */
    VAR_PRIVATE_ADDRESS = 349,     /* VAR_PRIVATE_ADDRESS  */
    VAR_PRIVATE_DOMAIN = 350,      /* VAR_PRIVATE_DOMAIN  */
    VAR_REMOTE_CONTROL = 351,      /* VAR_REMOTE_CONTROL  */
    VAR_CONTROL_ENABLE = 352,      /* VAR_CONTROL_ENABLE  */
    VAR_CONTROL_INTERFACE = 353,   /* VAR_CONTROL_INTERFACE  */
    VAR_CONTROL_PORT = 354,        /* VAR_CONTROL_PORT  */
    VAR_SERVER_KEY_FILE = 355,     /* VAR_SERVER_KEY_FILE  */
    VAR_SERVER_CERT_FILE = 356,    /* VAR_SERVER_CERT_FILE  */
    VAR_CONTROL_KEY_FILE = 357,    /* VAR_CONTROL_KEY_FILE  */
    VAR_CONTROL_CERT_FILE = 358,   /* VAR_CONTROL_CERT_FILE  */
    VAR_CONTROL_USE_CERT = 359,    /* VAR_CONTROL_USE_CERT  */
    VAR_EXTENDED_STATISTICS = 360, /* VAR_EXTENDED_STATISTICS  */
    VAR_LOCAL_DATA_PTR = 361,      /* VAR_LOCAL_DATA_PTR  */
    VAR_JOSTLE_TIMEOUT = 362,      /* VAR_JOSTLE_TIMEOUT  */
    VAR_STUB_PRIME = 363,          /* VAR_STUB_PRIME  */
    VAR_UNWANTED_REPLY_THRESHOLD = 364, /* VAR_UNWANTED_REPLY_THRESHOLD  */
    VAR_LOG_TIME_ASCII = 365,      /* VAR_LOG_TIME_ASCII  */
    VAR_DOMAIN_INSECURE = 366,     /* VAR_DOMAIN_INSECURE  */
    VAR_PYTHON = 367,              /* VAR_PYTHON  */
    VAR_PYTHON_SCRIPT = 368,       /* VAR_PYTHON_SCRIPT  */
    VAR_VAL_SIG_SKEW_MIN = 369,    /* VAR_VAL_SIG_SKEW_MIN  */
    VAR_VAL_SIG_SKEW_MAX = 370,    /* VAR_VAL_SIG_SKEW_MAX  */
    VAR_CACHE_MIN_TTL = 371,       /* VAR_CACHE_MIN_TTL  */
    VAR_VAL_LOG_LEVEL = 372,       /* VAR_VAL_LOG_LEVEL  */
    VAR_AUTO_TRUST_ANCHOR_FILE = 373, /* VAR_AUTO_TRUST_ANCHOR_FILE  */
    VAR_KEEP_MISSING = 374,        /* VAR_KEEP_MISSING  */
    VAR_ADD_HOLDDOWN = 375,        /* VAR_ADD_HOLDDOWN  */
    VAR_DEL_HOLDDOWN = 376,        /* VAR_DEL_HOLDDOWN  */
    VAR_SO_RCVBUF = 377,           /* VAR_SO_RCVBUF  */
    VAR_EDNS_BUFFER_SIZE = 378,    /* VAR_EDNS_BUFFER_SIZE  */
    VAR_PREFETCH = 379,            /* VAR_PREFETCH  */
    VAR_PREFETCH_KEY = 380,        /* VAR_PREFETCH_KEY  */
    VAR_SO_SNDBUF = 381,           /* VAR_SO_SNDBUF  */
    VAR_SO_REUSEPORT = 382,        /* VAR_SO_REUSEPORT  */
    VAR_HARDEN_BELOW_NXDOMAIN = 383, /* VAR_HARDEN_BELOW_NXDOMAIN  */
    VAR_IGNORE_CD_FLAG = 384,      /* VAR_IGNORE_CD_FLAG  */
    VAR_LOG_QUERIES = 385,         /* VAR_LOG_QUERIES  */
    VAR_LOG_REPLIES = 386,         /* VAR_LOG_REPLIES  */
    VAR_LOG_LOCAL_ACTIONS = 387,   /* VAR_LOG_LOCAL_ACTIONS  */
    VAR_TCP_UPSTREAM = 388,        /* VAR_TCP_UPSTREAM  */
    VAR_SSL_UPSTREAM = 389,        /* VAR_SSL_UPSTREAM  */
    VAR_SSL_SERVICE_KEY = 390,     /* VAR_SSL_SERVICE_KEY  */
    VAR_SSL_SERVICE_PEM = 391,     /* VAR_SSL_SERVICE_PEM  */
    VAR_SSL_PORT = 392,            /* VAR_SSL_PORT  */
    VAR_FORWARD_FIRST = 393,       /* VAR_FORWARD_FIRST  */
    VAR_STUB_SSL_UPSTREAM = 394,   /* VAR_STUB_SSL_UPSTREAM  */
    VAR_FORWARD_SSL_UPSTREAM = 395, /* VAR_FORWARD_SSL_UPSTREAM  */
    VAR_TLS_CERT_BUNDLE = 396,     /* VAR_TLS_CERT_BUNDLE  */
    VAR_HTTPS_PORT = 397,          /* VAR_HTTPS_PORT  */
    VAR_HTTP_ENDPOINT = 398,       /* VAR_HTTP_ENDPOINT  */
    VAR_HTTP_MAX_STREAMS = 399,    /* VAR_HTTP_MAX_STREAMS  */
    VAR_HTTP_QUERY_BUFFER_SIZE = 400, /* VAR_HTTP_QUERY_BUFFER_SIZE  */
    VAR_HTTP_RESPONSE_BUFFER_SIZE = 401, /* VAR_HTTP_RESPONSE_BUFFER_SIZE  */
    VAR_HTTP_NODELAY = 402,        /* VAR_HTTP_NODELAY  */
    VAR_HTTP_NOTLS_DOWNSTREAM = 403, /* VAR_HTTP_NOTLS_DOWNSTREAM  */
    VAR_STUB_FIRST = 404,          /* VAR_STUB_FIRST  */
    VAR_MINIMAL_RESPONSES = 405,   /* VAR_MINIMAL_RESPONSES  */
    VAR_RRSET_ROUNDROBIN = 406,    /* VAR_RRSET_ROUNDROBIN  */
    VAR_MAX_UDP_SIZE = 407,        /* VAR_MAX_UDP_SIZE  */
    VAR_DELAY_CLOSE = 408,         /* VAR_DELAY_CLOSE  */
    VAR_UDP_CONNECT = 409,         /* VAR_UDP_CONNECT  */
    VAR_UNBLOCK_LAN_ZONES = 410,   /* VAR_UNBLOCK_LAN_ZONES  */
    VAR_INSECURE_LAN_ZONES = 411,  /* VAR_INSECURE_LAN_ZONES  */
    VAR_INFRA_CACHE_MIN_RTT = 412, /* VAR_INFRA_CACHE_MIN_RTT  */
    VAR_INFRA_KEEP_PROBING = 413,  /* VAR_INFRA_KEEP_PROBING  */
    VAR_DNS64_PREFIX = 414,        /* VAR_DNS64_PREFIX  */
    VAR_DNS64_SYNTHALL = 415,      /* VAR_DNS64_SYNTHALL  */
    VAR_DNS64_IGNORE_AAAA = 416,   /* VAR_DNS64_IGNORE_AAAA  */
    VAR_DNSTAP = 417,              /* VAR_DNSTAP  */
    VAR_DNSTAP_ENABLE = 418,       /* VAR_DNSTAP_ENABLE  */
    VAR_DNSTAP_SOCKET_PATH = 419,  /* VAR_DNSTAP_SOCKET_PATH  */
    VAR_DNSTAP_IP = 420,           /* VAR_DNSTAP_IP  */
    VAR_DNSTAP_TLS = 421,          /* VAR_DNSTAP_TLS  */
    VAR_DNSTAP_TLS_SERVER_NAME = 422, /* VAR_DNSTAP_TLS_SERVER_NAME  */
    VAR_DNSTAP_TLS_CERT_BUNDLE = 423, /* VAR_DNSTAP_TLS_CERT_BUNDLE  */
    VAR_DNSTAP_TLS_CLIENT_KEY_FILE = 424, /* VAR_DNSTAP_TLS_CLIENT_KEY_FILE  */
    VAR_DNSTAP_TLS_CLIENT_CERT_FILE = 425, /* VAR_DNSTAP_TLS_CLIENT_CERT_FILE  */
    VAR_DNSTAP_SEND_IDENTITY = 426, /* VAR_DNSTAP_SEND_IDENTITY  */
    VAR_DNSTAP_SEND_VERSION = 427, /* VAR_DNSTAP_SEND_VERSION  */
    VAR_DNSTAP_BIDIRECTIONAL = 428, /* VAR_DNSTAP_BIDIRECTIONAL  */
    VAR_DNSTAP_IDENTITY = 429,     /* VAR_DNSTAP_IDENTITY  */
    VAR_DNSTAP_VERSION = 430,      /* VAR_DNSTAP_VERSION  */
    VAR_DNSTAP_LOG_RESOLVER_QUERY_MESSAGES = 431, /* VAR_DNSTAP_LOG_RESOLVER_QUERY_MESSAGES  */
    VAR_DNSTAP_LOG_RESOLVER_RESPONSE_MESSAGES = 432, /* VAR_DNSTAP_LOG_RESOLVER_RESPONSE_MESSAGES  */
    VAR_DNSTAP_LOG_CLIENT_QUERY_MESSAGES = 433, /* VAR_DNSTAP_LOG_CLIENT_QUERY_MESSAGES  */
    VAR_DNSTAP_LOG_CLIENT_RESPONSE_MESSAGES = 434, /* VAR_DNSTAP_LOG_CLIENT_RESPONSE_MESSAGES  */
    VAR_DNSTAP_LOG_FORWARDER_QUERY_MESSAGES = 435, /* VAR_DNSTAP_LOG_FORWARDER_QUERY_MESSAGES  */
    VAR_DNSTAP_LOG_FORWARDER_RESPONSE_MESSAGES = 436, /* VAR_DNSTAP_LOG_FORWARDER_RESPONSE_MESSAGES  */
    VAR_RESPONSE_IP_TAG = 437,     /* VAR_RESPONSE_IP_TAG  */
    VAR_RESPONSE_IP = 438,         /* VAR_RESPONSE_IP  */
    VAR_RESPONSE_IP_DATA = 439,    /* VAR_RESPONSE_IP_DATA  */
    VAR_HARDEN_ALGO_DOWNGRADE = 440, /* VAR_HARDEN_ALGO_DOWNGRADE  */
    VAR_IP_TRANSPARENT = 441,      /* VAR_IP_TRANSPARENT  */
    VAR_IP_DSCP = 442,             /* VAR_IP_DSCP  */
    VAR_DISABLE_DNSSEC_LAME_CHECK = 443, /* VAR_DISABLE_DNSSEC_LAME_CHECK  */
    VAR_IP_RATELIMIT = 444,        /* VAR_IP_RATELIMIT  */
    VAR_IP_RATELIMIT_SLABS = 445,  /* VAR_IP_RATELIMIT_SLABS  */
    VAR_IP_RATELIMIT_SIZE = 446,   /* VAR_IP_RATELIMIT_SIZE  */
    VAR_RATELIMIT = 447,           /* VAR_RATELIMIT  */
    VAR_RATELIMIT_SLABS = 448,     /* VAR_RATELIMIT_SLABS  */
    VAR_RATELIMIT_SIZE = 449,      /* VAR_RATELIMIT_SIZE  */
    VAR_RATELIMIT_FOR_DOMAIN = 450, /* VAR_RATELIMIT_FOR_DOMAIN  */
    VAR_RATELIMIT_BELOW_DOMAIN = 451, /* VAR_RATELIMIT_BELOW_DOMAIN  */
    VAR_IP_RATELIMIT_FACTOR = 452, /* VAR_IP_RATELIMIT_FACTOR  */
    VAR_RATELIMIT_FACTOR = 453,    /* VAR_RATELIMIT_FACTOR  */
    VAR_SEND_CLIENT_SUBNET = 454,  /* VAR_SEND_CLIENT_SUBNET  */
    VAR_CLIENT_SUBNET_ZONE = 455,  /* VAR_CLIENT_SUBNET_ZONE  */
    VAR_CLIENT_SUBNET_ALWAYS_FORWARD = 456, /* VAR_CLIENT_SUBNET_ALWAYS_FORWARD  */
    VAR_CLIENT_SUBNET_OPCODE = 457, /* VAR_CLIENT_SUBNET_OPCODE  */
    VAR_MAX_CLIENT_SUBNET_IPV4 = 458, /* VAR_MAX_CLIENT_SUBNET_IPV4  */
    VAR_MAX_CLIENT_SUBNET_IPV6 = 459, /* VAR_MAX_CLIENT_SUBNET_IPV6  */
    VAR_MIN_CLIENT_SUBNET_IPV4 = 460, /* VAR_MIN_CLIENT_SUBNET_IPV4  */
    VAR_MIN_CLIENT_SUBNET_IPV6 = 461, /* VAR_MIN_CLIENT_SUBNET_IPV6  */
    VAR_MAX_ECS_TREE_SIZE_IPV4 = 462, /* VAR_MAX_ECS_TREE_SIZE_IPV4  */
    VAR_MAX_ECS_TREE_SIZE_IPV6 = 463, /* VAR_MAX_ECS_TREE_SIZE_IPV6  */
    VAR_CAPS_WHITELIST = 464,      /* VAR_CAPS_WHITELIST  */
    VAR_CACHE_MAX_NEGATIVE_TTL = 465, /* VAR_CACHE_MAX_NEGATIVE_TTL  */
    VAR_PERMIT_SMALL_HOLDDOWN = 466, /* VAR_PERMIT_SMALL_HOLDDOWN  */
    VAR_QNAME_MINIMISATION = 467,  /* VAR_QNAME_MINIMISATION  */
    VAR_QNAME_MINIMISATION_STRICT = 468, /* VAR_QNAME_MINIMISATION_STRICT  */
    VAR_IP_FREEBIND = 469,         /* VAR_IP_FREEBIND  */
    VAR_DEFINE_TAG = 470,          /* VAR_DEFINE_TAG  */
    VAR_LOCAL_ZONE_TAG = 471,      /* VAR_LOCAL_ZONE_TAG  */
    VAR_ACCESS_CONTROL_TAG = 472,  /* VAR_ACCESS_CONTROL_TAG  */
    VAR_LOCAL_ZONE_OVERRIDE = 473, /* VAR_LOCAL_ZONE_OVERRIDE  */
    VAR_ACCESS_CONTROL_TAG_ACTION = 474, /* VAR_ACCESS_CONTROL_TAG_ACTION  */
    VAR_ACCESS_CONTROL_TAG_DATA = 475, /* VAR_ACCESS_CONTROL_TAG_DATA  */
    VAR_VIEW = 476,                /* VAR_VIEW  */
    VAR_ACCESS_CONTROL_VIEW = 477, /* VAR_ACCESS_CONTROL_VIEW  */
    VAR_VIEW_FIRST = 478,          /* VAR_VIEW_FIRST  */
    VAR_SERVE_EXPIRED = 479,       /* VAR_SERVE_EXPIRED  */
    VAR_SERVE_EXPIRED_TTL = 480,   /* VAR_SERVE_EXPIRED_TTL  */
    VAR_SERVE_EXPIRED_TTL_RESET = 481, /* VAR_SERVE_EXPIRED_TTL_RESET  */
    VAR_SERVE_EXPIRED_REPLY_TTL = 482, /* VAR_SERVE_EXPIRED_REPLY_TTL  */
    VAR_SERVE_EXPIRED_CLIENT_TIMEOUT = 483, /* VAR_SERVE_EXPIRED_CLIENT_TIMEOUT  */
    VAR_SERVE_ORIGINAL_TTL = 484,  /* VAR_SERVE_ORIGINAL_TTL  */
    VAR_FAKE_DSA = 485,            /* VAR_FAKE_DSA  */
    VAR_FAKE_SHA1 = 486,           /* VAR_FAKE_SHA1  */
    VAR_LOG_IDENTITY = 487,        /* VAR_LOG_IDENTITY  */
    VAR_HIDE_TRUSTANCHOR = 488,    /* VAR_HIDE_TRUSTANCHOR  */
    VAR_TRUST_ANCHOR_SIGNALING = 489, /* VAR_TRUST_ANCHOR_SIGNALING  */
    VAR_AGGRESSIVE_NSEC = 490,     /* VAR_AGGRESSIVE_NSEC  */
    VAR_USE_SYSTEMD = 491,         /* VAR_USE_SYSTEMD  */
    VAR_SHM_ENABLE = 492,          /* VAR_SHM_ENABLE  */
    VAR_SHM_KEY = 493,             /* VAR_SHM_KEY  */
    VAR_ROOT_KEY_SENTINEL = 494,   /* VAR_ROOT_KEY_SENTINEL  */
    VAR_DNSCRYPT = 495,            /* VAR_DNSCRYPT  */
    VAR_DNSCRYPT_ENABLE = 496,     /* VAR_DNSCRYPT_ENABLE  */
    VAR_DNSCRYPT_PORT = 497,       /* VAR_DNSCRYPT_PORT  */
    VAR_DNSCRYPT_PROVIDER = 498,   /* VAR_DNSCRYPT_PROVIDER  */
    VAR_DNSCRYPT_SECRET_KEY = 499, /* VAR_DNSCRYPT_SECRET_KEY  */
    VAR_DNSCRYPT_PROVIDER_CERT = 500, /* VAR_DNSCRYPT_PROVIDER_CERT  */
    VAR_DNSCRYPT_PROVIDER_CERT_ROTATED = 501, /* VAR_DNSCRYPT_PROVIDER_CERT_ROTATED  */
    VAR_DNSCRYPT_SHARED_SECRET_CACHE_SIZE = 502, /* VAR_DNSCRYPT_SHARED_SECRET_CACHE_SIZE  */
    VAR_DNSCRYPT_SHARED_SECRET_CACHE_SLABS = 503, /* VAR_DNSCRYPT_SHARED_SECRET_CACHE_SLABS  */
    VAR_DNSCRYPT_NONCE_CACHE_SIZE = 504, /* VAR_DNSCRYPT_NONCE_CACHE_SIZE  */
    VAR_DNSCRYPT_NONCE_CACHE_SLABS = 505, /* VAR_DNSCRYPT_NONCE_CACHE_SLABS  */
    VAR_PAD_RESPONSES = 506,       /* VAR_PAD_RESPONSES  */
    VAR_PAD_RESPONSES_BLOCK_SIZE = 507, /* VAR_PAD_RESPONSES_BLOCK_SIZE  */
    VAR_PAD_QUERIES = 508,         /* VAR_PAD_QUERIES  */
    VAR_PAD_QUERIES_BLOCK_SIZE = 509, /* VAR_PAD_QUERIES_BLOCK_SIZE  */
    VAR_IPSECMOD_ENABLED = 510,    /* VAR_IPSECMOD_ENABLED  */
    VAR_IPSECMOD_HOOK = 511,       /* VAR_IPSECMOD_HOOK  */
    VAR_IPSECMOD_IGNORE_BOGUS = 512, /* VAR_IPSECMOD_IGNORE_BOGUS  */
    VAR_IPSECMOD_MAX_TTL = 513,    /* VAR_IPSECMOD_MAX_TTL  */
    VAR_IPSECMOD_WHITELIST = 514,  /* VAR_IPSECMOD_WHITELIST  */
    VAR_IPSECMOD_STRICT = 515,     /* VAR_IPSECMOD_STRICT  */
    VAR_CACHEDB = 516,             /* VAR_CACHEDB  */
    VAR_CACHEDB_BACKEND = 517,     /* VAR_CACHEDB_BACKEND  */
    VAR_CACHEDB_SECRETSEED = 518,  /* VAR_CACHEDB_SECRETSEED  */
    VAR_CACHEDB_REDISHOST = 519,   /* VAR_CACHEDB_REDISHOST  */
    VAR_CACHEDB_REDISPORT = 520,   /* VAR_CACHEDB_REDISPORT  */
    VAR_CACHEDB_REDISTIMEOUT = 521, /* VAR_CACHEDB_REDISTIMEOUT  */
    VAR_CACHEDB_REDISEXPIRERECORDS = 522, /* VAR_CACHEDB_REDISEXPIRERECORDS  */
    VAR_UDP_UPSTREAM_WITHOUT_DOWNSTREAM = 523, /* VAR_UDP_UPSTREAM_WITHOUT_DOWNSTREAM  */
    VAR_FOR_UPSTREAM = 524,        /* VAR_FOR_UPSTREAM  */
    VAR_AUTH_ZONE = 525,           /* VAR_AUTH_ZONE  */
    VAR_ZONEFILE = 526,            /* VAR_ZONEFILE  */
    VAR_MASTER = 527,              /* VAR_MASTER  */
    VAR_URL = 528,                 /* VAR_URL  */
    VAR_FOR_DOWNSTREAM = 529,      /* VAR_FOR_DOWNSTREAM  */
    VAR_FALLBACK_ENABLED = 530,    /* VAR_FALLBACK_ENABLED  */
    VAR_TLS_ADDITIONAL_PORT = 531, /* VAR_TLS_ADDITIONAL_PORT  */
    VAR_LOW_RTT = 532,             /* VAR_LOW_RTT  */
    VAR_LOW_RTT_PERMIL = 533,      /* VAR_LOW_RTT_PERMIL  */
    VAR_FAST_SERVER_PERMIL = 534,  /* VAR_FAST_SERVER_PERMIL  */
    VAR_FAST_SERVER_NUM = 535,     /* VAR_FAST_SERVER_NUM  */
    VAR_ALLOW_NOTIFY = 536,        /* VAR_ALLOW_NOTIFY  */
    VAR_TLS_WIN_CERT = 537,        /* VAR_TLS_WIN_CERT  */
    VAR_TCP_CONNECTION_LIMIT = 538, /* VAR_TCP_CONNECTION_LIMIT  */
    VAR_FORWARD_NO_CACHE = 539,    /* VAR_FORWARD_NO_CACHE  */
    VAR_STUB_NO_CACHE = 540,       /* VAR_STUB_NO_CACHE  */
    VAR_LOG_SERVFAIL = 541,        /* VAR_LOG_SERVFAIL  */
    VAR_DENY_ANY = 542,            /* VAR_DENY_ANY  */
    VAR_UNKNOWN_SERVER_TIME_LIMIT = 543, /* VAR_UNKNOWN_SERVER_TIME_LIMIT  */
    VAR_LOG_TAG_QUERYREPLY = 544,  /* VAR_LOG_TAG_QUERYREPLY  */
    VAR_STREAM_WAIT_SIZE = 545,    /* VAR_STREAM_WAIT_SIZE  */
    VAR_TLS_CIPHERS = 546,         /* VAR_TLS_CIPHERS  */
    VAR_TLS_CIPHERSUITES = 547,    /* VAR_TLS_CIPHERSUITES  */
    VAR_TLS_USE_SNI = 548,         /* VAR_TLS_USE_SNI  */
    VAR_IPSET = 549,               /* VAR_IPSET  */
    VAR_IPSET_NAME_V4 = 550,       /* VAR_IPSET_NAME_V4  */
    VAR_IPSET_NAME_V6 = 551,       /* VAR_IPSET_NAME_V6  */
    VAR_TLS_SESSION_TICKET_KEYS = 552, /* VAR_TLS_SESSION_TICKET_KEYS  */
    VAR_RPZ = 553,                 /* VAR_RPZ  */
    VAR_TAGS = 554,                /* VAR_TAGS  */
    VAR_RPZ_ACTION_OVERRIDE = 555, /* VAR_RPZ_ACTION_OVERRIDE  */
    VAR_RPZ_CNAME_OVERRIDE = 556,  /* VAR_RPZ_CNAME_OVERRIDE  */
    VAR_RPZ_LOG = 557,             /* VAR_RPZ_LOG  */
    VAR_RPZ_LOG_NAME = 558,        /* VAR_RPZ_LOG_NAME  */
    VAR_DYNLIB = 559,              /* VAR_DYNLIB  */
    VAR_DYNLIB_FILE = 560,         /* VAR_DYNLIB_FILE  */
    VAR_EDNS_CLIENT_STRING = 561,  /* VAR_EDNS_CLIENT_STRING  */
    VAR_EDNS_CLIENT_STRING_OPCODE = 562, /* VAR_EDNS_CLIENT_STRING_OPCODE  */
    VAR_NSID = 563                 /* VAR_NSID  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
#define SPACE 258
#define LETTER 259
#define NEWLINE 260
#define COMMENT 261
#define COLON 262
#define ANY 263
#define ZONESTR 264
#define STRING_ARG 265
#define VAR_FORCE_TOPLEVEL 266
#define VAR_SERVER 267
#define VAR_VERBOSITY 268
#define VAR_NUM_THREADS 269
#define VAR_PORT 270
#define VAR_OUTGOING_RANGE 271
#define VAR_INTERFACE 272
#define VAR_PREFER_IP4 273
#define VAR_DO_IP4 274
#define VAR_DO_IP6 275
#define VAR_PREFER_IP6 276
#define VAR_DO_UDP 277
#define VAR_DO_TCP 278
#define VAR_TCP_MSS 279
#define VAR_OUTGOING_TCP_MSS 280
#define VAR_TCP_IDLE_TIMEOUT 281
#define VAR_EDNS_TCP_KEEPALIVE 282
#define VAR_EDNS_TCP_KEEPALIVE_TIMEOUT 283
#define VAR_CHROOT 284
#define VAR_USERNAME 285
#define VAR_DIRECTORY 286
#define VAR_LOGFILE 287
#define VAR_PIDFILE 288
#define VAR_MSG_CACHE_SIZE 289
#define VAR_MSG_CACHE_SLABS 290
#define VAR_NUM_QUERIES_PER_THREAD 291
#define VAR_RRSET_CACHE_SIZE 292
#define VAR_RRSET_CACHE_SLABS 293
#define VAR_OUTGOING_NUM_TCP 294
#define VAR_INFRA_HOST_TTL 295
#define VAR_INFRA_LAME_TTL 296
#define VAR_INFRA_CACHE_SLABS 297
#define VAR_INFRA_CACHE_NUMHOSTS 298
#define VAR_INFRA_CACHE_LAME_SIZE 299
#define VAR_NAME 300
#define VAR_STUB_ZONE 301
#define VAR_STUB_HOST 302
#define VAR_STUB_ADDR 303
#define VAR_TARGET_FETCH_POLICY 304
#define VAR_HARDEN_SHORT_BUFSIZE 305
#define VAR_HARDEN_LARGE_QUERIES 306
#define VAR_FORWARD_ZONE 307
#define VAR_FORWARD_HOST 308
#define VAR_FORWARD_ADDR 309
#define VAR_DO_NOT_QUERY_ADDRESS 310
#define VAR_HIDE_IDENTITY 311
#define VAR_HIDE_VERSION 312
#define VAR_IDENTITY 313
#define VAR_VERSION 314
#define VAR_HARDEN_GLUE 315
#define VAR_MODULE_CONF 316
#define VAR_TRUST_ANCHOR_FILE 317
#define VAR_TRUST_ANCHOR 318
#define VAR_VAL_OVERRIDE_DATE 319
#define VAR_BOGUS_TTL 320
#define VAR_VAL_CLEAN_ADDITIONAL 321
#define VAR_VAL_PERMISSIVE_MODE 322
#define VAR_INCOMING_NUM_TCP 323
#define VAR_MSG_BUFFER_SIZE 324
#define VAR_KEY_CACHE_SIZE 325
#define VAR_KEY_CACHE_SLABS 326
#define VAR_TRUSTED_KEYS_FILE 327
#define VAR_VAL_NSEC3_KEYSIZE_ITERATIONS 328
#define VAR_USE_SYSLOG 329
#define VAR_OUTGOING_INTERFACE 330
#define VAR_ROOT_HINTS 331
#define VAR_DO_NOT_QUERY_LOCALHOST 332
#define VAR_CACHE_MAX_TTL 333
#define VAR_HARDEN_DNSSEC_STRIPPED 334
#define VAR_ACCESS_CONTROL 335
#define VAR_LOCAL_ZONE 336
#define VAR_LOCAL_DATA 337
#define VAR_INTERFACE_AUTOMATIC 338
#define VAR_STATISTICS_INTERVAL 339
#define VAR_DO_DAEMONIZE 340
#define VAR_USE_CAPS_FOR_ID 341
#define VAR_STATISTICS_CUMULATIVE 342
#define VAR_OUTGOING_PORT_PERMIT 343
#define VAR_OUTGOING_PORT_AVOID 344
#define VAR_DLV_ANCHOR_FILE 345
#define VAR_DLV_ANCHOR 346
#define VAR_NEG_CACHE_SIZE 347
#define VAR_HARDEN_REFERRAL_PATH 348
#define VAR_PRIVATE_ADDRESS 349
#define VAR_PRIVATE_DOMAIN 350
#define VAR_REMOTE_CONTROL 351
#define VAR_CONTROL_ENABLE 352
#define VAR_CONTROL_INTERFACE 353
#define VAR_CONTROL_PORT 354
#define VAR_SERVER_KEY_FILE 355
#define VAR_SERVER_CERT_FILE 356
#define VAR_CONTROL_KEY_FILE 357
#define VAR_CONTROL_CERT_FILE 358
#define VAR_CONTROL_USE_CERT 359
#define VAR_EXTENDED_STATISTICS 360
#define VAR_LOCAL_DATA_PTR 361
#define VAR_JOSTLE_TIMEOUT 362
#define VAR_STUB_PRIME 363
#define VAR_UNWANTED_REPLY_THRESHOLD 364
#define VAR_LOG_TIME_ASCII 365
#define VAR_DOMAIN_INSECURE 366
#define VAR_PYTHON 367
#define VAR_PYTHON_SCRIPT 368
#define VAR_VAL_SIG_SKEW_MIN 369
#define VAR_VAL_SIG_SKEW_MAX 370
#define VAR_CACHE_MIN_TTL 371
#define VAR_VAL_LOG_LEVEL 372
#define VAR_AUTO_TRUST_ANCHOR_FILE 373
#define VAR_KEEP_MISSING 374
#define VAR_ADD_HOLDDOWN 375
#define VAR_DEL_HOLDDOWN 376
#define VAR_SO_RCVBUF 377
#define VAR_EDNS_BUFFER_SIZE 378
#define VAR_PREFETCH 379
#define VAR_PREFETCH_KEY 380
#define VAR_SO_SNDBUF 381
#define VAR_SO_REUSEPORT 382
#define VAR_HARDEN_BELOW_NXDOMAIN 383
#define VAR_IGNORE_CD_FLAG 384
#define VAR_LOG_QUERIES 385
#define VAR_LOG_REPLIES 386
#define VAR_LOG_LOCAL_ACTIONS 387
#define VAR_TCP_UPSTREAM 388
#define VAR_SSL_UPSTREAM 389
#define VAR_SSL_SERVICE_KEY 390
#define VAR_SSL_SERVICE_PEM 391
#define VAR_SSL_PORT 392
#define VAR_FORWARD_FIRST 393
#define VAR_STUB_SSL_UPSTREAM 394
#define VAR_FORWARD_SSL_UPSTREAM 395
#define VAR_TLS_CERT_BUNDLE 396
#define VAR_HTTPS_PORT 397
#define VAR_HTTP_ENDPOINT 398
#define VAR_HTTP_MAX_STREAMS 399
#define VAR_HTTP_QUERY_BUFFER_SIZE 400
#define VAR_HTTP_RESPONSE_BUFFER_SIZE 401
#define VAR_HTTP_NODELAY 402
#define VAR_HTTP_NOTLS_DOWNSTREAM 403
#define VAR_STUB_FIRST 404
#define VAR_MINIMAL_RESPONSES 405
#define VAR_RRSET_ROUNDROBIN 406
#define VAR_MAX_UDP_SIZE 407
#define VAR_DELAY_CLOSE 408
#define VAR_UDP_CONNECT 409
#define VAR_UNBLOCK_LAN_ZONES 410
#define VAR_INSECURE_LAN_ZONES 411
#define VAR_INFRA_CACHE_MIN_RTT 412
#define VAR_INFRA_KEEP_PROBING 413
#define VAR_DNS64_PREFIX 414
#define VAR_DNS64_SYNTHALL 415
#define VAR_DNS64_IGNORE_AAAA 416
#define VAR_DNSTAP 417
#define VAR_DNSTAP_ENABLE 418
#define VAR_DNSTAP_SOCKET_PATH 419
#define VAR_DNSTAP_IP 420
#define VAR_DNSTAP_TLS 421
#define VAR_DNSTAP_TLS_SERVER_NAME 422
#define VAR_DNSTAP_TLS_CERT_BUNDLE 423
#define VAR_DNSTAP_TLS_CLIENT_KEY_FILE 424
#define VAR_DNSTAP_TLS_CLIENT_CERT_FILE 425
#define VAR_DNSTAP_SEND_IDENTITY 426
#define VAR_DNSTAP_SEND_VERSION 427
#define VAR_DNSTAP_BIDIRECTIONAL 428
#define VAR_DNSTAP_IDENTITY 429
#define VAR_DNSTAP_VERSION 430
#define VAR_DNSTAP_LOG_RESOLVER_QUERY_MESSAGES 431
#define VAR_DNSTAP_LOG_RESOLVER_RESPONSE_MESSAGES 432
#define VAR_DNSTAP_LOG_CLIENT_QUERY_MESSAGES 433
#define VAR_DNSTAP_LOG_CLIENT_RESPONSE_MESSAGES 434
#define VAR_DNSTAP_LOG_FORWARDER_QUERY_MESSAGES 435
#define VAR_DNSTAP_LOG_FORWARDER_RESPONSE_MESSAGES 436
#define VAR_RESPONSE_IP_TAG 437
#define VAR_RESPONSE_IP 438
#define VAR_RESPONSE_IP_DATA 439
#define VAR_HARDEN_ALGO_DOWNGRADE 440
#define VAR_IP_TRANSPARENT 441
#define VAR_IP_DSCP 442
#define VAR_DISABLE_DNSSEC_LAME_CHECK 443
#define VAR_IP_RATELIMIT 444
#define VAR_IP_RATELIMIT_SLABS 445
#define VAR_IP_RATELIMIT_SIZE 446
#define VAR_RATELIMIT 447
#define VAR_RATELIMIT_SLABS 448
#define VAR_RATELIMIT_SIZE 449
#define VAR_RATELIMIT_FOR_DOMAIN 450
#define VAR_RATELIMIT_BELOW_DOMAIN 451
#define VAR_IP_RATELIMIT_FACTOR 452
#define VAR_RATELIMIT_FACTOR 453
#define VAR_SEND_CLIENT_SUBNET 454
#define VAR_CLIENT_SUBNET_ZONE 455
#define VAR_CLIENT_SUBNET_ALWAYS_FORWARD 456
#define VAR_CLIENT_SUBNET_OPCODE 457
#define VAR_MAX_CLIENT_SUBNET_IPV4 458
#define VAR_MAX_CLIENT_SUBNET_IPV6 459
#define VAR_MIN_CLIENT_SUBNET_IPV4 460
#define VAR_MIN_CLIENT_SUBNET_IPV6 461
#define VAR_MAX_ECS_TREE_SIZE_IPV4 462
#define VAR_MAX_ECS_TREE_SIZE_IPV6 463
#define VAR_CAPS_WHITELIST 464
#define VAR_CACHE_MAX_NEGATIVE_TTL 465
#define VAR_PERMIT_SMALL_HOLDDOWN 466
#define VAR_QNAME_MINIMISATION 467
#define VAR_QNAME_MINIMISATION_STRICT 468
#define VAR_IP_FREEBIND 469
#define VAR_DEFINE_TAG 470
#define VAR_LOCAL_ZONE_TAG 471
#define VAR_ACCESS_CONTROL_TAG 472
#define VAR_LOCAL_ZONE_OVERRIDE 473
#define VAR_ACCESS_CONTROL_TAG_ACTION 474
#define VAR_ACCESS_CONTROL_TAG_DATA 475
#define VAR_VIEW 476
#define VAR_ACCESS_CONTROL_VIEW 477
#define VAR_VIEW_FIRST 478
#define VAR_SERVE_EXPIRED 479
#define VAR_SERVE_EXPIRED_TTL 480
#define VAR_SERVE_EXPIRED_TTL_RESET 481
#define VAR_SERVE_EXPIRED_REPLY_TTL 482
#define VAR_SERVE_EXPIRED_CLIENT_TIMEOUT 483
#define VAR_SERVE_ORIGINAL_TTL 484
#define VAR_FAKE_DSA 485
#define VAR_FAKE_SHA1 486
#define VAR_LOG_IDENTITY 487
#define VAR_HIDE_TRUSTANCHOR 488
#define VAR_TRUST_ANCHOR_SIGNALING 489
#define VAR_AGGRESSIVE_NSEC 490
#define VAR_USE_SYSTEMD 491
#define VAR_SHM_ENABLE 492
#define VAR_SHM_KEY 493
#define VAR_ROOT_KEY_SENTINEL 494
#define VAR_DNSCRYPT 495
#define VAR_DNSCRYPT_ENABLE 496
#define VAR_DNSCRYPT_PORT 497
#define VAR_DNSCRYPT_PROVIDER 498
#define VAR_DNSCRYPT_SECRET_KEY 499
#define VAR_DNSCRYPT_PROVIDER_CERT 500
#define VAR_DNSCRYPT_PROVIDER_CERT_ROTATED 501
#define VAR_DNSCRYPT_SHARED_SECRET_CACHE_SIZE 502
#define VAR_DNSCRYPT_SHARED_SECRET_CACHE_SLABS 503
#define VAR_DNSCRYPT_NONCE_CACHE_SIZE 504
#define VAR_DNSCRYPT_NONCE_CACHE_SLABS 505
#define VAR_PAD_RESPONSES 506
#define VAR_PAD_RESPONSES_BLOCK_SIZE 507
#define VAR_PAD_QUERIES 508
#define VAR_PAD_QUERIES_BLOCK_SIZE 509
#define VAR_IPSECMOD_ENABLED 510
#define VAR_IPSECMOD_HOOK 511
#define VAR_IPSECMOD_IGNORE_BOGUS 512
#define VAR_IPSECMOD_MAX_TTL 513
#define VAR_IPSECMOD_WHITELIST 514
#define VAR_IPSECMOD_STRICT 515
#define VAR_CACHEDB 516
#define VAR_CACHEDB_BACKEND 517
#define VAR_CACHEDB_SECRETSEED 518
#define VAR_CACHEDB_REDISHOST 519
#define VAR_CACHEDB_REDISPORT 520
#define VAR_CACHEDB_REDISTIMEOUT 521
#define VAR_CACHEDB_REDISEXPIRERECORDS 522
#define VAR_UDP_UPSTREAM_WITHOUT_DOWNSTREAM 523
#define VAR_FOR_UPSTREAM 524
#define VAR_AUTH_ZONE 525
#define VAR_ZONEFILE 526
#define VAR_MASTER 527
#define VAR_URL 528
#define VAR_FOR_DOWNSTREAM 529
#define VAR_FALLBACK_ENABLED 530
#define VAR_TLS_ADDITIONAL_PORT 531
#define VAR_LOW_RTT 532
#define VAR_LOW_RTT_PERMIL 533
#define VAR_FAST_SERVER_PERMIL 534
#define VAR_FAST_SERVER_NUM 535
#define VAR_ALLOW_NOTIFY 536
#define VAR_TLS_WIN_CERT 537
#define VAR_TCP_CONNECTION_LIMIT 538
#define VAR_FORWARD_NO_CACHE 539
#define VAR_STUB_NO_CACHE 540
#define VAR_LOG_SERVFAIL 541
#define VAR_DENY_ANY 542
#define VAR_UNKNOWN_SERVER_TIME_LIMIT 543
#define VAR_LOG_TAG_QUERYREPLY 544
#define VAR_STREAM_WAIT_SIZE 545
#define VAR_TLS_CIPHERS 546
#define VAR_TLS_CIPHERSUITES 547
#define VAR_TLS_USE_SNI 548
#define VAR_IPSET 549
#define VAR_IPSET_NAME_V4 550
#define VAR_IPSET_NAME_V6 551
#define VAR_TLS_SESSION_TICKET_KEYS 552
#define VAR_RPZ 553
#define VAR_TAGS 554
#define VAR_RPZ_ACTION_OVERRIDE 555
#define VAR_RPZ_CNAME_OVERRIDE 556
#define VAR_RPZ_LOG 557
#define VAR_RPZ_LOG_NAME 558
#define VAR_DYNLIB 559
#define VAR_DYNLIB_FILE 560
#define VAR_EDNS_CLIENT_STRING 561
#define VAR_EDNS_CLIENT_STRING_OPCODE 562
#define VAR_NSID 563

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 66 "./util/configparser.y"

	char*	str;

#line 686 "util/configparser.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_UTIL_CONFIGPARSER_H_INCLUDED  */
