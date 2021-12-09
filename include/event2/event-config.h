/* event2/event-config.h
 *
 * This file was generated by autoconf when libevent was built, and post-
 * processed by Libevent so that its macros would have a uniform prefix.
 *
 * DO NOT EDIT THIS FILE.
 *
 * Do not rely on macros in this file existing in later versions.
 */

#ifndef EVENT2_EVENT_CONFIG_H_INCLUDED_
#define EVENT2_EVENT_CONFIG_H_INCLUDED_

/* config.h.  Generated from config.h.in by configure.  */
/* config.h.in.  Generated from configure.ac by autoheader.  */

/* Define if libevent should build without support for a debug mode */
/* #undef EVENT__DISABLE_DEBUG_MODE */

/* Define if libevent should not allow replacing the mm functions */
/* #undef EVENT__DISABLE_MM_REPLACEMENT */

/* Define if libevent should not be compiled with thread support */
/* #undef EVENT__DISABLE_THREAD_SUPPORT */

/* Define to 1 if you have the `accept4' function. */
#define EVENT__HAVE_ACCEPT4 1

/* Define to 1 if you have the <afunix.h> header file. */
/* #undef EVENT__HAVE_AFUNIX_H */

/* Define to 1 if you have the `arc4random' function. */
#define EVENT__HAVE_ARC4RANDOM 1

/* Define to 1 if you have the `arc4random_addrandom' function. */
/* #undef EVENT__HAVE_ARC4RANDOM_ADDRANDOM */

/* Define to 1 if you have the `arc4random_buf' function. */
#define EVENT__HAVE_ARC4RANDOM_BUF 1

/* Define to 1 if you have the <arpa/inet.h> header file. */
#define EVENT__HAVE_ARPA_INET_H 1

/* Define to 1 if you have the `clock_gettime' function. */
#define EVENT__HAVE_CLOCK_GETTIME 1

/* Define to 1 if you have the declaration of `CTL_KERN', and to 0 if you
   don't. */
/* #undef EVENT__HAVE_DECL_CTL_KERN */

/* Define to 1 if you have the declaration of `KERN_ARND', and to 0 if you
   don't. */
/* #undef EVENT__HAVE_DECL_KERN_ARND */

/* Define if /dev/poll is available */
/* #undef EVENT__HAVE_DEVPOLL */

/* Define to 1 if you have the <dlfcn.h> header file. */
#define EVENT__HAVE_DLFCN_H 1

/* Define if your system supports the epoll system calls */
#define EVENT__HAVE_EPOLL 1

/* Define to 1 if you have the `epoll_create1' function. */
#define EVENT__HAVE_EPOLL_CREATE1 1

/* Define to 1 if you have the `epoll_ctl' function. */
#define EVENT__HAVE_EPOLL_CTL 1

/* Define to 1 if you have the <errno.h> header file. */
#define EVENT__HAVE_ERRNO_H 1

/* Define to 1 if you have the `eventfd' function. */
#define EVENT__HAVE_EVENTFD 1

/* Define if your system supports event ports */
/* #undef EVENT__HAVE_EVENT_PORTS */

/* Define to 1 if you have the `fcntl' function. */
#define EVENT__HAVE_FCNTL 1

/* Define to 1 if you have the <fcntl.h> header file. */
#define EVENT__HAVE_FCNTL_H 1

/* Define to 1 if the system has the type `fd_mask'. */
#define EVENT__HAVE_FD_MASK 1

/* Do we have getaddrinfo()? */
#define EVENT__HAVE_GETADDRINFO 1

/* Define to 1 if you have the `getegid' function. */
#define EVENT__HAVE_GETEGID 1

/* Define to 1 if you have the `geteuid' function. */
#define EVENT__HAVE_GETEUID 1

/* Define this if you have any gethostbyname_r() */
/* #undef EVENT__HAVE_GETHOSTBYNAME_R */

/* Define this if gethostbyname_r takes 3 arguments */
/* #undef EVENT__HAVE_GETHOSTBYNAME_R_3_ARG */

/* Define this if gethostbyname_r takes 5 arguments */
/* #undef EVENT__HAVE_GETHOSTBYNAME_R_5_ARG */

/* Define this if gethostbyname_r takes 6 arguments */
/* #undef EVENT__HAVE_GETHOSTBYNAME_R_6_ARG */

/* Define to 1 if you have the `getifaddrs' function. */
/* #undef EVENT__HAVE_GETIFADDRS */

/* Define to 1 if you have the `getnameinfo' function. */
#define EVENT__HAVE_GETNAMEINFO 1

/* Define to 1 if you have the `getprotobynumber' function. */
#define EVENT__HAVE_GETPROTOBYNUMBER 1

/* Define to 1 if you have the `getrandom' function. */
/* #undef EVENT__HAVE_GETRANDOM */

/* Define to 1 if you have the `getservbyname' function. */
#define EVENT__HAVE_GETSERVBYNAME 1

/* Define to 1 if you have the `gettimeofday' function. */
#define EVENT__HAVE_GETTIMEOFDAY 1

/* Define to 1 if you have the <ifaddrs.h> header file. */
#define EVENT__HAVE_IFADDRS_H 1

/* Define to 1 if you have the `inet_ntop' function. */
#define EVENT__HAVE_INET_NTOP 1

/* Define to 1 if you have the `inet_pton' function. */
#define EVENT__HAVE_INET_PTON 1

/* Define to 1 if you have the <inttypes.h> header file. */
#define EVENT__HAVE_INTTYPES_H 1

/* Define to 1 if you have the `issetugid' function. */
/* #undef EVENT__HAVE_ISSETUGID */

/* Define to 1 if you have the `kqueue' function. */
/* #undef EVENT__HAVE_KQUEUE */

/* Define to 1 if you have the `ws2_32' library (-lws2_32). */
/* #undef EVENT__HAVE_LIBWS2_32 */

/* Define if the system has zlib */
#define EVENT__HAVE_LIBZ 1

/* Define to 1 if you have the `mach_absolute_time' function. */
/* #undef EVENT__HAVE_MACH_ABSOLUTE_TIME */

/* Define to 1 if you have the <mach/mach.h> header file. */
/* #undef EVENT__HAVE_MACH_MACH_H */

/* Define to 1 if you have the <mach/mach_time.h> header file. */
/* #undef EVENT__HAVE_MACH_MACH_TIME_H */

/* Define if the system has mbedtls */
/* #undef EVENT__HAVE_MBEDTLS */
#define EVENT__HAVE_MBEDTLS 1

/* Define to 1 if you have the <mbedtls/ssl.h> header file. */
/* #undef EVENT__HAVE_MBEDTLS_SSL_H */
#define EVENT__HAVE_MBEDTLS_SSL_H 1

/* Define to 1 if you have the <minix/config.h> header file. */
/* #undef EVENT__HAVE_MINIX_CONFIG_H */

/* Define to 1 if you have the `mmap' function. */
#define EVENT__HAVE_MMAP 1

/* Define to 1 if you have the `nanosleep' function. */
#define EVENT__HAVE_NANOSLEEP 1

/* Define to 1 if you have the <netdb.h> header file. */
#define EVENT__HAVE_NETDB_H 1

/* Define to 1 if you have the <netinet/in6.h> header file. */
#define EVENT__HAVE_NETINET_IN6_H 1

/* Define to 1 if you have the <netinet/in.h> header file. */
#define EVENT__HAVE_NETINET_IN_H 1

/* Define to 1 if you have the <netinet/tcp.h> header file. */
#define EVENT__HAVE_NETINET_TCP_H 1

/* Define if the system has openssl */
/* #undef EVENT__HAVE_OPENSSL */
// #define EVENT__HAVE_OPENSSL 1

/* Define to 1 if you have the <openssl/ssl.h> header file. */
/* #undef EVENT__HAVE_OPENSSL_SSL_H */
// #define EVENT__HAVE_OPENSSL_SSL_H 1

/* Define to 1 if you have the `pipe' function. */
#define EVENT__HAVE_PIPE 1

/* Define to 1 if you have the `pipe2' function. */
#define EVENT__HAVE_PIPE2 1

/* Define to 1 if you have the `poll' function. */
#define EVENT__HAVE_POLL 1

/* Define to 1 if you have the <poll.h> header file. */
#define EVENT__HAVE_POLL_H 1

/* Define to 1 if you have the `port_create' function. */
/* #undef EVENT__HAVE_PORT_CREATE */

/* Define to 1 if you have the <port.h> header file. */
/* #undef EVENT__HAVE_PORT_H */

/* Define if you have POSIX threads libraries and header files. */
/* #undef EVENT__HAVE_PTHREAD */

/* Define if we have pthreads on this system */
#define EVENT__HAVE_PTHREADS 1

/* Define to 1 if you have the `pthread_mutexattr_setprotocol' function. */
/* #undef EVENT__HAVE_PTHREAD_MUTEXATTR_SETPROTOCOL */

/* Define to 1 if you have the `putenv' function. */
#define EVENT__HAVE_PUTENV 1

/* Define to 1 if the system has the type `sa_family_t'. */
#define EVENT__HAVE_SA_FAMILY_T 1

/* Define to 1 if you have the `select' function. */
#define EVENT__HAVE_SELECT 1

/* Define to 1 if you have the `sendfile' function. */
#define EVENT__HAVE_SENDFILE 1

/* Define to 1 if you have the `setenv' function. */
#define EVENT__HAVE_SETENV 1

/* Define if F_SETFD is defined in <fcntl.h> */
#define EVENT__HAVE_SETFD 1

/* Define to 1 if you have the `setrlimit' function. */
#define EVENT__HAVE_SETRLIMIT 1

/* Define to 1 if you have the `sigaction' function. */
#define EVENT__HAVE_SIGACTION 1

/* Define to 1 if you have the `signal' function. */
#define EVENT__HAVE_SIGNAL 1

/* Define to 1 if you have the <stdarg.h> header file. */
#define EVENT__HAVE_STDARG_H 1

/* Define to 1 if you have the <stddef.h> header file. */
#define EVENT__HAVE_STDDEF_H 1

/* Define to 1 if you have the <stdint.h> header file. */
#define EVENT__HAVE_STDINT_H 1

/* Define to 1 if you have the <stdio.h> header file. */
#define EVENT__HAVE_STDIO_H 1

/* Define to 1 if you have the <stdlib.h> header file. */
#define EVENT__HAVE_STDLIB_H 1

/* Define to 1 if you have the <strings.h> header file. */
#define EVENT__HAVE_STRINGS_H 1

/* Define to 1 if you have the <string.h> header file. */
#define EVENT__HAVE_STRING_H 1

/* Define to 1 if you have the `strlcpy' function. */
#define EVENT__HAVE_STRLCPY 1

/* Define to 1 if you have the `strsep' function. */
#define EVENT__HAVE_STRSEP 1

/* Define to 1 if you have the `strsignal' function. */
#define EVENT__HAVE_STRSIGNAL 1

/* Define to 1 if you have the `strtok_r' function. */
#define EVENT__HAVE_STRTOK_R 1

/* Define to 1 if you have the `strtoll' function. */
#define EVENT__HAVE_STRTOLL 1

/* Define to 1 if the system has the type `struct addrinfo'. */
#define EVENT__HAVE_STRUCT_ADDRINFO 1

/* Define to 1 if the system has the type `struct in6_addr'. */
#define EVENT__HAVE_STRUCT_IN6_ADDR 1

/* Define to 1 if `s6_addr16' is a member of `struct in6_addr'. */
#define EVENT__HAVE_STRUCT_IN6_ADDR_S6_ADDR16 1

/* Define to 1 if `s6_addr32' is a member of `struct in6_addr'. */
#define EVENT__HAVE_STRUCT_IN6_ADDR_S6_ADDR32 1

/* Define to 1 if the system has the type `struct linger'. */
#define EVENT__HAVE_STRUCT_LINGER 1

/* Define to 1 if the system has the type `struct sockaddr_in6'. */
#define EVENT__HAVE_STRUCT_SOCKADDR_IN6 1

/* Define to 1 if `sin6_len' is a member of `struct sockaddr_in6'. */
/* #undef EVENT__HAVE_STRUCT_SOCKADDR_IN6_SIN6_LEN */

/* Define to 1 if `sin_len' is a member of `struct sockaddr_in'. */
/* #undef EVENT__HAVE_STRUCT_SOCKADDR_IN_SIN_LEN */

/* Define to 1 if the system has the type `struct sockaddr_storage'. */
#define EVENT__HAVE_STRUCT_SOCKADDR_STORAGE 1

/* Define to 1 if `ss_family' is a member of `struct sockaddr_storage'. */
#define EVENT__HAVE_STRUCT_SOCKADDR_STORAGE_SS_FAMILY 1

/* Define to 1 if `__ss_family' is a member of `struct sockaddr_storage'. */
/* #undef EVENT__HAVE_STRUCT_SOCKADDR_STORAGE___SS_FAMILY */

/* Define to 1 if the system has the type `struct sockaddr_un'. */
#define EVENT__HAVE_STRUCT_SOCKADDR_UN 1

/* Define to 1 if you have the `sysctl' function. */
/* #undef EVENT__HAVE_SYSCTL */

/* Define to 1 if you have the <sys/devpoll.h> header file. */
/* #undef EVENT__HAVE_SYS_DEVPOLL_H */

/* Define to 1 if you have the <sys/epoll.h> header file. */
#define EVENT__HAVE_SYS_EPOLL_H 1

/* Define to 1 if you have the <sys/eventfd.h> header file. */
#define EVENT__HAVE_SYS_EVENTFD_H 1

/* Define to 1 if you have the <sys/event.h> header file. */
/* #undef EVENT__HAVE_SYS_EVENT_H */

/* Define to 1 if you have the <sys/ioctl.h> header file. */
#define EVENT__HAVE_SYS_IOCTL_H 1

/* Define to 1 if you have the <sys/mman.h> header file. */
#define EVENT__HAVE_SYS_MMAN_H 1

/* Define to 1 if you have the <sys/param.h> header file. */
#define EVENT__HAVE_SYS_PARAM_H 1

/* Define to 1 if you have the <sys/queue.h> header file. */
#define EVENT__HAVE_SYS_QUEUE_H 1

/* Define to 1 if you have the <sys/random.h> header file. */
#define EVENT__HAVE_SYS_RANDOM_H 1

/* Define to 1 if you have the <sys/resource.h> header file. */
#define EVENT__HAVE_SYS_RESOURCE_H 1

/* Define to 1 if you have the <sys/select.h> header file. */
#define EVENT__HAVE_SYS_SELECT_H 1

/* Define to 1 if you have the <sys/sendfile.h> header file. */
#define EVENT__HAVE_SYS_SENDFILE_H 1

/* Define to 1 if you have the <sys/socket.h> header file. */
#define EVENT__HAVE_SYS_SOCKET_H 1

/* Define to 1 if you have the <sys/stat.h> header file. */
#define EVENT__HAVE_SYS_STAT_H 1

/* Define to 1 if you have the <sys/sysctl.h> header file. */
/* #undef EVENT__HAVE_SYS_SYSCTL_H */

/* Define to 1 if you have the <sys/timerfd.h> header file. */
#define EVENT__HAVE_SYS_TIMERFD_H 1

/* Define to 1 if you have the <sys/time.h> header file. */
#define EVENT__HAVE_SYS_TIME_H 1

/* Define to 1 if you have the <sys/types.h> header file. */
#define EVENT__HAVE_SYS_TYPES_H 1

/* Define to 1 if you have the <sys/uio.h> header file. */
#define EVENT__HAVE_SYS_UIO_H 1

/* Define to 1 if you have the <sys/un.h> header file. */
#define EVENT__HAVE_SYS_UN_H 1

/* Define to 1 if you have the <sys/wait.h> header file. */
#define EVENT__HAVE_SYS_WAIT_H 1

/* Define if TAILQ_FOREACH is defined in <sys/queue.h> */
#define EVENT__HAVE_TAILQFOREACH 1

/* Define if timeradd is defined in <sys/time.h> */
#define EVENT__HAVE_TIMERADD 1

/* Define if timerclear is defined in <sys/time.h> */
#define EVENT__HAVE_TIMERCLEAR 1

/* Define if timercmp is defined in <sys/time.h> */
#define EVENT__HAVE_TIMERCMP 1

/* Define to 1 if you have the `timerfd_create' function. */
#define EVENT__HAVE_TIMERFD_CREATE 1

/* Define if timerisset is defined in <sys/time.h> */
#define EVENT__HAVE_TIMERISSET 1

/* Define to 1 if the system has the type `uint16_t'. */
#define EVENT__HAVE_UINT16_T 1

/* Define to 1 if the system has the type `uint32_t'. */
#define EVENT__HAVE_UINT32_T 1

/* Define to 1 if the system has the type `uint64_t'. */
#define EVENT__HAVE_UINT64_T 1

/* Define to 1 if the system has the type `uint8_t'. */
#define EVENT__HAVE_UINT8_T 1

/* Define to 1 if the system has the type `uintptr_t'. */
#define EVENT__HAVE_UINTPTR_T 1

/* Define to 1 if you have the `umask' function. */
#define EVENT__HAVE_UMASK 1

/* Define to 1 if you have the <unistd.h> header file. */
#define EVENT__HAVE_UNISTD_H 1

/* Define to 1 if you have the `unsetenv' function. */
#define EVENT__HAVE_UNSETENV 1

/* Define to 1 if you have the `usleep' function. */
#define EVENT__HAVE_USLEEP 1

/* Define to 1 if you have the <wchar.h> header file. */
#define EVENT__HAVE_WCHAR_H 1

/* Define if your system supports the wepoll module */
/* #undef EVENT__HAVE_WEPOLL */

/* Define if kqueue works correctly with pipes */
/* #undef EVENT__HAVE_WORKING_KQUEUE */

/* Define to 1 if you have the <zlib.h> header file. */
#define EVENT__HAVE_ZLIB_H 1

/* Define to 1 if you have the `_gmtime64' function. */
/* #undef EVENT__HAVE__GMTIME64 */

/* Define to 1 if you have the `_gmtime64_s' function. */
/* #undef EVENT__HAVE__GMTIME64_S */

/* Define to 1 if compiler have __FUNCTION__ */
#define EVENT__HAVE___FUNCTION__ 1

/* Define to 1 if compiler have __func__ */
#define EVENT__HAVE___func__ 1

/* Define to the sub-directory where libtool stores uninstalled libraries. */
#define EVENT__LT_OBJDIR ".libs/"

/* Numeric representation of the version */
#define EVENT__NUMERIC_VERSION 0x02020001

/* Name of package */
#define EVENT__PACKAGE "libevent"

/* Define to the address where bug reports for this package should be sent. */
#define EVENT__PACKAGE_BUGREPORT ""

/* Define to the full name of this package. */
#define EVENT__PACKAGE_NAME "libevent"

/* Define to the full name and version of this package. */
#define EVENT__PACKAGE_STRING "libevent 2.2.0-alpha-dev"

/* Define to the one symbol short name of this package. */
#define EVENT__PACKAGE_TARNAME "libevent"

/* Define to the home page for this package. */
#define EVENT__PACKAGE_URL ""

/* Define to the version of this package. */
#define EVENT__PACKAGE_VERSION "2.2.0-alpha-dev"

/* Define to necessary symbol if this constant uses a non-standard name on
   your system. */
/* #undef EVENT__PTHREAD_CREATE_JOINABLE */

/* The size of `int', as computed by sizeof. */
#define EVENT__SIZEOF_INT 4

/* The size of `long', as computed by sizeof. */
#define EVENT__SIZEOF_LONG 4

/* The size of `long long', as computed by sizeof. */
#define EVENT__SIZEOF_LONG_LONG 8

/* The size of `off_t', as computed by sizeof. */
#define EVENT__SIZEOF_OFF_T 8

/* The size of `pthread_t', as computed by sizeof. */
#define EVENT__SIZEOF_PTHREAD_T 4

/* The size of `short', as computed by sizeof. */
#define EVENT__SIZEOF_SHORT 2

/* The size of `size_t', as computed by sizeof. */
#define EVENT__SIZEOF_SIZE_T 4

/* The size of `time_t', as computed by sizeof. */
#define EVENT__SIZEOF_TIME_T 4

/* The size of `void *', as computed by sizeof. */
#define EVENT__SIZEOF_VOID_P 4

/* Define to 1 if all of the C90 standard headers exist (not just the ones
   required in a freestanding environment). This macro is provided for
   backward compatibility; new code need not use it. */
#define STDC_HEADERS 1

/* Enable extensions on AIX 3, Interix.  */
#ifndef _ALL_SOURCE
#define _ALL_SOURCE 1
#endif
/* Enable general extensions on macOS.  */
#ifndef _DARWIN_C_SOURCE
#define _DARWIN_C_SOURCE 1
#endif
/* Enable general extensions on Solaris.  */
#ifndef __EXTENSIONS__
#define __EXTENSIONS__ 1
#endif
/* Enable GNU extensions on systems that have them.  */
#ifndef _GNU_SOURCE
#define _GNU_SOURCE 1
#endif
/* Enable X/Open compliant socket functions that do not require linking
   with -lxnet on HP-UX 11.11.  */
#ifndef _HPUX_ALT_XOPEN_SOCKET_API
#define _HPUX_ALT_XOPEN_SOCKET_API 1
#endif
/* Identify the host operating system as Minix.
   This macro does not affect the system headers' behavior.
   A future release of Autoconf may stop defining this macro.  */
#ifndef _MINIX
/* # undef _MINIX */
#endif
/* Enable general extensions on NetBSD.
   Enable NetBSD compatibility extensions on Minix.  */
#ifndef _NETBSD_SOURCE
#define _NETBSD_SOURCE 1
#endif
/* Enable OpenBSD compatibility extensions on NetBSD.
   Oddly enough, this does nothing on OpenBSD.  */
#ifndef _OPENBSD_SOURCE
#define _OPENBSD_SOURCE 1
#endif
/* Define to 1 if needed for POSIX-compatible behavior.  */
#ifndef _POSIX_SOURCE
/* # undef _POSIX_SOURCE */
#endif
/* Define to 2 if needed for POSIX-compatible behavior.  */
#ifndef _POSIX_1_SOURCE
/* # undef _POSIX_1_SOURCE */
#endif
/* Enable POSIX-compatible threading on Solaris.  */
#ifndef _POSIX_PTHREAD_SEMANTICS
#define _POSIX_PTHREAD_SEMANTICS 1
#endif
/* Enable extensions specified by ISO/IEC TS 18661-5:2014.  */
#ifndef __STDC_WANT_IEC_60559_ATTRIBS_EXT__
#define __STDC_WANT_IEC_60559_ATTRIBS_EXT__ 1
#endif
/* Enable extensions specified by ISO/IEC TS 18661-1:2014.  */
#ifndef __STDC_WANT_IEC_60559_BFP_EXT__
#define __STDC_WANT_IEC_60559_BFP_EXT__ 1
#endif
/* Enable extensions specified by ISO/IEC TS 18661-2:2015.  */
#ifndef __STDC_WANT_IEC_60559_DFP_EXT__
#define __STDC_WANT_IEC_60559_DFP_EXT__ 1
#endif
/* Enable extensions specified by ISO/IEC TS 18661-4:2015.  */
#ifndef __STDC_WANT_IEC_60559_FUNCS_EXT__
#define __STDC_WANT_IEC_60559_FUNCS_EXT__ 1
#endif
/* Enable extensions specified by ISO/IEC TS 18661-3:2015.  */
#ifndef __STDC_WANT_IEC_60559_TYPES_EXT__
#define __STDC_WANT_IEC_60559_TYPES_EXT__ 1
#endif
/* Enable extensions specified by ISO/IEC TR 24731-2:2010.  */
#ifndef __STDC_WANT_LIB_EXT2__
#define __STDC_WANT_LIB_EXT2__ 1
#endif
/* Enable extensions specified by ISO/IEC 24747:2009.  */
#ifndef __STDC_WANT_MATH_SPEC_FUNCS__
#define __STDC_WANT_MATH_SPEC_FUNCS__ 1
#endif
/* Enable extensions on HP NonStop.  */
#ifndef _TANDEM_SOURCE
#define _TANDEM_SOURCE 1
#endif
/* Enable X/Open extensions.  Define to 500 only if necessary
   to make mbstate_t available.  */
#ifndef _XOPEN_SOURCE
/* # undef _XOPEN_SOURCE */
#endif


/* Version number of package */
#define EVENT__VERSION "2.2.0-alpha-dev"

/* Number of bits in a file offset, on hosts where this is settable. */
#define _FILE_OFFSET_BITS 64

/* Define for large files, on AIX-style hosts. */
/* #undef _LARGE_FILES */

/* Define to `__inline__' or `__inline' if that's what the C compiler
   calls it, or to nothing if 'inline' is not supported under any name.  */
#ifndef __cplusplus
/* #undef inline */
#endif

/* Define as a signed integer type capable of holding a process identifier. */
/* #undef pid_t */

/* Define to `unsigned int' if <sys/types.h> does not define. */
/* #undef size_t */

/* Define to unsigned int if you dont have it */
/* #undef socklen_t */

/* Define to `int' if <sys/types.h> does not define. */
/* #undef ssize_t */

#endif /* event2/event-config.h */
