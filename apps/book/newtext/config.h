/* config.h.in.  Generated from configure.ac by autoheader.  */

/* CPU and C ABI indicator */
#ifndef __i386__
#undef __i386__
#endif
#ifndef __x86_64__
#undef __x86_64__
#endif
#ifndef __alpha__
#undef __alpha__
#endif
#ifndef __arm__
#undef __arm__
#endif
#ifndef __armel__
#undef __armel__
#endif
#ifndef __hppa__
#undef __hppa__
#endif
#ifndef __hppa64__
#undef __hppa64__
#endif
#ifndef __ia64__
#undef __ia64__
#endif
#ifndef __m68k__
#undef __m68k__
#endif
#ifndef __mips__
#undef __mips__
#endif
#ifndef __mipsn32__
#undef __mipsn32__
#endif
#ifndef __mips64__
#undef __mips64__
#endif
#ifndef __powerpc__
#undef __powerpc__
#endif
#ifndef __powerpc64__
#undef __powerpc64__
#endif
#ifndef __s390__
#undef __s390__
#endif
#ifndef __s390x__
#undef __s390x__
#endif
#ifndef __sh__
#undef __sh__
#endif
#ifndef __sparc__
#undef __sparc__
#endif
#ifndef __sparc64__
#undef __sparc64__
#endif


/* Define if building universal (internal helper macro) */
#undef AC_APPLE_UNIVERSAL_BUILD

/* Define to the number of bits in type 'ptrdiff_t'. */
#undef BITSIZEOF_PTRDIFF_T

/* Define to the number of bits in type 'sig_atomic_t'. */
#undef BITSIZEOF_SIG_ATOMIC_T

/* Define to the number of bits in type 'size_t'. */
#undef BITSIZEOF_SIZE_T

/* Define to the number of bits in type 'wchar_t'. */
#undef BITSIZEOF_WCHAR_T

/* Define to the number of bits in type 'wint_t'. */
#undef BITSIZEOF_WINT_T

/* Define if you wish *printf() functions that have a safe handling of
   non-IEEE-754 'long double' values. */
#undef CHECK_PRINTF_SAFE

/* Define to 1 for strict checking in test-snprintf.c. */
#undef CHECK_SNPRINTF_POSIX

/* Define to 1 for strict checking in test-vsnprintf.c. */
#undef CHECK_VSNPRINTF_POSIX

/* Define to 1 if chown fails to change ctime when at least one argument was
   not -1. */
#undef CHOWN_CHANGE_TIME_BUG

/* Define if chown is not POSIX compliant regarding IDs of -1. */
#undef CHOWN_FAILS_TO_HONOR_ID_OF_NEGATIVE_ONE

/* Define if chown modifies symlinks. */
#undef CHOWN_MODIFIES_SYMLINK

/* Define to 1 if chown mishandles trailing slash. */
#undef CHOWN_TRAILING_SLASH_BUG

/* Define to one of '_getb67', 'GETB67', 'getb67' for Cray-2 and Cray-YMP
   systems. This function is required for 'alloca.c' support on those systems.
   */
#undef CRAY_STACKSEG_END

/* Define if mono is the preferred C# implementation. */
#undef CSHARP_CHOICE_MONO

/* Define if pnet is the preferred C# implementation. */
#undef CSHARP_CHOICE_PNET

/* Define to 1 if using 'alloca.c'. */
#undef C_ALLOCA

/* Define as the bit index in the word where to find bit 0 of the exponent of
   'double'. */
#undef DBL_EXPBIT0_BIT

/* Define as the word index where to find the exponent of 'double'. */
#undef DBL_EXPBIT0_WORD

/* Define as the bit index in the word where to find the sign of 'double'. */
#undef DBL_SIGNBIT_BIT

/* Define as the word index where to find the sign of 'double'. */
#undef DBL_SIGNBIT_WORD

/* Define the default level of POSIX conformance. The value is of the form
   YYYYMM, specifying the year and month the standard was adopted. If not
   defined here, it defaults to the value of _POSIX2_VERSION in <unistd.h>.
   Define to 199209 to default to POSIX 1003.2-1992, which makes standard
   programs like 'head', 'tail', and 'sort' accept obsolete options like '+10'
   and '-10'. Define to 200112 to default to POSIX 1003.1-2001, which makes
   these standard programs treat leading-'+' operands as file names and
   require modern usages like '-n 10' instead of '-10'. Whether defined here
   or not, the default can be overridden at run time via the _POSIX2_VERSION
   environment variable. */
#undef DEFAULT_POSIX2_VERSION

/* Define to 1 for DGUX with <sys/dg_sys_info.h>. */
#undef DGUX

/* the name of the file descriptor member of DIR */
#undef DIR_FD_MEMBER_NAME

#ifdef DIR_FD_MEMBER_NAME
# define DIR_TO_FD(Dir_p) ((Dir_p)->DIR_FD_MEMBER_NAME)
#else
# define DIR_TO_FD(Dir_p) -1
#endif


/* Define to 1 if // is a file system root distinct from /. */
#undef DOUBLE_SLASH_IS_DISTINCT_ROOT

/* Define if struct dirent has a member d_ino that actually works. */
#undef D_INO_IN_DIRENT

/* Define to 1 if translation of program messages to the user's native
   language is requested. */
#undef ENABLE_NLS

/* Define to 1 if the package shall run at any location in the file system. */
#undef ENABLE_RELOCATABLE

/* Define to 1 if an invalid memory address access may yield a SIGBUS. */
#undef FAULT_YIELDS_SIGBUS

/* Define to 1 if your platform has fchownat, but it does not reject an empty
   file name. */
#undef FCHOWNAT_EMPTY_FILENAME_BUG

/* Define to 1 if your platform has fchownat, but it cannot perform lchown
   tasks. */
#undef FCHOWNAT_NOFOLLOW_BUG

/* Define this to 1 if F_DUPFD behavior does not match POSIX */
#undef FCNTL_DUPFD_BUGGY

/* Define to nothing if C supports flexible array members, and to 1 if it does
   not. That way, with a declaration like 'struct s { int n; double
   d[FLEXIBLE_ARRAY_MEMBER]; };', the struct hack can be used with pre-C99
   compilers. When computing the size of such an object, don't use 'sizeof
   (struct s)' as it overestimates the size. Use 'offsetof (struct s, d)'
   instead. Don't use 'offsetof (struct s, d[0])', as this doesn't work with
   MSVC and with C++ compilers. */
#undef FLEXIBLE_ARRAY_MEMBER

/* Define as the bit index in the word where to find bit 0 of the exponent of
   'float'. */
#undef FLT_EXPBIT0_BIT

/* Define as the word index where to find the exponent of 'float'. */
#undef FLT_EXPBIT0_WORD

/* Define as the bit index in the word where to find the sign of 'float'. */
#undef FLT_SIGNBIT_BIT

/* Define as the word index where to find the sign of 'float'. */
#undef FLT_SIGNBIT_WORD

/* Define to 1 if fopen() fails to recognize a trailing slash. */
#undef FOPEN_TRAILING_SLASH_BUG

/* Define to 1 if the system's ftello function has the Solaris bug. */
#undef FTELLO_BROKEN_AFTER_SWITCHING_FROM_READ_TO_WRITE

/* Define to 1 if mkdir mistakenly creates a directory given with a trailing
   dot component. */
#undef FUNC_MKDIR_DOT_BUG

/* Define to 1 if nl_langinfo (YESEXPR) returns a non-empty string. */
#undef FUNC_NL_LANGINFO_YESEXPR_WORKS

/* Define to 1 if realpath() can malloc memory, always gives an absolute path,
   and handles trailing slash correctly. */
#undef FUNC_REALPATH_WORKS

/* Define to 1 if ungetc is broken when used on arbitrary bytes. */
#undef FUNC_UNGETC_BROKEN

/* Define to 1 if futimesat mishandles a NULL file name. */
#undef FUTIMESAT_NULL_BUG

/* Define to the type of elements in the array set by `getgroups'. Usually
   this is either `int' or `gid_t'. */
#undef GETGROUPS_T

/* Define this to 1 if getgroups(0,NULL) does not return the number of groups.
   */
#undef GETGROUPS_ZERO_BUG

/* Define if gettimeofday clobbers the localtime buffer. */
#undef GETTIMEOFDAY_CLOBBERS_LOCALTIME

/* Define this to 'void' or 'struct timezone' to match the system's
   declaration of the second argument to gettimeofday. */
#undef GETTIMEOFDAY_TIMEZONE

/* Define to a C preprocessor expression that evaluates to 1 or 0, depending
   whether the gnulib module areadlinkat shall be considered present. */
#undef GNULIB_AREADLINKAT

/* Define to a C preprocessor expression that evaluates to 1 or 0, depending
   whether the gnulib module areadlinkat-with-size shall be considered
   present. */
#undef GNULIB_AREADLINKAT_WITH_SIZE

/* Define to a C preprocessor expression that evaluates to 1 or 0, depending
   whether the gnulib module calloc-gnu shall be considered present. */
#undef GNULIB_CALLOC_GNU

/* Define to a C preprocessor expression that evaluates to 1 or 0, depending
   whether the gnulib module canonicalize shall be considered present. */
#undef GNULIB_CANONICALIZE

/* Define to a C preprocessor expression that evaluates to 1 or 0, depending
   whether the gnulib module canonicalize-lgpl shall be considered present. */
#undef GNULIB_CANONICALIZE_LGPL

/* Define to a C preprocessor expression that evaluates to 1 or 0, depending
   whether the gnulib module close-stream shall be considered present. */
#undef GNULIB_CLOSE_STREAM

/* Define to a C preprocessor expression that evaluates to 1 or 0, depending
   whether the gnulib module dirent-safer shall be considered present. */
#undef GNULIB_DIRENT_SAFER

/* Define to a C preprocessor expression that evaluates to 1 or 0, depending
   whether the gnulib module dirname shall be considered present. */
#undef GNULIB_DIRNAME

/* Define to a C preprocessor expression that evaluates to 1 or 0, depending
   whether the gnulib module faccessat shall be considered present. */
#undef GNULIB_FACCESSAT

/* Define to a C preprocessor expression that evaluates to 1 or 0, depending
   whether the gnulib module fchmodat shall be considered present. */
#undef GNULIB_FCHMODAT

/* Define to a C preprocessor expression that evaluates to 1 or 0, depending
   whether the gnulib module fchownat shall be considered present. */
#undef GNULIB_FCHOWNAT

/* Define to a C preprocessor expression that evaluates to 1 or 0, depending
   whether the gnulib module fcntl-safer shall be considered present. */
#undef GNULIB_FCNTL_SAFER

/* Define to a C preprocessor expression that evaluates to 1 or 0, depending
   whether the gnulib module fdopendir shall be considered present. */
#undef GNULIB_FDOPENDIR

/* Define to a C preprocessor expression that evaluates to 1 or 0, depending
   whether the gnulib module fdutimensat shall be considered present. */
#undef GNULIB_FDUTIMENSAT

/* Define to a C preprocessor expression that evaluates to 1 or 0, depending
   whether the gnulib module fd-safer-flag shall be considered present. */
#undef GNULIB_FD_SAFER_FLAG

/* Define to a C preprocessor expression that evaluates to 1 or 0, depending
   whether the gnulib module fflush shall be considered present. */
#undef GNULIB_FFLUSH

/* Define to a C preprocessor expression that evaluates to 1 or 0, depending
   whether the gnulib module filenamecat shall be considered present. */
#undef GNULIB_FILENAMECAT

/* Define to a C preprocessor expression that evaluates to 1 or 0, depending
   whether the gnulib module findprog-lgpl shall be considered present. */
#undef GNULIB_FINDPROG_LGPL

/* Define to a C preprocessor expression that evaluates to 1 or 0, depending
   whether the gnulib module fopen-safer shall be considered present. */
#undef GNULIB_FOPEN_SAFER

/* Define to a C preprocessor expression that evaluates to 1 or 0, depending
   whether the gnulib module freopen-safer shall be considered present. */
#undef GNULIB_FREOPEN_SAFER

/* Define to a C preprocessor expression that evaluates to 1 or 0, depending
   whether the gnulib module fscanf shall be considered present. */
#undef GNULIB_FSCANF

/* Define to a C preprocessor expression that evaluates to 1 or 0, depending
   whether the gnulib module fstatat shall be considered present. */
#undef GNULIB_FSTATAT

/* Define to a C preprocessor expression that evaluates to 1 or 0, depending
   whether the gnulib module fwriteerror shall be considered present. */
#undef GNULIB_FWRITEERROR

/* Define to a C preprocessor expression that evaluates to 1 or 0, depending
   whether the gnulib module gc-arcfour shall be considered present. */
#undef GNULIB_GC_ARCFOUR

/* Define to a C preprocessor expression that evaluates to 1 or 0, depending
   whether the gnulib module gc-arctwo shall be considered present. */
#undef GNULIB_GC_ARCTWO

/* Define to a C preprocessor expression that evaluates to 1 or 0, depending
   whether the gnulib module gc-des shall be considered present. */
#undef GNULIB_GC_DES

/* Define to a C preprocessor expression that evaluates to 1 or 0, depending
   whether the gnulib module gc-hmac-md5 shall be considered present. */
#undef GNULIB_GC_HMAC_MD5

/* Define to a C preprocessor expression that evaluates to 1 or 0, depending
   whether the gnulib module gc-hmac-sha1 shall be considered present. */
#undef GNULIB_GC_HMAC_SHA1

/* Define to a C preprocessor expression that evaluates to 1 or 0, depending
   whether the gnulib module gc-md2 shall be considered present. */
#undef GNULIB_GC_MD2

/* Define to a C preprocessor expression that evaluates to 1 or 0, depending
   whether the gnulib module gc-md4 shall be considered present. */
#undef GNULIB_GC_MD4

/* Define to a C preprocessor expression that evaluates to 1 or 0, depending
   whether the gnulib module gc-md5 shall be considered present. */
#undef GNULIB_GC_MD5

/* Define to a C preprocessor expression that evaluates to 1 or 0, depending
   whether the gnulib module gc-random shall be considered present. */
#undef GNULIB_GC_RANDOM

/* Define to a C preprocessor expression that evaluates to 1 or 0, depending
   whether the gnulib module gc-rijndael shall be considered present. */
#undef GNULIB_GC_RIJNDAEL

/* Define to a C preprocessor expression that evaluates to 1 or 0, depending
   whether the gnulib module gc-sha1 shall be considered present. */
#undef GNULIB_GC_SHA1

/* Define to a C preprocessor expression that evaluates to 1 or 0, depending
   whether the gnulib module getcwd shall be considered present. */
#undef GNULIB_GETCWD

/* Define to a C preprocessor expression that evaluates to 1 or 0, depending
   whether the gnulib module malloc-gnu shall be considered present. */
#undef GNULIB_MALLOC_GNU

/* Define to a C preprocessor expression that evaluates to 1 or 0, depending
   whether the gnulib module mkostemp shall be considered present. */
#undef GNULIB_MKOSTEMP

/* Define to a C preprocessor expression that evaluates to 1 or 0, depending
   whether the gnulib module mkostemps shall be considered present. */
#undef GNULIB_MKOSTEMPS

/* Define to a C preprocessor expression that evaluates to 1 or 0, depending
   whether the gnulib module mkstemps shall be considered present. */
#undef GNULIB_MKSTEMPS

/* Define to a C preprocessor expression that evaluates to 1 or 0, depending
   whether the gnulib module nonblocking shall be considered present. */
#undef GNULIB_NONBLOCKING

/* Define to a C preprocessor expression that evaluates to 1 or 0, depending
   whether the gnulib module openat shall be considered present. */
#undef GNULIB_OPENAT

/* Define to a C preprocessor expression that evaluates to 1 or 0, depending
   whether the gnulib module openat-safer shall be considered present. */
#undef GNULIB_OPENAT_SAFER

/* Define to a C preprocessor expression that evaluates to 1 or 0, depending
   whether the gnulib module pipe2-safer shall be considered present. */
#undef GNULIB_PIPE2_SAFER

/* Define to a C preprocessor expression that evaluates to 1 or 0, depending
   whether the gnulib module popen-safer shall be considered present. */
#undef GNULIB_POPEN_SAFER

/* Define to 1 to add extern declaration of program_invocation_name to argp.h
   */
#undef GNULIB_PROGRAM_INVOCATION_NAME

/* Define to 1 to add extern declaration of program_invocation_short_name to
   argp.h */
#undef GNULIB_PROGRAM_INVOCATION_SHORT_NAME

/* Define to a C preprocessor expression that evaluates to 1 or 0, depending
   whether the gnulib module realloc-gnu shall be considered present. */
#undef GNULIB_REALLOC_GNU

/* Define to a C preprocessor expression that evaluates to 1 or 0, depending
   whether the gnulib module scanf shall be considered present. */
#undef GNULIB_SCANF

/* Define to a C preprocessor expression that evaluates to 1 or 0, depending
   whether the gnulib module sigpipe shall be considered present. */
#undef GNULIB_SIGPIPE

/* Define to a C preprocessor expression that evaluates to 1 or 0, depending
   whether the gnulib module snprintf shall be considered present. */
#undef GNULIB_SNPRINTF

/* Define to a C preprocessor expression that evaluates to 1 or 0, depending
   whether the gnulib module strerror shall be considered present. */
#undef GNULIB_STRERROR

/* Define to 1 when the gnulib module accept should be tested. */
#undef GNULIB_TEST_ACCEPT

/* Define to 1 when the gnulib module accept4 should be tested. */
#undef GNULIB_TEST_ACCEPT4

/* Define to 1 when the gnulib module acosf should be tested. */
#undef GNULIB_TEST_ACOSF

/* Define to 1 when the gnulib module acosl should be tested. */
#undef GNULIB_TEST_ACOSL

/* Define to 1 when the gnulib module alphasort should be tested. */
#undef GNULIB_TEST_ALPHASORT

/* Define to 1 when the gnulib module asinf should be tested. */
#undef GNULIB_TEST_ASINF

/* Define to 1 when the gnulib module asinl should be tested. */
#undef GNULIB_TEST_ASINL

/* Define to 1 when the gnulib module atan2f should be tested. */
#undef GNULIB_TEST_ATAN2F

/* Define to 1 when the gnulib module atanf should be tested. */
#undef GNULIB_TEST_ATANF

/* Define to 1 when the gnulib module atanl should be tested. */
#undef GNULIB_TEST_ATANL

/* Define to 1 when the gnulib module atoll should be tested. */
#undef GNULIB_TEST_ATOLL

/* Define to 1 when the gnulib module bind should be tested. */
#undef GNULIB_TEST_BIND

/* Define to 1 when the gnulib module btowc should be tested. */
#undef GNULIB_TEST_BTOWC

/* Define to 1 when the gnulib module calloc-posix should be tested. */
#undef GNULIB_TEST_CALLOC_POSIX

/* Define to 1 when the gnulib module canonicalize should be tested. */
#undef GNULIB_TEST_CANONICALIZE

/* Define to 1 when the gnulib module canonicalize_file_name should be tested.
   */
#undef GNULIB_TEST_CANONICALIZE_FILE_NAME

/* Define to 1 when the gnulib module cbrt should be tested. */
#undef GNULIB_TEST_CBRT

/* Define to 1 when the gnulib module cbrtf should be tested. */
#undef GNULIB_TEST_CBRTF

/* Define to 1 when the gnulib module cbrtl should be tested. */
#undef GNULIB_TEST_CBRTL

/* Define to 1 when the gnulib module ceil should be tested. */
#undef GNULIB_TEST_CEIL

/* Define to 1 when the gnulib module ceilf should be tested. */
#undef GNULIB_TEST_CEILF

/* Define to 1 when the gnulib module ceill should be tested. */
#undef GNULIB_TEST_CEILL

/* Define to 1 when the gnulib module chdir should be tested. */
#undef GNULIB_TEST_CHDIR

/* Define to 1 when the gnulib module chown should be tested. */
#undef GNULIB_TEST_CHOWN

/* Define to 1 when the gnulib module cloexec should be tested. */
#undef GNULIB_TEST_CLOEXEC

/* Define to 1 when the gnulib module close should be tested. */
#undef GNULIB_TEST_CLOSE

/* Define to 1 when the gnulib module closedir should be tested. */
#undef GNULIB_TEST_CLOSEDIR

/* Define to 1 when the gnulib module connect should be tested. */
#undef GNULIB_TEST_CONNECT

/* Define to 1 when the gnulib module copysign should be tested. */
#undef GNULIB_TEST_COPYSIGN

/* Define to 1 when the gnulib module copysignf should be tested. */
#undef GNULIB_TEST_COPYSIGNF

/* Define to 1 when the gnulib module copysignl should be tested. */
#undef GNULIB_TEST_COPYSIGNL

/* Define to 1 when the gnulib module cosf should be tested. */
#undef GNULIB_TEST_COSF

/* Define to 1 when the gnulib module coshf should be tested. */
#undef GNULIB_TEST_COSHF

/* Define to 1 when the gnulib module cosl should be tested. */
#undef GNULIB_TEST_COSL

/* Define to 1 when the gnulib module dirfd should be tested. */
#undef GNULIB_TEST_DIRFD

/* Define to 1 when the gnulib module dprintf should be tested. */
#undef GNULIB_TEST_DPRINTF

/* Define to 1 when the gnulib module dup should be tested. */
#undef GNULIB_TEST_DUP

/* Define to 1 when the gnulib module dup2 should be tested. */
#undef GNULIB_TEST_DUP2

/* Define to 1 when the gnulib module dup3 should be tested. */
#undef GNULIB_TEST_DUP3

/* Define to 1 when the gnulib module duplocale should be tested. */
#undef GNULIB_TEST_DUPLOCALE

/* Define to 1 when the gnulib module environ should be tested. */
#undef GNULIB_TEST_ENVIRON

/* Define to 1 when the gnulib module euidaccess should be tested. */
#undef GNULIB_TEST_EUIDACCESS

/* Define to 1 when the gnulib module exp2 should be tested. */
#undef GNULIB_TEST_EXP2

/* Define to 1 when the gnulib module exp2f should be tested. */
#undef GNULIB_TEST_EXP2F

/* Define to 1 when the gnulib module exp2l should be tested. */
#undef GNULIB_TEST_EXP2L

/* Define to 1 when the gnulib module expf should be tested. */
#undef GNULIB_TEST_EXPF

/* Define to 1 when the gnulib module expl should be tested. */
#undef GNULIB_TEST_EXPL

/* Define to 1 when the gnulib module expm1 should be tested. */
#undef GNULIB_TEST_EXPM1

/* Define to 1 when the gnulib module expm1f should be tested. */
#undef GNULIB_TEST_EXPM1F

/* Define to 1 when the gnulib module expm1l should be tested. */
#undef GNULIB_TEST_EXPM1L

/* Define to 1 when the gnulib module fabsf should be tested. */
#undef GNULIB_TEST_FABSF

/* Define to 1 when the gnulib module fabsl should be tested. */
#undef GNULIB_TEST_FABSL

/* Define to 1 when the gnulib module faccessat should be tested. */
#undef GNULIB_TEST_FACCESSAT

/* Define to 1 when the gnulib module fchdir should be tested. */
#undef GNULIB_TEST_FCHDIR

/* Define to 1 when the gnulib module fchmodat should be tested. */
#undef GNULIB_TEST_FCHMODAT

/* Define to 1 when the gnulib module fchownat should be tested. */
#undef GNULIB_TEST_FCHOWNAT

/* Define to 1 when the gnulib module fclose should be tested. */
#undef GNULIB_TEST_FCLOSE

/* Define to 1 when the gnulib module fcntl should be tested. */
#undef GNULIB_TEST_FCNTL

/* Define to 1 when the gnulib module fdatasync should be tested. */
#undef GNULIB_TEST_FDATASYNC

/* Define to 1 when the gnulib module fdopen should be tested. */
#undef GNULIB_TEST_FDOPEN

/* Define to 1 when the gnulib module fdopendir should be tested. */
#undef GNULIB_TEST_FDOPENDIR

/* Define to 1 when the gnulib module fflush should be tested. */
#undef GNULIB_TEST_FFLUSH

/* Define to 1 when the gnulib module ffsl should be tested. */
#undef GNULIB_TEST_FFSL

/* Define to 1 when the gnulib module ffsll should be tested. */
#undef GNULIB_TEST_FFSLL

/* Define to 1 when the gnulib module floor should be tested. */
#undef GNULIB_TEST_FLOOR

/* Define to 1 when the gnulib module floorf should be tested. */
#undef GNULIB_TEST_FLOORF

/* Define to 1 when the gnulib module floorl should be tested. */
#undef GNULIB_TEST_FLOORL

/* Define to 1 when the gnulib module fma should be tested. */
#undef GNULIB_TEST_FMA

/* Define to 1 when the gnulib module fmaf should be tested. */
#undef GNULIB_TEST_FMAF

/* Define to 1 when the gnulib module fmal should be tested. */
#undef GNULIB_TEST_FMAL

/* Define to 1 when the gnulib module fmod should be tested. */
#undef GNULIB_TEST_FMOD

/* Define to 1 when the gnulib module fmodf should be tested. */
#undef GNULIB_TEST_FMODF

/* Define to 1 when the gnulib module fmodl should be tested. */
#undef GNULIB_TEST_FMODL

/* Define to 1 when the gnulib module fopen should be tested. */
#undef GNULIB_TEST_FOPEN

/* Define to 1 when the gnulib module forkpty should be tested. */
#undef GNULIB_TEST_FORKPTY

/* Define to 1 when the gnulib module fprintf-posix should be tested. */
#undef GNULIB_TEST_FPRINTF_POSIX

/* Define to 1 when the gnulib module fpurge should be tested. */
#undef GNULIB_TEST_FPURGE

/* Define to 1 when the gnulib module freopen should be tested. */
#undef GNULIB_TEST_FREOPEN

/* Define to 1 when the gnulib module frexp should be tested. */
#undef GNULIB_TEST_FREXP

/* Define to 1 when the gnulib module frexpf should be tested. */
#undef GNULIB_TEST_FREXPF

/* Define to 1 when the gnulib module frexpl should be tested. */
#undef GNULIB_TEST_FREXPL

/* Define to 1 when the gnulib module fseek should be tested. */
#undef GNULIB_TEST_FSEEK

/* Define to 1 when the gnulib module fseeko should be tested. */
#undef GNULIB_TEST_FSEEKO

/* Define to 1 when the gnulib module fstat should be tested. */
#undef GNULIB_TEST_FSTAT

/* Define to 1 when the gnulib module fstatat should be tested. */
#undef GNULIB_TEST_FSTATAT

/* Define to 1 when the gnulib module fsync should be tested. */
#undef GNULIB_TEST_FSYNC

/* Define to 1 when the gnulib module ftell should be tested. */
#undef GNULIB_TEST_FTELL

/* Define to 1 when the gnulib module ftello should be tested. */
#undef GNULIB_TEST_FTELLO

/* Define to 1 when the gnulib module ftruncate should be tested. */
#undef GNULIB_TEST_FTRUNCATE

/* Define to 1 when the gnulib module futimens should be tested. */
#undef GNULIB_TEST_FUTIMENS

/* Define to 1 when the gnulib module getaddrinfo should be tested. */
#undef GNULIB_TEST_GETADDRINFO

/* Define to 1 when the gnulib module getcwd should be tested. */
#undef GNULIB_TEST_GETCWD

/* Define to 1 when the gnulib module getdelim should be tested. */
#undef GNULIB_TEST_GETDELIM

/* Define to 1 when the gnulib module getdomainname should be tested. */
#undef GNULIB_TEST_GETDOMAINNAME

/* Define to 1 when the gnulib module getdtablesize should be tested. */
#undef GNULIB_TEST_GETDTABLESIZE

/* Define to 1 when the gnulib module getgroups should be tested. */
#undef GNULIB_TEST_GETGROUPS

/* Define to 1 when the gnulib module gethostname should be tested. */
#undef GNULIB_TEST_GETHOSTNAME

/* Define to 1 when the gnulib module getline should be tested. */
#undef GNULIB_TEST_GETLINE

/* Define to 1 when the gnulib module getloadavg should be tested. */
#undef GNULIB_TEST_GETLOADAVG

/* Define to 1 when the gnulib module getlogin should be tested. */
#undef GNULIB_TEST_GETLOGIN

/* Define to 1 when the gnulib module getlogin_r should be tested. */
#undef GNULIB_TEST_GETLOGIN_R

/* Define to 1 when the gnulib module getopt-gnu should be tested. */
#undef GNULIB_TEST_GETOPT_GNU

/* Define to 1 when the gnulib module getpagesize should be tested. */
#undef GNULIB_TEST_GETPAGESIZE

/* Define to 1 when the gnulib module getpeername should be tested. */
#undef GNULIB_TEST_GETPEERNAME

/* Define to 1 when the gnulib module getrusage should be tested. */
#undef GNULIB_TEST_GETRUSAGE

/* Define to 1 when the gnulib module getsockname should be tested. */
#undef GNULIB_TEST_GETSOCKNAME

/* Define to 1 when the gnulib module getsockopt should be tested. */
#undef GNULIB_TEST_GETSOCKOPT

/* Define to 1 when the gnulib module getsubopt should be tested. */
#undef GNULIB_TEST_GETSUBOPT

/* Define to 1 when the gnulib module gettimeofday should be tested. */
#undef GNULIB_TEST_GETTIMEOFDAY

/* Define to 1 when the gnulib module getusershell should be tested. */
#undef GNULIB_TEST_GETUSERSHELL

/* Define to 1 when the gnulib module grantpt should be tested. */
#undef GNULIB_TEST_GRANTPT

/* Define to 1 when the gnulib module group-member should be tested. */
#undef GNULIB_TEST_GROUP_MEMBER

/* Define to 1 when the gnulib module hypot should be tested. */
#undef GNULIB_TEST_HYPOT

/* Define to 1 when the gnulib module hypotf should be tested. */
#undef GNULIB_TEST_HYPOTF

/* Define to 1 when the gnulib module hypotl should be tested. */
#undef GNULIB_TEST_HYPOTL

/* Define to 1 when the gnulib module ilogb should be tested. */
#undef GNULIB_TEST_ILOGB

/* Define to 1 when the gnulib module ilogbf should be tested. */
#undef GNULIB_TEST_ILOGBF

/* Define to 1 when the gnulib module ilogbl should be tested. */
#undef GNULIB_TEST_ILOGBL

/* Define to 1 when the gnulib module ioctl should be tested. */
#undef GNULIB_TEST_IOCTL

/* Define to 1 when the gnulib module isatty should be tested. */
#undef GNULIB_TEST_ISATTY

/* Define to 1 when the gnulib module isfinite should be tested. */
#undef GNULIB_TEST_ISFINITE

/* Define to 1 when the gnulib module isinf should be tested. */
#undef GNULIB_TEST_ISINF

/* Define to 1 when the gnulib module isnan should be tested. */
#undef GNULIB_TEST_ISNAN

/* Define to 1 when the gnulib module isnand should be tested. */
#undef GNULIB_TEST_ISNAND

/* Define to 1 when the gnulib module isnanf should be tested. */
#undef GNULIB_TEST_ISNANF

/* Define to 1 when the gnulib module isnanl should be tested. */
#undef GNULIB_TEST_ISNANL

/* Define to 1 when the gnulib module iswblank should be tested. */
#undef GNULIB_TEST_ISWBLANK

/* Define to 1 when the gnulib module iswctype should be tested. */
#undef GNULIB_TEST_ISWCTYPE

/* Define to 1 when the gnulib module lchmod should be tested. */
#undef GNULIB_TEST_LCHMOD

/* Define to 1 when the gnulib module lchown should be tested. */
#undef GNULIB_TEST_LCHOWN

/* Define to 1 when the gnulib module ldexpf should be tested. */
#undef GNULIB_TEST_LDEXPF

/* Define to 1 when the gnulib module ldexpl should be tested. */
#undef GNULIB_TEST_LDEXPL

/* Define to 1 when the gnulib module link should be tested. */
#undef GNULIB_TEST_LINK

/* Define to 1 when the gnulib module linkat should be tested. */
#undef GNULIB_TEST_LINKAT

/* Define to 1 when the gnulib module listen should be tested. */
#undef GNULIB_TEST_LISTEN

/* Define to 1 when the gnulib module localeconv should be tested. */
#undef GNULIB_TEST_LOCALECONV

/* Define to 1 when the gnulib module log should be tested. */
#undef GNULIB_TEST_LOG

/* Define to 1 when the gnulib module log10 should be tested. */
#undef GNULIB_TEST_LOG10

/* Define to 1 when the gnulib module log10f should be tested. */
#undef GNULIB_TEST_LOG10F

/* Define to 1 when the gnulib module log10l should be tested. */
#undef GNULIB_TEST_LOG10L

/* Define to 1 when the gnulib module log1p should be tested. */
#undef GNULIB_TEST_LOG1P

/* Define to 1 when the gnulib module log1pf should be tested. */
#undef GNULIB_TEST_LOG1PF

/* Define to 1 when the gnulib module log1pl should be tested. */
#undef GNULIB_TEST_LOG1PL

/* Define to 1 when the gnulib module log2 should be tested. */
#undef GNULIB_TEST_LOG2

/* Define to 1 when the gnulib module log2f should be tested. */
#undef GNULIB_TEST_LOG2F

/* Define to 1 when the gnulib module log2l should be tested. */
#undef GNULIB_TEST_LOG2L

/* Define to 1 when the gnulib module logb should be tested. */
#undef GNULIB_TEST_LOGB

/* Define to 1 when the gnulib module logbf should be tested. */
#undef GNULIB_TEST_LOGBF

/* Define to 1 when the gnulib module logbl should be tested. */
#undef GNULIB_TEST_LOGBL

/* Define to 1 when the gnulib module logf should be tested. */
#undef GNULIB_TEST_LOGF

/* Define to 1 when the gnulib module login_tty should be tested. */
#undef GNULIB_TEST_LOGIN_TTY

/* Define to 1 when the gnulib module logl should be tested. */
#undef GNULIB_TEST_LOGL

/* Define to 1 when the gnulib module lseek should be tested. */
#undef GNULIB_TEST_LSEEK

/* Define to 1 when the gnulib module lstat should be tested. */
#undef GNULIB_TEST_LSTAT

/* Define to 1 when the gnulib module malloc-posix should be tested. */
#undef GNULIB_TEST_MALLOC_POSIX

/* Define to 1 when the gnulib module mbrlen should be tested. */
#undef GNULIB_TEST_MBRLEN

/* Define to 1 when the gnulib module mbrtowc should be tested. */
#undef GNULIB_TEST_MBRTOWC

/* Define to 1 when the gnulib module mbscasecmp should be tested. */
#undef GNULIB_TEST_MBSCASECMP

/* Define to 1 when the gnulib module mbscasestr should be tested. */
#undef GNULIB_TEST_MBSCASESTR

/* Define to 1 when the gnulib module mbschr should be tested. */
#undef GNULIB_TEST_MBSCHR

/* Define to 1 when the gnulib module mbscspn should be tested. */
#undef GNULIB_TEST_MBSCSPN

/* Define to 1 when the gnulib module mbsinit should be tested. */
#undef GNULIB_TEST_MBSINIT

/* Define to 1 when the gnulib module mbslen should be tested. */
#undef GNULIB_TEST_MBSLEN

/* Define to 1 when the gnulib module mbsncasecmp should be tested. */
#undef GNULIB_TEST_MBSNCASECMP

/* Define to 1 when the gnulib module mbsnlen should be tested. */
#undef GNULIB_TEST_MBSNLEN

/* Define to 1 when the gnulib module mbsnrtowcs should be tested. */
#undef GNULIB_TEST_MBSNRTOWCS

/* Define to 1 when the gnulib module mbspbrk should be tested. */
#undef GNULIB_TEST_MBSPBRK

/* Define to 1 when the gnulib module mbspcasecmp should be tested. */
#undef GNULIB_TEST_MBSPCASECMP

/* Define to 1 when the gnulib module mbsrchr should be tested. */
#undef GNULIB_TEST_MBSRCHR

/* Define to 1 when the gnulib module mbsrtowcs should be tested. */
#undef GNULIB_TEST_MBSRTOWCS

/* Define to 1 when the gnulib module mbssep should be tested. */
#undef GNULIB_TEST_MBSSEP

/* Define to 1 when the gnulib module mbsspn should be tested. */
#undef GNULIB_TEST_MBSSPN

/* Define to 1 when the gnulib module mbsstr should be tested. */
#undef GNULIB_TEST_MBSSTR

/* Define to 1 when the gnulib module mbstok_r should be tested. */
#undef GNULIB_TEST_MBSTOK_R

/* Define to 1 when the gnulib module mbtowc should be tested. */
#undef GNULIB_TEST_MBTOWC

/* Define to 1 when the gnulib module memchr should be tested. */
#undef GNULIB_TEST_MEMCHR

/* Define to 1 when the gnulib module memmem should be tested. */
#undef GNULIB_TEST_MEMMEM

/* Define to 1 when the gnulib module mempcpy should be tested. */
#undef GNULIB_TEST_MEMPCPY

/* Define to 1 when the gnulib module memrchr should be tested. */
#undef GNULIB_TEST_MEMRCHR

/* Define to 1 when the gnulib module mkdirat should be tested. */
#undef GNULIB_TEST_MKDIRAT

/* Define to 1 when the gnulib module mkdtemp should be tested. */
#undef GNULIB_TEST_MKDTEMP

/* Define to 1 when the gnulib module mkfifo should be tested. */
#undef GNULIB_TEST_MKFIFO

/* Define to 1 when the gnulib module mkfifoat should be tested. */
#undef GNULIB_TEST_MKFIFOAT

/* Define to 1 when the gnulib module mknod should be tested. */
#undef GNULIB_TEST_MKNOD

/* Define to 1 when the gnulib module mknodat should be tested. */
#undef GNULIB_TEST_MKNODAT

/* Define to 1 when the gnulib module mkostemp should be tested. */
#undef GNULIB_TEST_MKOSTEMP

/* Define to 1 when the gnulib module mkostemps should be tested. */
#undef GNULIB_TEST_MKOSTEMPS

/* Define to 1 when the gnulib module mkstemp should be tested. */
#undef GNULIB_TEST_MKSTEMP

/* Define to 1 when the gnulib module mkstemps should be tested. */
#undef GNULIB_TEST_MKSTEMPS

/* Define to 1 when the gnulib module mktime should be tested. */
#undef GNULIB_TEST_MKTIME

/* Define to 1 when the gnulib module modf should be tested. */
#undef GNULIB_TEST_MODF

/* Define to 1 when the gnulib module modff should be tested. */
#undef GNULIB_TEST_MODFF

/* Define to 1 when the gnulib module modfl should be tested. */
#undef GNULIB_TEST_MODFL

/* Define to 1 when the gnulib module nanosleep should be tested. */
#undef GNULIB_TEST_NANOSLEEP

/* Define to 1 when the gnulib module nl_langinfo should be tested. */
#undef GNULIB_TEST_NL_LANGINFO

/* Define to 1 when the gnulib module nonblocking should be tested. */
#undef GNULIB_TEST_NONBLOCKING

/* Define to 1 when the gnulib module obstack-printf should be tested. */
#undef GNULIB_TEST_OBSTACK_PRINTF

/* Define to 1 when the gnulib module obstack-printf-posix should be tested.
   */
#undef GNULIB_TEST_OBSTACK_PRINTF_POSIX

/* Define to 1 when the gnulib module open should be tested. */
#undef GNULIB_TEST_OPEN

/* Define to 1 when the gnulib module openat should be tested. */
#undef GNULIB_TEST_OPENAT

/* Define to 1 when the gnulib module opendir should be tested. */
#undef GNULIB_TEST_OPENDIR

/* Define to 1 when the gnulib module openpty should be tested. */
#undef GNULIB_TEST_OPENPTY

/* Define to 1 when the gnulib module pclose should be tested. */
#undef GNULIB_TEST_PCLOSE

/* Define to 1 when the gnulib module perror should be tested. */
#undef GNULIB_TEST_PERROR

/* Define to 1 when the gnulib module pipe should be tested. */
#undef GNULIB_TEST_PIPE

/* Define to 1 when the gnulib module pipe2 should be tested. */
#undef GNULIB_TEST_PIPE2

/* Define to 1 when the gnulib module poll should be tested. */
#undef GNULIB_TEST_POLL

/* Define to 1 when the gnulib module popen should be tested. */
#undef GNULIB_TEST_POPEN

/* Define to 1 when the gnulib module posix_openpt should be tested. */
#undef GNULIB_TEST_POSIX_OPENPT

/* Define to 1 when the gnulib module posix_spawn should be tested. */
#undef GNULIB_TEST_POSIX_SPAWN

/* Define to 1 when the gnulib module posix_spawnattr_destroy should be
   tested. */
#undef GNULIB_TEST_POSIX_SPAWNATTR_DESTROY

/* Define to 1 when the gnulib module posix_spawnattr_getflags should be
   tested. */
#undef GNULIB_TEST_POSIX_SPAWNATTR_GETFLAGS

/* Define to 1 when the gnulib module posix_spawnattr_getpgroup should be
   tested. */
#undef GNULIB_TEST_POSIX_SPAWNATTR_GETPGROUP

/* Define to 1 when the gnulib module posix_spawnattr_getschedparam should be
   tested. */
#undef GNULIB_TEST_POSIX_SPAWNATTR_GETSCHEDPARAM

/* Define to 1 when the gnulib module posix_spawnattr_getschedpolicy should be
   tested. */
#undef GNULIB_TEST_POSIX_SPAWNATTR_GETSCHEDPOLICY

/* Define to 1 when the gnulib module posix_spawnattr_getsigdefault should be
   tested. */
#undef GNULIB_TEST_POSIX_SPAWNATTR_GETSIGDEFAULT

/* Define to 1 when the gnulib module posix_spawnattr_getsigmask should be
   tested. */
#undef GNULIB_TEST_POSIX_SPAWNATTR_GETSIGMASK

/* Define to 1 when the gnulib module posix_spawnattr_init should be tested.
   */
#undef GNULIB_TEST_POSIX_SPAWNATTR_INIT

/* Define to 1 when the gnulib module posix_spawnattr_setflags should be
   tested. */
#undef GNULIB_TEST_POSIX_SPAWNATTR_SETFLAGS

/* Define to 1 when the gnulib module posix_spawnattr_setpgroup should be
   tested. */
#undef GNULIB_TEST_POSIX_SPAWNATTR_SETPGROUP

/* Define to 1 when the gnulib module posix_spawnattr_setschedparam should be
   tested. */
#undef GNULIB_TEST_POSIX_SPAWNATTR_SETSCHEDPARAM

/* Define to 1 when the gnulib module posix_spawnattr_setschedpolicy should be
   tested. */
#undef GNULIB_TEST_POSIX_SPAWNATTR_SETSCHEDPOLICY

/* Define to 1 when the gnulib module posix_spawnattr_setsigdefault should be
   tested. */
#undef GNULIB_TEST_POSIX_SPAWNATTR_SETSIGDEFAULT

/* Define to 1 when the gnulib module posix_spawnattr_setsigmask should be
   tested. */
#undef GNULIB_TEST_POSIX_SPAWNATTR_SETSIGMASK

/* Define to 1 when the gnulib module posix_spawnp should be tested. */
#undef GNULIB_TEST_POSIX_SPAWNP

/* Define to 1 when the gnulib module posix_spawn_file_actions_addclose should
   be tested. */
#undef GNULIB_TEST_POSIX_SPAWN_FILE_ACTIONS_ADDCLOSE

/* Define to 1 when the gnulib module posix_spawn_file_actions_adddup2 should
   be tested. */
#undef GNULIB_TEST_POSIX_SPAWN_FILE_ACTIONS_ADDDUP2

/* Define to 1 when the gnulib module posix_spawn_file_actions_addopen should
   be tested. */
#undef GNULIB_TEST_POSIX_SPAWN_FILE_ACTIONS_ADDOPEN

/* Define to 1 when the gnulib module posix_spawn_file_actions_destroy should
   be tested. */
#undef GNULIB_TEST_POSIX_SPAWN_FILE_ACTIONS_DESTROY

/* Define to 1 when the gnulib module posix_spawn_file_actions_init should be
   tested. */
#undef GNULIB_TEST_POSIX_SPAWN_FILE_ACTIONS_INIT

/* Define to 1 when the gnulib module powf should be tested. */
#undef GNULIB_TEST_POWF

/* Define to 1 when the gnulib module pread should be tested. */
#undef GNULIB_TEST_PREAD

/* Define to 1 when the gnulib module printf-posix should be tested. */
#undef GNULIB_TEST_PRINTF_POSIX

/* Define to 1 when the gnulib module pselect should be tested. */
#undef GNULIB_TEST_PSELECT

/* Define to 1 when the gnulib module pthread_sigmask should be tested. */
#undef GNULIB_TEST_PTHREAD_SIGMASK

/* Define to 1 when the gnulib module ptsname should be tested. */
#undef GNULIB_TEST_PTSNAME

/* Define to 1 when the gnulib module ptsname_r should be tested. */
#undef GNULIB_TEST_PTSNAME_R

/* Define to 1 when the gnulib module putenv should be tested. */
#undef GNULIB_TEST_PUTENV

/* Define to 1 when the gnulib module pwrite should be tested. */
#undef GNULIB_TEST_PWRITE

/* Define to 1 when the gnulib module raise should be tested. */
#undef GNULIB_TEST_RAISE

/* Define to 1 when the gnulib module random should be tested. */
#undef GNULIB_TEST_RANDOM

/* Define to 1 when the gnulib module random_r should be tested. */
#undef GNULIB_TEST_RANDOM_R

/* Define to 1 when the gnulib module rawmemchr should be tested. */
#undef GNULIB_TEST_RAWMEMCHR

/* Define to 1 when the gnulib module read should be tested. */
#undef GNULIB_TEST_READ

/* Define to 1 when the gnulib module readdir should be tested. */
#undef GNULIB_TEST_READDIR

/* Define to 1 when the gnulib module readlink should be tested. */
#undef GNULIB_TEST_READLINK

/* Define to 1 when the gnulib module readlinkat should be tested. */
#undef GNULIB_TEST_READLINKAT

/* Define to 1 when the gnulib module realloc-posix should be tested. */
#undef GNULIB_TEST_REALLOC_POSIX

/* Define to 1 when the gnulib module realpath should be tested. */
#undef GNULIB_TEST_REALPATH

/* Define to 1 when the gnulib module recv should be tested. */
#undef GNULIB_TEST_RECV

/* Define to 1 when the gnulib module recvfrom should be tested. */
#undef GNULIB_TEST_RECVFROM

/* Define to 1 when the gnulib module remainder should be tested. */
#undef GNULIB_TEST_REMAINDER

/* Define to 1 when the gnulib module remainderf should be tested. */
#undef GNULIB_TEST_REMAINDERF

/* Define to 1 when the gnulib module remainderl should be tested. */
#undef GNULIB_TEST_REMAINDERL

/* Define to 1 when the gnulib module remove should be tested. */
#undef GNULIB_TEST_REMOVE

/* Define to 1 when the gnulib module rename should be tested. */
#undef GNULIB_TEST_RENAME

/* Define to 1 when the gnulib module renameat should be tested. */
#undef GNULIB_TEST_RENAMEAT

/* Define to 1 when the gnulib module rewinddir should be tested. */
#undef GNULIB_TEST_REWINDDIR

/* Define to 1 when the gnulib module rint should be tested. */
#undef GNULIB_TEST_RINT

/* Define to 1 when the gnulib module rintf should be tested. */
#undef GNULIB_TEST_RINTF

/* Define to 1 when the gnulib module rintl should be tested. */
#undef GNULIB_TEST_RINTL

/* Define to 1 when the gnulib module rmdir should be tested. */
#undef GNULIB_TEST_RMDIR

/* Define to 1 when the gnulib module round should be tested. */
#undef GNULIB_TEST_ROUND

/* Define to 1 when the gnulib module roundf should be tested. */
#undef GNULIB_TEST_ROUNDF

/* Define to 1 when the gnulib module roundl should be tested. */
#undef GNULIB_TEST_ROUNDL

/* Define to 1 when the gnulib module rpmatch should be tested. */
#undef GNULIB_TEST_RPMATCH

/* Define to 1 when the gnulib module scandir should be tested. */
#undef GNULIB_TEST_SCANDIR

/* Define to 1 when the gnulib module select should be tested. */
#undef GNULIB_TEST_SELECT

/* Define to 1 when the gnulib module send should be tested. */
#undef GNULIB_TEST_SEND

/* Define to 1 when the gnulib module sendto should be tested. */
#undef GNULIB_TEST_SENDTO

/* Define to 1 when the gnulib module setenv should be tested. */
#undef GNULIB_TEST_SETENV

/* Define to 1 when the gnulib module sethostname should be tested. */
#undef GNULIB_TEST_SETHOSTNAME

/* Define to 1 when the gnulib module setlocale should be tested. */
#undef GNULIB_TEST_SETLOCALE

/* Define to 1 when the gnulib module setsockopt should be tested. */
#undef GNULIB_TEST_SETSOCKOPT

/* Define to 1 when the gnulib module shutdown should be tested. */
#undef GNULIB_TEST_SHUTDOWN

/* Define to 1 when the gnulib module sigaction should be tested. */
#undef GNULIB_TEST_SIGACTION

/* Define to 1 when the gnulib module signbit should be tested. */
#undef GNULIB_TEST_SIGNBIT

/* Define to 1 when the gnulib module sigprocmask should be tested. */
#undef GNULIB_TEST_SIGPROCMASK

/* Define to 1 when the gnulib module sinf should be tested. */
#undef GNULIB_TEST_SINF

/* Define to 1 when the gnulib module sinhf should be tested. */
#undef GNULIB_TEST_SINHF

/* Define to 1 when the gnulib module sinl should be tested. */
#undef GNULIB_TEST_SINL

/* Define to 1 when the gnulib module sleep should be tested. */
#undef GNULIB_TEST_SLEEP

/* Define to 1 when the gnulib module snprintf should be tested. */
#undef GNULIB_TEST_SNPRINTF

/* Define to 1 when the gnulib module socket should be tested. */
#undef GNULIB_TEST_SOCKET

/* Define to 1 when the gnulib module sprintf-posix should be tested. */
#undef GNULIB_TEST_SPRINTF_POSIX

/* Define to 1 when the gnulib module sqrtf should be tested. */
#undef GNULIB_TEST_SQRTF

/* Define to 1 when the gnulib module sqrtl should be tested. */
#undef GNULIB_TEST_SQRTL

/* Define to 1 when the gnulib module stat should be tested. */
#undef GNULIB_TEST_STAT

/* Define to 1 when the gnulib module stpcpy should be tested. */
#undef GNULIB_TEST_STPCPY

/* Define to 1 when the gnulib module stpncpy should be tested. */
#undef GNULIB_TEST_STPNCPY

/* Define to 1 when the gnulib module strcasestr should be tested. */
#undef GNULIB_TEST_STRCASESTR

/* Define to 1 when the gnulib module strchrnul should be tested. */
#undef GNULIB_TEST_STRCHRNUL

/* Define to 1 when the gnulib module strdup should be tested. */
#undef GNULIB_TEST_STRDUP

/* Define to 1 when the gnulib module strerror should be tested. */
#undef GNULIB_TEST_STRERROR

/* Define to 1 when the gnulib module strerror_r should be tested. */
#undef GNULIB_TEST_STRERROR_R

/* Define to 1 when the gnulib module strncat should be tested. */
#undef GNULIB_TEST_STRNCAT

/* Define to 1 when the gnulib module strndup should be tested. */
#undef GNULIB_TEST_STRNDUP

/* Define to 1 when the gnulib module strnlen should be tested. */
#undef GNULIB_TEST_STRNLEN

/* Define to 1 when the gnulib module strpbrk should be tested. */
#undef GNULIB_TEST_STRPBRK

/* Define to 1 when the gnulib module strptime should be tested. */
#undef GNULIB_TEST_STRPTIME

/* Define to 1 when the gnulib module strsep should be tested. */
#undef GNULIB_TEST_STRSEP

/* Define to 1 when the gnulib module strsignal should be tested. */
#undef GNULIB_TEST_STRSIGNAL

/* Define to 1 when the gnulib module strstr should be tested. */
#undef GNULIB_TEST_STRSTR

/* Define to 1 when the gnulib module strtod should be tested. */
#undef GNULIB_TEST_STRTOD

/* Define to 1 when the gnulib module strtok_r should be tested. */
#undef GNULIB_TEST_STRTOK_R

/* Define to 1 when the gnulib module strtoll should be tested. */
#undef GNULIB_TEST_STRTOLL

/* Define to 1 when the gnulib module strtoull should be tested. */
#undef GNULIB_TEST_STRTOULL

/* Define to 1 when the gnulib module strverscmp should be tested. */
#undef GNULIB_TEST_STRVERSCMP

/* Define to 1 when the gnulib module symlink should be tested. */
#undef GNULIB_TEST_SYMLINK

/* Define to 1 when the gnulib module symlinkat should be tested. */
#undef GNULIB_TEST_SYMLINKAT

/* Define to 1 when the gnulib module system-posix should be tested. */
#undef GNULIB_TEST_SYSTEM_POSIX

/* Define to 1 when the gnulib module tanf should be tested. */
#undef GNULIB_TEST_TANF

/* Define to 1 when the gnulib module tanhf should be tested. */
#undef GNULIB_TEST_TANHF

/* Define to 1 when the gnulib module tanl should be tested. */
#undef GNULIB_TEST_TANL

/* Define to 1 when the gnulib module tcgetsid should be tested. */
#undef GNULIB_TEST_TCGETSID

/* Define to 1 when the gnulib module timegm should be tested. */
#undef GNULIB_TEST_TIMEGM

/* Define to 1 when the gnulib module time_r should be tested. */
#undef GNULIB_TEST_TIME_R

/* Define to 1 when the gnulib module tmpfile should be tested. */
#undef GNULIB_TEST_TMPFILE

/* Define to 1 when the gnulib module towctrans should be tested. */
#undef GNULIB_TEST_TOWCTRANS

/* Define to 1 when the gnulib module trunc should be tested. */
#undef GNULIB_TEST_TRUNC

/* Define to 1 when the gnulib module truncf should be tested. */
#undef GNULIB_TEST_TRUNCF

/* Define to 1 when the gnulib module truncl should be tested. */
#undef GNULIB_TEST_TRUNCL

/* Define to 1 when the gnulib module tsearch should be tested. */
#undef GNULIB_TEST_TSEARCH

/* Define to 1 when the gnulib module ttyname_r should be tested. */
#undef GNULIB_TEST_TTYNAME_R

/* Define to 1 when the gnulib module uninorm/u16-normalize should be tested.
   */
#undef GNULIB_TEST_UNINORM_U16_NORMALIZE

/* Define to 1 when the gnulib module uninorm/u32-normalize should be tested.
   */
#undef GNULIB_TEST_UNINORM_U32_NORMALIZE

/* Define to 1 when the gnulib module uninorm/u8-normalize should be tested.
   */
#undef GNULIB_TEST_UNINORM_U8_NORMALIZE

/* Define to 1 when the gnulib module unlink should be tested. */
#undef GNULIB_TEST_UNLINK

/* Define to 1 when the gnulib module unlinkat should be tested. */
#undef GNULIB_TEST_UNLINKAT

/* Define to 1 when the gnulib module unlockpt should be tested. */
#undef GNULIB_TEST_UNLOCKPT

/* Define to 1 when the gnulib module unsetenv should be tested. */
#undef GNULIB_TEST_UNSETENV

/* Define to 1 when the gnulib module usleep should be tested. */
#undef GNULIB_TEST_USLEEP

/* Define to 1 when the gnulib module utimensat should be tested. */
#undef GNULIB_TEST_UTIMENSAT

/* Define to 1 when the gnulib module vasprintf should be tested. */
#undef GNULIB_TEST_VASPRINTF

/* Define to 1 when the gnulib module vdprintf should be tested. */
#undef GNULIB_TEST_VDPRINTF

/* Define to 1 when the gnulib module vfprintf-posix should be tested. */
#undef GNULIB_TEST_VFPRINTF_POSIX

/* Define to 1 when the gnulib module vfscanf should be tested. */
#undef GNULIB_TEST_VFSCANF

/* Define to 1 when the gnulib module vprintf-posix should be tested. */
#undef GNULIB_TEST_VPRINTF_POSIX

/* Define to 1 when the gnulib module vscanf should be tested. */
#undef GNULIB_TEST_VSCANF

/* Define to 1 when the gnulib module vsnprintf should be tested. */
#undef GNULIB_TEST_VSNPRINTF

/* Define to 1 when the gnulib module vsprintf-posix should be tested. */
#undef GNULIB_TEST_VSPRINTF_POSIX

/* Define to 1 when the gnulib module waitpid should be tested. */
#undef GNULIB_TEST_WAITPID

/* Define to 1 when the gnulib module wcpcpy should be tested. */
#undef GNULIB_TEST_WCPCPY

/* Define to 1 when the gnulib module wcpncpy should be tested. */
#undef GNULIB_TEST_WCPNCPY

/* Define to 1 when the gnulib module wcrtomb should be tested. */
#undef GNULIB_TEST_WCRTOMB

/* Define to 1 when the gnulib module wcscasecmp should be tested. */
#undef GNULIB_TEST_WCSCASECMP

/* Define to 1 when the gnulib module wcscat should be tested. */
#undef GNULIB_TEST_WCSCAT

/* Define to 1 when the gnulib module wcschr should be tested. */
#undef GNULIB_TEST_WCSCHR

/* Define to 1 when the gnulib module wcscmp should be tested. */
#undef GNULIB_TEST_WCSCMP

/* Define to 1 when the gnulib module wcscoll should be tested. */
#undef GNULIB_TEST_WCSCOLL

/* Define to 1 when the gnulib module wcscpy should be tested. */
#undef GNULIB_TEST_WCSCPY

/* Define to 1 when the gnulib module wcscspn should be tested. */
#undef GNULIB_TEST_WCSCSPN

/* Define to 1 when the gnulib module wcsdup should be tested. */
#undef GNULIB_TEST_WCSDUP

/* Define to 1 when the gnulib module wcslen should be tested. */
#undef GNULIB_TEST_WCSLEN

/* Define to 1 when the gnulib module wcsncasecmp should be tested. */
#undef GNULIB_TEST_WCSNCASECMP

/* Define to 1 when the gnulib module wcsncat should be tested. */
#undef GNULIB_TEST_WCSNCAT

/* Define to 1 when the gnulib module wcsncmp should be tested. */
#undef GNULIB_TEST_WCSNCMP

/* Define to 1 when the gnulib module wcsncpy should be tested. */
#undef GNULIB_TEST_WCSNCPY

/* Define to 1 when the gnulib module wcsnlen should be tested. */
#undef GNULIB_TEST_WCSNLEN

/* Define to 1 when the gnulib module wcsnrtombs should be tested. */
#undef GNULIB_TEST_WCSNRTOMBS

/* Define to 1 when the gnulib module wcspbrk should be tested. */
#undef GNULIB_TEST_WCSPBRK

/* Define to 1 when the gnulib module wcsrchr should be tested. */
#undef GNULIB_TEST_WCSRCHR

/* Define to 1 when the gnulib module wcsrtombs should be tested. */
#undef GNULIB_TEST_WCSRTOMBS

/* Define to 1 when the gnulib module wcsspn should be tested. */
#undef GNULIB_TEST_WCSSPN

/* Define to 1 when the gnulib module wcsstr should be tested. */
#undef GNULIB_TEST_WCSSTR

/* Define to 1 when the gnulib module wcstok should be tested. */
#undef GNULIB_TEST_WCSTOK

/* Define to 1 when the gnulib module wcswidth should be tested. */
#undef GNULIB_TEST_WCSWIDTH

/* Define to 1 when the gnulib module wcsxfrm should be tested. */
#undef GNULIB_TEST_WCSXFRM

/* Define to 1 when the gnulib module wctob should be tested. */
#undef GNULIB_TEST_WCTOB

/* Define to 1 when the gnulib module wctomb should be tested. */
#undef GNULIB_TEST_WCTOMB

/* Define to 1 when the gnulib module wctrans should be tested. */
#undef GNULIB_TEST_WCTRANS

/* Define to 1 when the gnulib module wctype should be tested. */
#undef GNULIB_TEST_WCTYPE

/* Define to 1 when the gnulib module wcwidth should be tested. */
#undef GNULIB_TEST_WCWIDTH

/* Define to 1 when the gnulib module wmemchr should be tested. */
#undef GNULIB_TEST_WMEMCHR

/* Define to 1 when the gnulib module wmemcmp should be tested. */
#undef GNULIB_TEST_WMEMCMP

/* Define to 1 when the gnulib module wmemcpy should be tested. */
#undef GNULIB_TEST_WMEMCPY

/* Define to 1 when the gnulib module wmemmove should be tested. */
#undef GNULIB_TEST_WMEMMOVE

/* Define to 1 when the gnulib module wmemset should be tested. */
#undef GNULIB_TEST_WMEMSET

/* Define to 1 when the gnulib module write should be tested. */
#undef GNULIB_TEST_WRITE

/* Define to 1 when the gnulib module _Exit should be tested. */
#undef GNULIB_TEST__EXIT

/* Define to a C preprocessor expression that evaluates to 1 or 0, depending
   whether the gnulib module tmpfile-safer shall be considered present. */
#undef GNULIB_TMPFILE_SAFER

/* Define to a C preprocessor expression that evaluates to 1 or 0, depending
   whether the gnulib module unigbrk/u16-grapheme-breaks shall be considered
   present. */
#undef GNULIB_UNIGBRK_U16_GRAPHEME_BREAKS

/* Define to a C preprocessor expression that evaluates to 1 or 0, depending
   whether the gnulib module unigbrk/u16-grapheme-next shall be considered
   present. */
#undef GNULIB_UNIGBRK_U16_GRAPHEME_NEXT

/* Define to a C preprocessor expression that evaluates to 1 or 0, depending
   whether the gnulib module unigbrk/u16-grapheme-prev shall be considered
   present. */
#undef GNULIB_UNIGBRK_U16_GRAPHEME_PREV

/* Define to a C preprocessor expression that evaluates to 1 or 0, depending
   whether the gnulib module unigbrk/u32-grapheme-breaks shall be considered
   present. */
#undef GNULIB_UNIGBRK_U32_GRAPHEME_BREAKS

/* Define to a C preprocessor expression that evaluates to 1 or 0, depending
   whether the gnulib module unigbrk/u32-grapheme-next shall be considered
   present. */
#undef GNULIB_UNIGBRK_U32_GRAPHEME_NEXT

/* Define to a C preprocessor expression that evaluates to 1 or 0, depending
   whether the gnulib module unigbrk/u32-grapheme-prev shall be considered
   present. */
#undef GNULIB_UNIGBRK_U32_GRAPHEME_PREV

/* Define to a C preprocessor expression that evaluates to 1 or 0, depending
   whether the gnulib module unigbrk/u8-grapheme-breaks shall be considered
   present. */
#undef GNULIB_UNIGBRK_U8_GRAPHEME_BREAKS

/* Define to a C preprocessor expression that evaluates to 1 or 0, depending
   whether the gnulib module unigbrk/u8-grapheme-next shall be considered
   present. */
#undef GNULIB_UNIGBRK_U8_GRAPHEME_NEXT

/* Define to a C preprocessor expression that evaluates to 1 or 0, depending
   whether the gnulib module unigbrk/u8-grapheme-prev shall be considered
   present. */
#undef GNULIB_UNIGBRK_U8_GRAPHEME_PREV

/* Define to a C preprocessor expression that evaluates to 1 or 0, depending
   whether the gnulib module unigbrk/ulc-grapheme-breaks shall be considered
   present. */
#undef GNULIB_UNIGBRK_ULC_GRAPHEME_BREAKS

/* Define to a C preprocessor expression that evaluates to 1 or 0, depending
   whether the gnulib module unistr/u16-mbtouc shall be considered present. */
#undef GNULIB_UNISTR_U16_MBTOUC

/* Define to a C preprocessor expression that evaluates to 1 or 0, depending
   whether the gnulib module unistr/u16-mbtoucr shall be considered present.
   */
#undef GNULIB_UNISTR_U16_MBTOUCR

/* Define to a C preprocessor expression that evaluates to 1 or 0, depending
   whether the gnulib module unistr/u16-mbtouc-unsafe shall be considered
   present. */
#undef GNULIB_UNISTR_U16_MBTOUC_UNSAFE

/* Define to a C preprocessor expression that evaluates to 1 or 0, depending
   whether the gnulib module unistr/u16-uctomb shall be considered present. */
#undef GNULIB_UNISTR_U16_UCTOMB

/* Define to a C preprocessor expression that evaluates to 1 or 0, depending
   whether the gnulib module unistr/u32-mbtouc shall be considered present. */
#undef GNULIB_UNISTR_U32_MBTOUC

/* Define to a C preprocessor expression that evaluates to 1 or 0, depending
   whether the gnulib module unistr/u32-mbtoucr shall be considered present.
   */
#undef GNULIB_UNISTR_U32_MBTOUCR

/* Define to a C preprocessor expression that evaluates to 1 or 0, depending
   whether the gnulib module unistr/u32-mbtouc-unsafe shall be considered
   present. */
#undef GNULIB_UNISTR_U32_MBTOUC_UNSAFE

/* Define to a C preprocessor expression that evaluates to 1 or 0, depending
   whether the gnulib module unistr/u32-uctomb shall be considered present. */
#undef GNULIB_UNISTR_U32_UCTOMB

/* Define to a C preprocessor expression that evaluates to 1 or 0, depending
   whether the gnulib module unistr/u8-mbtouc shall be considered present. */
#undef GNULIB_UNISTR_U8_MBTOUC

/* Define to a C preprocessor expression that evaluates to 1 or 0, depending
   whether the gnulib module unistr/u8-mbtoucr shall be considered present. */
#undef GNULIB_UNISTR_U8_MBTOUCR

/* Define to a C preprocessor expression that evaluates to 1 or 0, depending
   whether the gnulib module unistr/u8-mbtouc-unsafe shall be considered
   present. */
#undef GNULIB_UNISTR_U8_MBTOUC_UNSAFE

/* Define to a C preprocessor expression that evaluates to 1 or 0, depending
   whether the gnulib module unistr/u8-uctomb shall be considered present. */
#undef GNULIB_UNISTR_U8_UCTOMB

/* Define to a C preprocessor expression that evaluates to 1 or 0, depending
   whether the gnulib module vfscanf shall be considered present. */
#undef GNULIB_VFSCANF

/* Define to a C preprocessor expression that evaluates to 1 or 0, depending
   whether the gnulib module vscanf shall be considered present. */
#undef GNULIB_VSCANF

/* Define to a C preprocessor expression that evaluates to 1 or 0, depending
   whether the gnulib module xgetgroups shall be considered present. */
#undef GNULIB_XGETGROUPS

/* Define to a C preprocessor expression that evaluates to 1 or 0, depending
   whether the gnulib module xreadlinkat shall be considered present. */
#undef GNULIB_XREADLINKAT

/* Define if your system defines TIOCGWINSZ in sys/ioctl.h. */
#undef GWINSZ_IN_SYS_IOCTL

/* Define to 1 if you have the 'accept4' function. */
#undef HAVE_ACCEPT4

/* Define to 1 if you have the `access' function. */
#undef HAVE_ACCESS

/* Define to 1 if you have the `aclsort' function. */
#undef HAVE_ACLSORT

/* Define to 1 if you have the <aclv.h> header file. */
#undef HAVE_ACLV_H

/* Define to 1 if you have the `aclx_get' function. */
#undef HAVE_ACLX_GET

/* Define to 1 if you have the `acl_copy_ext_native' function. */
#undef HAVE_ACL_COPY_EXT_NATIVE

/* Define to 1 if you have the `acl_create_entry_np' function. */
#undef HAVE_ACL_CREATE_ENTRY_NP

/* Define to 1 if you have the `acl_delete_def_file' function. */
#undef HAVE_ACL_DELETE_DEF_FILE

/* Define to 1 if you have the `acl_delete_fd_np' function. */
#undef HAVE_ACL_DELETE_FD_NP

/* Define to 1 if you have the `acl_delete_file_np' function. */
#undef HAVE_ACL_DELETE_FILE_NP

/* Define to 1 if you have the `acl_entries' function. */
#undef HAVE_ACL_ENTRIES

/* Define to 1 if you have the `acl_extended_file' function. */
#undef HAVE_ACL_EXTENDED_FILE

/* Define to 1 if the constant ACL_FIRST_ENTRY exists. */
#undef HAVE_ACL_FIRST_ENTRY

/* Define to 1 if you have the `acl_free' function. */
#undef HAVE_ACL_FREE

/* Define to 1 if you have the `acl_free_text' function. */
#undef HAVE_ACL_FREE_TEXT

/* Define to 1 if you have the `acl_from_mode' function. */
#undef HAVE_ACL_FROM_MODE

/* Define to 1 if you have the `acl_from_text' function. */
#undef HAVE_ACL_FROM_TEXT

/* Define to 1 if you have the `acl_get_fd' function. */
#undef HAVE_ACL_GET_FD

/* Define to 1 if you have the `acl_get_file' function. */
#undef HAVE_ACL_GET_FILE

/* Define to 1 if you have the <acl/libacl.h> header file. */
#undef HAVE_ACL_LIBACL_H

/* Define to 1 if you have the `acl_set_fd' function. */
#undef HAVE_ACL_SET_FD

/* Define to 1 if you have the `acl_set_file' function. */
#undef HAVE_ACL_SET_FILE

/* Define to 1 if you have the `acl_to_short_text' function. */
#undef HAVE_ACL_TO_SHORT_TEXT

/* Define to 1 if you have the `acl_trivial' function. */
#undef HAVE_ACL_TRIVIAL

/* Define to 1 if the ACL type ACL_TYPE_EXTENDED exists. */
#undef HAVE_ACL_TYPE_EXTENDED

/* Define to 1 if you have the `acosf' function. */
#undef HAVE_ACOSF

/* Define to 1 if you have the 'alarm' function. */
#undef HAVE_ALARM

/* Define to 1 if you have 'alloca' after including <alloca.h>, a header that
   may be supplied by this distribution. */
#undef HAVE_ALLOCA

/* Define to 1 if you have <alloca.h> and it should be used (not on Ultrix).
   */
#undef HAVE_ALLOCA_H

/* Define to 1 if you have the `alphasort' function. */
#undef HAVE_ALPHASORT

/* Define to 1 if you have the <argz.h> header file. */
#undef HAVE_ARGZ_H

/* Define if you have an arithmetic hrtime_t type. */
#undef HAVE_ARITHMETIC_HRTIME_T

/* Define to 1 if you have the <arpa/inet.h> header file. */
#undef HAVE_ARPA_INET_H

/* Define to 1 if you have the `asinf' function. */
#undef HAVE_ASINF

/* Define to 1 if you have the `atan2f' function. */
#undef HAVE_ATAN2F

/* Define to 1 if you have the `atanf' function. */
#undef HAVE_ATANF

/* Define to 1 if you have the `atexit' function. */
#undef HAVE_ATEXIT

/* Define to 1 if you have the `atoll' function. */
#undef HAVE_ATOLL

/* Define to 1 if you have the `bcopy' function. */
#undef HAVE_BCOPY

/* Define to 1 if you have the <bp-sym.h> header file. */
#undef HAVE_BP_SYM_H

/* Define to 1 if you have the 'btowc' function. */
#undef HAVE_BTOWC

/* Define to 1 if nanosleep mishandles large arguments. */
#undef HAVE_BUG_BIG_NANOSLEEP

/* Define to 1 if you have the <byteswap.h> header file. */
#undef HAVE_BYTESWAP_H

/* Define to 1 if strtold conforms to C99. */
#undef HAVE_C99_STRTOLD

/* Define to 1 if your system has a GNU libc compatible 'calloc' function, and
   to 0 otherwise. */
#undef HAVE_CALLOC_GNU

/* Define if the 'calloc' function is POSIX compliant. */
#undef HAVE_CALLOC_POSIX

/* Define if your libgcrypt supports Camellia. */
#undef HAVE_CAMELLIA

/* Define to 1 if you have the 'canonicalize_file_name' function. */
#undef HAVE_CANONICALIZE_FILE_NAME

/* Define to 1 if you have the 'catgets' function. */
#undef HAVE_CATGETS

/* Define to 1 if you have the `cbrt' function. */
#undef HAVE_CBRT

/* Define to 1 if you have the `cbrtf' function. */
#undef HAVE_CBRTF

/* Define to 1 if you have the `cbrtl' function. */
#undef HAVE_CBRTL

/* Define to 1 if you have the Mac OS X function CFLocaleCopyCurrent in the
   CoreFoundation framework. */
#undef HAVE_CFLOCALECOPYCURRENT

/* Define to 1 if you have the Mac OS X function CFPreferencesCopyAppValue in
   the CoreFoundation framework. */
#undef HAVE_CFPREFERENCESCOPYAPPVALUE

/* Define to 1 if you have the `chown' function. */
#undef HAVE_CHOWN

/* Define to 1 if you have the `chsize' function. */
#undef HAVE_CHSIZE

/* Define to 1 if you have the `clock_gettime' function. */
#undef HAVE_CLOCK_GETTIME

/* Define to 1 if you have the `clock_settime' function. */
#undef HAVE_CLOCK_SETTIME

/* Define to 1 if you have the `closedir' function. */
#undef HAVE_CLOSEDIR

/* Define if you have compound literals. */
#undef HAVE_COMPOUND_LITERALS

/* Define to 1 if you have the `confstr' function. */
#undef HAVE_CONFSTR

/* Define if the copysignf function is declared in <math.h> and available in
   libc. */
#undef HAVE_COPYSIGNF_IN_LIBC

/* Define if the copysignl function is declared in <math.h> and available in
   libc. */
#undef HAVE_COPYSIGNL_IN_LIBC

/* Define if the copysign function is declared in <math.h> and available in
   libc. */
#undef HAVE_COPYSIGN_IN_LIBC

/* Define to 1 if you have the `cosf' function. */
#undef HAVE_COSF

/* Define to 1 if you have the `coshf' function. */
#undef HAVE_COSHF

/* Define to 1 if C supports variable-length arrays. */
#undef HAVE_C_VARARRAYS

/* Define if the GNU dcgettext() function is already present or preinstalled.
   */
#undef HAVE_DCGETTEXT

/* Define to 1 if you have the declaration of `alarm', and to 0 if you don't.
   */
#undef HAVE_DECL_ALARM

/* Define to 1 if you have the declaration of `ceilf', and to 0 if you don't.
   */
#undef HAVE_DECL_CEILF

/* Define to 1 if you have the declaration of `ceill', and to 0 if you don't.
   */
#undef HAVE_DECL_CEILL

/* Define to 1 if you have the declaration of `clearerr_unlocked', and to 0 if
   you don't. */
#undef HAVE_DECL_CLEARERR_UNLOCKED

/* Define to 1 if you have the declaration of `copysign', and to 0 if you
   don't. */
#undef HAVE_DECL_COPYSIGN

/* Define to 1 if you have the declaration of `copysignf', and to 0 if you
   don't. */
#undef HAVE_DECL_COPYSIGNF

/* Define to 1 if you have the declaration of `copysignl', and to 0 if you
   don't. */
#undef HAVE_DECL_COPYSIGNL

/* Define to 1 if you have the declaration of `dirfd', and to 0 if you don't.
   */
#undef HAVE_DECL_DIRFD

/* Define to 1 if you have the declaration of `fchdir', and to 0 if you don't.
   */
#undef HAVE_DECL_FCHDIR

/* Define to 1 if you have the declaration of `fdatasync', and to 0 if you
   don't. */
#undef HAVE_DECL_FDATASYNC

/* Define to 1 if you have the declaration of `fdopendir', and to 0 if you
   don't. */
#undef HAVE_DECL_FDOPENDIR

/* Define to 1 if you have the declaration of `feof_unlocked', and to 0 if you
   don't. */
#undef HAVE_DECL_FEOF_UNLOCKED

/* Define to 1 if you have the declaration of `ferror_unlocked', and to 0 if
   you don't. */
#undef HAVE_DECL_FERROR_UNLOCKED

/* Define to 1 if you have the declaration of `fflush_unlocked', and to 0 if
   you don't. */
#undef HAVE_DECL_FFLUSH_UNLOCKED

/* Define to 1 if you have the declaration of `fgets_unlocked', and to 0 if
   you don't. */
#undef HAVE_DECL_FGETS_UNLOCKED

/* Define to 1 if you have the declaration of `flockfile', and to 0 if you
   don't. */
#undef HAVE_DECL_FLOCKFILE

/* Define to 1 if you have the declaration of `floorf', and to 0 if you don't.
   */
#undef HAVE_DECL_FLOORF

/* Define to 1 if you have the declaration of `floorl', and to 0 if you don't.
   */
#undef HAVE_DECL_FLOORL

/* Define to 1 if you have the declaration of `forkpty', and to 0 if you
   don't. */
#undef HAVE_DECL_FORKPTY

/* Define to 1 if you have the declaration of `fpurge', and to 0 if you don't.
   */
#undef HAVE_DECL_FPURGE

/* Define to 1 if you have the declaration of `fputc_unlocked', and to 0 if
   you don't. */
#undef HAVE_DECL_FPUTC_UNLOCKED

/* Define to 1 if you have the declaration of `fputs_unlocked', and to 0 if
   you don't. */
#undef HAVE_DECL_FPUTS_UNLOCKED

/* Define to 1 if you have the declaration of `fread_unlocked', and to 0 if
   you don't. */
#undef HAVE_DECL_FREAD_UNLOCKED

/* Define to 1 if you have the declaration of `freeaddrinfo', and to 0 if you
   don't. */
#undef HAVE_DECL_FREEADDRINFO

/* Define to 1 if you have the declaration of `fseeko', and to 0 if you don't.
   */
#undef HAVE_DECL_FSEEKO

/* Define to 1 if you have the declaration of `ftello', and to 0 if you don't.
   */
#undef HAVE_DECL_FTELLO

/* Define to 1 if you have the declaration of `funlockfile', and to 0 if you
   don't. */
#undef HAVE_DECL_FUNLOCKFILE

/* Define to 1 if you have the declaration of `fwrite_unlocked', and to 0 if
   you don't. */
#undef HAVE_DECL_FWRITE_UNLOCKED

/* Define to 1 if you have the declaration of `gai_strerror', and to 0 if you
   don't. */
#undef HAVE_DECL_GAI_STRERROR

/* Define to 1 if you have the declaration of `gai_strerrorA', and to 0 if you
   don't. */
#undef HAVE_DECL_GAI_STRERRORA

/* Define to 1 if you have the declaration of `getaddrinfo', and to 0 if you
   don't. */
#undef HAVE_DECL_GETADDRINFO

/* Define to 1 if you have the declaration of `getchar_unlocked', and to 0 if
   you don't. */
#undef HAVE_DECL_GETCHAR_UNLOCKED

/* Define to 1 if you have the declaration of `getcwd', and to 0 if you don't.
   */
#undef HAVE_DECL_GETCWD

/* Define to 1 if you have the declaration of `getc_unlocked', and to 0 if you
   don't. */
#undef HAVE_DECL_GETC_UNLOCKED

/* Define to 1 if you have the declaration of `getdelim', and to 0 if you
   don't. */
#undef HAVE_DECL_GETDELIM

/* Define to 1 if you have the declaration of `getdomainname', and to 0 if you
   don't. */
#undef HAVE_DECL_GETDOMAINNAME

/* Define to 1 if you have the declaration of `getenv', and to 0 if you don't.
   */
#undef HAVE_DECL_GETENV

/* Define to 1 if you have the declaration of `gethrtime', and to 0 if you
   don't. */
#undef HAVE_DECL_GETHRTIME

/* Define to 1 if you have the declaration of `getline', and to 0 if you
   don't. */
#undef HAVE_DECL_GETLINE

/* Define to 1 if you have the declaration of `getlogin', and to 0 if you
   don't. */
#undef HAVE_DECL_GETLOGIN

/* Define to 1 if you have the declaration of `getlogin_r', and to 0 if you
   don't. */
#undef HAVE_DECL_GETLOGIN_R

/* Define to 1 if you have the declaration of `getnameinfo', and to 0 if you
   don't. */
#undef HAVE_DECL_GETNAMEINFO

/* Define to 1 if you have the declaration of `getpass', and to 0 if you
   don't. */
#undef HAVE_DECL_GETPASS

/* Define to 1 if you have the declaration of `getusershell', and to 0 if you
   don't. */
#undef HAVE_DECL_GETUSERSHELL

/* Define to 1 if you have the declaration of `getutent', and to 0 if you
   don't. */
#undef HAVE_DECL_GETUTENT

/* Define to 1 if you have the declaration of `imaxabs', and to 0 if you
   don't. */
#undef HAVE_DECL_IMAXABS

/* Define to 1 if you have the declaration of `imaxdiv', and to 0 if you
   don't. */
#undef HAVE_DECL_IMAXDIV

/* Define to 1 if you have the declaration of `inet_ntop', and to 0 if you
   don't. */
#undef HAVE_DECL_INET_NTOP

/* Define to 1 if you have the declaration of `inet_pton', and to 0 if you
   don't. */
#undef HAVE_DECL_INET_PTON

/* Define to 1 if you have the declaration of `isblank', and to 0 if you
   don't. */
#undef HAVE_DECL_ISBLANK

/* Define to 1 if you have the declaration of `isfinite', and to 0 if you
   don't. */
#undef HAVE_DECL_ISFINITE

/* Define to 1 if you have the declaration of `isinf', and to 0 if you don't.
   */
#undef HAVE_DECL_ISINF

/* Define to 1 if you have the declaration of `iswblank', and to 0 if you
   don't. */
#undef HAVE_DECL_ISWBLANK

/* Define to 1 if you have the declaration of `localtime_r', and to 0 if you
   don't. */
#undef HAVE_DECL_LOCALTIME_R

/* Define to 1 if you have the declaration of `logb', and to 0 if you don't.
   */
#undef HAVE_DECL_LOGB

/* Define to 1 if you have the declaration of `mbrlen', and to 0 if you don't.
   */
#undef HAVE_DECL_MBRLEN

/* Define to 1 if you have the declaration of `mbrtowc', and to 0 if you
   don't. */
#undef HAVE_DECL_MBRTOWC

/* Define to 1 if you have the declaration of `mbsinit', and to 0 if you
   don't. */
#undef HAVE_DECL_MBSINIT

/* Define to 1 if you have the declaration of `mbsrtowcs', and to 0 if you
   don't. */
#undef HAVE_DECL_MBSRTOWCS

/* Define to 1 if you have a declaration of mbswidth() in <wchar.h>, and to 0
   otherwise. */
#undef HAVE_DECL_MBSWIDTH_IN_WCHAR_H

/* Define to 1 if you have the declaration of `memmem', and to 0 if you don't.
   */
#undef HAVE_DECL_MEMMEM

/* Define to 1 if you have the declaration of `memrchr', and to 0 if you
   don't. */
#undef HAVE_DECL_MEMRCHR

/* Define to 1 if you have the declaration of `obstack_printf', and to 0 if
   you don't. */
#undef HAVE_DECL_OBSTACK_PRINTF

/* Define to 1 if you have the declaration of `openpty', and to 0 if you
   don't. */
#undef HAVE_DECL_OPENPTY

/* Define to 1 if you have the declaration of `program_invocation_name', and
   to 0 if you don't. */
#undef HAVE_DECL_PROGRAM_INVOCATION_NAME

/* Define to 1 if you have the declaration of `program_invocation_short_name',
   and to 0 if you don't. */
#undef HAVE_DECL_PROGRAM_INVOCATION_SHORT_NAME

/* Define to 1 if you have the declaration of `putchar_unlocked', and to 0 if
   you don't. */
#undef HAVE_DECL_PUTCHAR_UNLOCKED

/* Define to 1 if you have the declaration of `putc_unlocked', and to 0 if you
   don't. */
#undef HAVE_DECL_PUTC_UNLOCKED

/* Define to 1 if you have the declaration of `remainderl', and to 0 if you
   don't. */
#undef HAVE_DECL_REMAINDERL

/* Define to 1 if you have the declaration of `rintf', and to 0 if you don't.
   */
#undef HAVE_DECL_RINTF

/* Define to 1 if you have the declaration of `round', and to 0 if you don't.
   */
#undef HAVE_DECL_ROUND

/* Define to 1 if you have the declaration of `roundf', and to 0 if you don't.
   */
#undef HAVE_DECL_ROUNDF

/* Define to 1 if you have the declaration of `roundl', and to 0 if you don't.
   */
#undef HAVE_DECL_ROUNDL

/* Define to 1 if you have the declaration of `setenv', and to 0 if you don't.
   */
#undef HAVE_DECL_SETENV

/* Define to 1 if you have the declaration of `sethostname', and to 0 if you
   don't. */
#undef HAVE_DECL_SETHOSTNAME

/* Define to 1 if you have the declaration of `sigaltstack', and to 0 if you
   don't. */
#undef HAVE_DECL_SIGALTSTACK

/* Define to 1 if you have the declaration of `sleep', and to 0 if you don't.
   */
#undef HAVE_DECL_SLEEP

/* Define to 1 if you have the declaration of `snprintf', and to 0 if you
   don't. */
#undef HAVE_DECL_SNPRINTF

/* Define to 1 if you have the declaration of `stpncpy', and to 0 if you
   don't. */
#undef HAVE_DECL_STPNCPY

/* Define to 1 if you have the declaration of `strdup', and to 0 if you don't.
   */
#undef HAVE_DECL_STRDUP

/* Define to 1 if you have the declaration of `strerror_r', and to 0 if you
   don't. */
#undef HAVE_DECL_STRERROR_R

/* Define to 1 if you have the declaration of `strmode', and to 0 if you
   don't. */
#undef HAVE_DECL_STRMODE

/* Define to 1 if you have the declaration of `strncasecmp', and to 0 if you
   don't. */
#undef HAVE_DECL_STRNCASECMP

/* Define to 1 if you have the declaration of `strndup', and to 0 if you
   don't. */
#undef HAVE_DECL_STRNDUP

/* Define to 1 if you have the declaration of `strnlen', and to 0 if you
   don't. */
#undef HAVE_DECL_STRNLEN

/* Define to 1 if you have the declaration of `strsignal', and to 0 if you
   don't. */
#undef HAVE_DECL_STRSIGNAL

/* Define to 1 if you have the declaration of `strtod', and to 0 if you don't.
   */
#undef HAVE_DECL_STRTOD

/* Define to 1 if you have the declaration of `strtoimax', and to 0 if you
   don't. */
#undef HAVE_DECL_STRTOIMAX

/* Define to 1 if you have the declaration of `strtok_r', and to 0 if you
   don't. */
#undef HAVE_DECL_STRTOK_R

/* Define to 1 if you have the declaration of `strtoll', and to 0 if you
   don't. */
#undef HAVE_DECL_STRTOLL

/* Define to 1 if you have the declaration of `strtoull', and to 0 if you
   don't. */
#undef HAVE_DECL_STRTOULL

/* Define to 1 if you have the declaration of `strtoumax', and to 0 if you
   don't. */
#undef HAVE_DECL_STRTOUMAX

/* Define to 1 if you have the declaration of `sys_siglist', and to 0 if you
   don't. */
#undef HAVE_DECL_SYS_SIGLIST

/* Define to 1 if you have the declaration of `tcgetsid', and to 0 if you
   don't. */
#undef HAVE_DECL_TCGETSID

/* Define to 1 if you have the declaration of `towlower', and to 0 if you
   don't. */
#undef HAVE_DECL_TOWLOWER

/* Define to 1 if you have the declaration of `trunc', and to 0 if you don't.
   */
#undef HAVE_DECL_TRUNC

/* Define to 1 if you have the declaration of `truncf', and to 0 if you don't.
   */
#undef HAVE_DECL_TRUNCF

/* Define to 1 if you have the declaration of `truncl', and to 0 if you don't.
   */
#undef HAVE_DECL_TRUNCL

/* Define to 1 if you have the declaration of `ttyname_r', and to 0 if you
   don't. */
#undef HAVE_DECL_TTYNAME_R

/* Define to 1 if you have the declaration of `tzname', and to 0 if you don't.
   */
#undef HAVE_DECL_TZNAME

/* Define to 1 if you have the declaration of `unsetenv', and to 0 if you
   don't. */
#undef HAVE_DECL_UNSETENV

/* Define to 1 if you have the declaration of `vsnprintf', and to 0 if you
   don't. */
#undef HAVE_DECL_VSNPRINTF

/* Define to 1 if you have the declaration of `wcrtomb', and to 0 if you
   don't. */
#undef HAVE_DECL_WCRTOMB

/* Define to 1 if you have the declaration of `wcsrtombs', and to 0 if you
   don't. */
#undef HAVE_DECL_WCSRTOMBS

/* Define to 1 if you have the declaration of `wctob', and to 0 if you don't.
   */
#undef HAVE_DECL_WCTOB

/* Define to 1 if you have the declaration of `wcwidth', and to 0 if you
   don't. */
#undef HAVE_DECL_WCWIDTH

/* Define to 1 if you have the declaration of `_snprintf', and to 0 if you
   don't. */
#undef HAVE_DECL__SNPRINTF

/* Define to 1 if you have the declaration of `_sys_siglist', and to 0 if you
   don't. */
#undef HAVE_DECL__SYS_SIGLIST

/* Define to 1 if you have the declaration of `__fpending', and to 0 if you
   don't. */
#undef HAVE_DECL___FPENDING

/* Define to 1 if you have the declaration of `__fsetlocking', and to 0 if you
   don't. */
#undef HAVE_DECL___FSETLOCKING

/* Define to 1 if you have the <dirent.h> header file. */
#undef HAVE_DIRENT_H

/* Define to 1 if you have the `dirfd' function. */
#undef HAVE_DIRFD

/* Define to 1 if you have the 'dprintf' function. */
#undef HAVE_DPRINTF

/* Define to 1 if you have the 'dup2' function. */
#undef HAVE_DUP2

/* Define to 1 if you have the 'dup3' function. */
#undef HAVE_DUP3

/* Define to 1 if you have the 'duplocale' function. */
#undef HAVE_DUPLOCALE

/* Define to 1 if you have the <dustat.h> header file. */
#undef HAVE_DUSTAT_H

/* Define to 1 if you have the `eaccess' function. */
#undef HAVE_EACCESS

/* Define if you have the declaration of environ. */
#undef HAVE_ENVIRON_DECL

/* Define to 1 if the system has the type `error_t'. */
#undef HAVE_ERROR_T

/* Define to 1 if you have the `euidaccess' function. */
#undef HAVE_EUIDACCESS

/* Define to 1 if you have the <execinfo.h> header file. */
#undef HAVE_EXECINFO_H

/* Define to 1 if you have the `exp2f' function. */
#undef HAVE_EXP2F

/* Define to 1 if you have the `exp2l' function. */
#undef HAVE_EXP2L

/* Define to 1 if you have the `expf' function. */
#undef HAVE_EXPF

/* Define to 1 if you have the `expm1f' function. */
#undef HAVE_EXPM1F

/* Define to 1 if you have the 'faccessat' function. */
#undef HAVE_FACCESSAT

/* Define to 1 if you have the `facl' function. */
#undef HAVE_FACL

/* Define to 1 if you have the 'fchdir' function. */
#undef HAVE_FCHDIR

/* Define to 1 if you have the 'fchmod' function. */
#undef HAVE_FCHMOD

/* Define to 1 if you have the 'fchmodat' function. */
#undef HAVE_FCHMODAT

/* Define to 1 if you have the 'fchown' function. */
#undef HAVE_FCHOWN

/* Define to 1 if you have the 'fcntl' function. */
#undef HAVE_FCNTL

/* Define to 1 if you have the `fdatasync' function. */
#undef HAVE_FDATASYNC

/* Define to 1 if you have the 'fdopendir' function. */
#undef HAVE_FDOPENDIR

/* Define to 1 if you have the <features.h> header file. */
#undef HAVE_FEATURES_H

/* Define to 1 if you have the 'fegetround' function. */
#undef HAVE_FEGETROUND

/* Define to 1 if you have the 'ffs' function. */
#undef HAVE_FFS

/* Define to 1 if you have the 'ffsl' function. */
#undef HAVE_FFSL

/* Define to 1 if you have the 'ffsll' function. */
#undef HAVE_FFSLL

/* Define to 1 if pipes are FIFOs, 0 if sockets. Leave undefined if not known.
   */
#undef HAVE_FIFO_PIPES

/* Define to 1 if you have the 'flock' function. */
#undef HAVE_FLOCK

/* Define to 1 if you have the `flockfile' function. */
#undef HAVE_FLOCKFILE

/* Define if the both the floorf() and ceilf() functions exist. */
#undef HAVE_FLOORF_AND_CEILF

/* Define if the both the floorl() and ceill() functions exist. */
#undef HAVE_FLOORL_AND_CEILL

/* Define to 1 if you have the `fmodf' function. */
#undef HAVE_FMODF

/* Define to 1 if you have the `fmodl' function. */
#undef HAVE_FMODL

/* Define to 1 if you have the 'fpurge' function. */
#undef HAVE_FPURGE

/* Define if the frexp() function is available and works. */
#undef HAVE_FREXP

/* Define if the frexpl() function is available. */
#undef HAVE_FREXPL

/* Define if the frexpl function is available in libc. */
#undef HAVE_FREXPL_IN_LIBC

/* Define if the frexp function is available in libc. */
#undef HAVE_FREXP_IN_LIBC

/* Define to 1 if fseeko (and presumably ftello) exists and is declared. */
#undef HAVE_FSEEKO

/* Define to 1 if you have the 'fstatat' function. */
#undef HAVE_FSTATAT

/* Define to 1 if you have the 'fstatfs' function. */
#undef HAVE_FSTATFS

/* Define to 1 if you have the 'fsync' function. */
#undef HAVE_FSYNC

/* Define to 1 if you have the 'ftruncate' function. */
#undef HAVE_FTRUNCATE

/* Define to 1 if you have the `funlockfile' function. */
#undef HAVE_FUNLOCKFILE

/* Define to 1 if you have the 'futimens' function. */
#undef HAVE_FUTIMENS

/* Define to 1 if you have the 'futimes' function. */
#undef HAVE_FUTIMES

/* Define to 1 if you have the 'futimesat' function. */
#undef HAVE_FUTIMESAT

/* Define to 1 if you have the `getacl' function. */
#undef HAVE_GETACL

/* Define to 1 if you have the 'getcwd' function. */
#undef HAVE_GETCWD

/* Define to 1 if you have the 'getdelim' function. */
#undef HAVE_GETDELIM

/* Define if the getdomainname() function is present and can be used. */
#undef HAVE_GETDOMAINNAME

/* Define to 1 if you have the 'getdtablesize' function. */
#undef HAVE_GETDTABLESIZE

/* Define to 1 if you have the 'getegid' function. */
#undef HAVE_GETEGID

/* Define to 1 if you have the 'geteuid' function. */
#undef HAVE_GETEUID

/* Define to 1 if you have the 'getgid' function. */
#undef HAVE_GETGID

/* Define to 1 if you have the 'getgrouplist' function. */
#undef HAVE_GETGROUPLIST

/* Define to 1 if your system has a working `getgroups' function. */
#undef HAVE_GETGROUPS

/* Define to 1 if you have the `gethostbyname' function. */
#undef HAVE_GETHOSTBYNAME

/* Define to 1 if you have the `gethostname' function. */
#undef HAVE_GETHOSTNAME

/* Define to 1 if you have the 'getlogin' function. */
#undef HAVE_GETLOGIN

/* Define to 1 if you have the 'getlogin_r' function. */
#undef HAVE_GETLOGIN_R

/* Define to 1 if you have the <getopt.h> header file. */
#undef HAVE_GETOPT_H

/* Define to 1 if you have the `getopt_long_only' function. */
#undef HAVE_GETOPT_LONG_ONLY

/* Define to 1 if you have the `getpagesize' function. */
#undef HAVE_GETPAGESIZE

/* Define to 1 if you have the `getpass' function. */
#undef HAVE_GETPASS

/* Define to 1 if you have the `getppriv' function. */
#undef HAVE_GETPPRIV

/* Define to 1 if you have the 'getpwnam_r' function. */
#undef HAVE_GETPWNAM_R

/* Define to 1 if you have the 'getresgid' function. */
#undef HAVE_GETRESGID

/* Define to 1 if you have the 'getresuid' function. */
#undef HAVE_GETRESUID

/* Define to 1 if you have the 'getrlimit' function. */
#undef HAVE_GETRLIMIT

/* Define to 1 if you have the 'getrusage' function. */
#undef HAVE_GETRUSAGE

/* Define to 1 if you have the `getservbyname' function. */
#undef HAVE_GETSERVBYNAME

/* Define to 1 if you have the 'getsubopt' function. */
#undef HAVE_GETSUBOPT

/* Define to 1 if you have the `getsysinfo' function. */
#undef HAVE_GETSYSINFO

/* Define if the GNU gettext() function is already present or preinstalled. */
#undef HAVE_GETTEXT

/* Define to 1 if you have the 'gettimeofday' function. */
#undef HAVE_GETTIMEOFDAY

/* Define to 1 if you have the 'getuid' function. */
#undef HAVE_GETUID

/* Define to 1 if you have the 'getusershell' function. */
#undef HAVE_GETUSERSHELL

/* Define to 1 if you have the <glob.h> header file. */
#undef HAVE_GLOB_H

/* Define to 1 if you have the `grantpt' function. */
#undef HAVE_GRANTPT

/* Define to 1 if you have the <grp.h> header file. */
#undef HAVE_GRP_H

/* Define to 1 if you have the `hypotf' function. */
#undef HAVE_HYPOTF

/* Define to 1 if you have the `hypotl' function. */
#undef HAVE_HYPOTL

/* Define if you have the iconv() function and it works. */
#undef HAVE_ICONV

/* Define to 1 if you have the <iconv.h> header file. */
#undef HAVE_ICONV_H

/* Define if you have if_nameindex. */
#undef HAVE_IF_NAMEINDEX

/* Define to 1 if you have the 'imaxabs' function. */
#undef HAVE_IMAXABS

/* Define to 1 if you have the 'imaxdiv' function. */
#undef HAVE_IMAXDIV

/* Define to 1 if you have the `inet_ntop' function. */
#undef HAVE_INET_NTOP

/* Define to 1 if you have the `inet_pton' function. */
#undef HAVE_INET_PTON

/* Define to 1 if you have the 'initstate' function. */
#undef HAVE_INITSTATE

/* Define to 1 if the compiler supports one of the keywords 'inline',
   '__inline__', '__inline' and effectively inlines functions marked as such.
   */
#undef HAVE_INLINE

/* Define if you have the 'intmax_t' type in <stdint.h> or <inttypes.h>. */
#undef HAVE_INTMAX_T

/* Define to 1 if you have the <inttypes.h> header file. */
#undef HAVE_INTTYPES_H

/* Define if <inttypes.h> exists, doesn't clash with <sys/types.h>, and
   declares uintmax_t. */
#undef HAVE_INTTYPES_H_WITH_UINTMAX

/* Define to 1 if you have the `ioctl' function. */
#undef HAVE_IOCTL

/* Define to 1 if <sys/socket.h> defines AF_INET. */
#undef HAVE_IPV4

/* Define to 1 if <sys/socket.h> defines AF_INET6. */
#undef HAVE_IPV6

/* Define to 1 if you have the `isapipe' function. */
#undef HAVE_ISAPIPE

/* Define to 1 if you have the 'isascii' function. */
#undef HAVE_ISASCII

/* Define to 1 if you have the 'isblank' function. */
#undef HAVE_ISBLANK

/* Define if the isnan(double) function is available in libc. */
#undef HAVE_ISNAND_IN_LIBC

/* Define if the isnan(float) function is available in libc. */
#undef HAVE_ISNANF_IN_LIBC

/* Define if the isnan(long double) function is available in libc. */
#undef HAVE_ISNANL_IN_LIBC

/* Define to 1 if you have the 'iswblank' function. */
#undef HAVE_ISWBLANK

/* Define to 1 if you have the 'iswcntrl' function. */
#undef HAVE_ISWCNTRL

/* Define to 1 if you have the 'iswctype' function. */
#undef HAVE_ISWCTYPE

/* Define if you have <langinfo.h> and nl_langinfo(CODESET). */
#undef HAVE_LANGINFO_CODESET

/* Define to 1 if you have the <langinfo.h> header file. */
#undef HAVE_LANGINFO_H

/* Define if you have <langinfo.h> and nl_langinfo(YESEXPR). */
#undef HAVE_LANGINFO_YESEXPR

/* Define to 1 if you have the 'lchmod' function. */
#undef HAVE_LCHMOD

/* Define to 1 if you have the `lchown' function. */
#undef HAVE_LCHOWN

/* Define if your <locale.h> file defines LC_MESSAGES. */
#undef HAVE_LC_MESSAGES

/* Define if the ldexpl() function is available. */
#undef HAVE_LDEXPL

/* Define if the ldexpl function is available in libc. */
#undef HAVE_LDEXPL_IN_LIBC

/* Define if the ldexp function is available in libc. */
#undef HAVE_LDEXP_IN_LIBC

/* Define to 1 if you have the `dgc' library (-ldgc). */
#undef HAVE_LIBDGC

/* Define if you have the libgcrypt library. */
#undef HAVE_LIBGCRYPT

/* Define to 1 if you have the <libgen.h> header file. */
#undef HAVE_LIBGEN_H

/* Define to 1 if you have the <libintl.h> header file. */
#undef HAVE_LIBINTL_H

/* Define to 1 if you have the `kstat' library (-lkstat). */
#undef HAVE_LIBKSTAT

/* Define to 1 if you have the `perfstat' library (-lperfstat). */
#undef HAVE_LIBPERFSTAT

/* Define if you have the libsigsegv library. */
#undef HAVE_LIBSIGSEGV

/* Define if you have the libunistring library. */
#undef HAVE_LIBUNISTRING

/* Define to 1 if you have the <libutil.h> header file. */
#undef HAVE_LIBUTIL_H

/* Define to 1 if you have the <linewrap.h> header file. */
#undef HAVE_LINEWRAP_H

/* Define to 1 if you have the 'link' function. */
#undef HAVE_LINK

/* Define to 1 if you have the 'linkat' function. */
#undef HAVE_LINKAT

/* Define to 1 if you have the 'localtime_r' function. */
#undef HAVE_LOCALTIME_R

/* Define to 1 if you have the `log10f' function. */
#undef HAVE_LOG10F

/* Define to 1 if you have the `log10l' function. */
#undef HAVE_LOG10L

/* Define to 1 if you have the `log1p' function. */
#undef HAVE_LOG1P

/* Define to 1 if you have the `log1pf' function. */
#undef HAVE_LOG1PF

/* Define to 1 if you have the `log1pl' function. */
#undef HAVE_LOG1PL

/* Define to 1 if the log2() function is available in libc or libm. */
#undef HAVE_LOG2

/* Define to 1 if you have the `log2f' function. */
#undef HAVE_LOG2F

/* Define to 1 if you have the `log2l' function. */
#undef HAVE_LOG2L

/* Define to 1 if you have the `logf' function. */
#undef HAVE_LOGF

/* Define to 1 if you have the `login_tty' function. */
#undef HAVE_LOGIN_TTY

/* Define to 1 if you support file names longer than 14 characters. */
#undef HAVE_LONG_FILE_NAMES

/* Define to 1 if the system has the type 'long long int'. */
#undef HAVE_LONG_LONG_INT

/* Define to 1 if you have the 'lstat' function. */
#undef HAVE_LSTAT

/* Define to 1 if you have the 'lutimes' function. */
#undef HAVE_LUTIMES

/* Define to 1 if you have the <machine/hal_sysinfo.h> header file. */
#undef HAVE_MACHINE_HAL_SYSINFO_H

/* Define to 1 if you have the <mach/mach.h> header file. */
#undef HAVE_MACH_MACH_H

/* Define to 1 if you have the <mach-o/dyld.h> header file. */
#undef HAVE_MACH_O_DYLD_H

/* Define to 1 if your system has a GNU libc compatible 'malloc' function, and
   to 0 otherwise. */
#undef HAVE_MALLOC_GNU

/* Define if the 'malloc' function is POSIX compliant. */
#undef HAVE_MALLOC_POSIX

/* Define to 1 if mmap()'s MAP_ANONYMOUS flag is available after including
   config.h and <sys/mman.h>. */
#undef HAVE_MAP_ANONYMOUS

/* Define to 1 if you have the <math.h> header file. */
#undef HAVE_MATH_H

/* Define to 1 if you have the 'mbrlen' function. */
#undef HAVE_MBRLEN

/* Define to 1 if you have the 'mbrtowc' function. */
#undef HAVE_MBRTOWC

/* Define to 1 if you have the 'mbsinit' function. */
#undef HAVE_MBSINIT

/* Define to 1 if you have the 'mbslen' function. */
#undef HAVE_MBSLEN

/* Define to 1 if you have the 'mbsnrtowcs' function. */
#undef HAVE_MBSNRTOWCS

/* Define to 1 if you have the 'mbsrtowcs' function. */
#undef HAVE_MBSRTOWCS

/* Define to 1 if <wchar.h> declares mbstate_t. */
#undef HAVE_MBSTATE_T

/* Define to 1 if you have the 'memchr' function. */
#undef HAVE_MEMCHR

/* Define to 1 if you have the `memcpy' function. */
#undef HAVE_MEMCPY

/* Define to 1 if you have the `memmem' function. */
#undef HAVE_MEMMEM

/* Define to 1 if you have the `memmove' function. */
#undef HAVE_MEMMOVE

/* Define to 1 if you have the <memory.h> header file. */
#undef HAVE_MEMORY_H

/* Define to 1 if you have the `mempcpy' function. */
#undef HAVE_MEMPCPY

/* Define to 1 if you have the `memrchr' function. */
#undef HAVE_MEMRCHR

/* Define to 1 if you have the `memset' function. */
#undef HAVE_MEMSET

/* Define to 1 if you have the 'microuptime' function. */
#undef HAVE_MICROUPTIME

/* Define to 1 if getcwd minimally works, that is, its result can be trusted
   when it succeeds. */
#undef HAVE_MINIMALLY_WORKING_GETCWD

/* Define to 1 if <limits.h> defines the MIN and MAX macros. */
#undef HAVE_MINMAX_IN_LIMITS_H

/* Define to 1 if <sys/param.h> defines the MIN and MAX macros. */
#undef HAVE_MINMAX_IN_SYS_PARAM_H

/* Define to 1 if you have the 'mkdirat' function. */
#undef HAVE_MKDIRAT

/* Define to 1 if you have the `mkdtemp' function. */
#undef HAVE_MKDTEMP

/* Define to 1 if you have the 'mkfifo' function. */
#undef HAVE_MKFIFO

/* Define to 1 if you have the 'mkfifoat' function. */
#undef HAVE_MKFIFOAT

/* Define to 1 if you have the 'mknod' function. */
#undef HAVE_MKNOD

/* Define to 1 if you have the 'mknodat' function. */
#undef HAVE_MKNODAT

/* Define to 1 if you have the 'mkostemp' function. */
#undef HAVE_MKOSTEMP

/* Define to 1 if you have the 'mkostemps' function. */
#undef HAVE_MKOSTEMPS

/* Define to 1 if you have the 'mkstemp' function. */
#undef HAVE_MKSTEMP

/* Define to 1 if you have the 'mkstemps' function. */
#undef HAVE_MKSTEMPS

/* Define to 1 if you have the 'mprotect' function. */
#undef HAVE_MPROTECT

/* Define to 1 if you have the 'mquery' function. */
#undef HAVE_MQUERY

/* Define to 1 on MSVC platforms that have the "invalid parameter handler"
   concept. */
#undef HAVE_MSVC_INVALID_PARAMETER_HANDLER

/* Define to 1 if you have the 'nanotime' function. */
#undef HAVE_NANOTIME

/* Define to 1 if you have the 'nanouptime' function. */
#undef HAVE_NANOUPTIME

/* Define to 1 if you have the <netdb.h> header file. */
#undef HAVE_NETDB_H

/* Define to 1 if you have the <netinet/in.h> header file. */
#undef HAVE_NETINET_IN_H

/* Define to 1 if you have the <net/if.h> header file. */
#undef HAVE_NET_IF_H

/* Define to 1 if you have the 'newlocale' function. */
#undef HAVE_NEWLOCALE

/* Define to 1 if you have the <nlist.h> header file. */
#undef HAVE_NLIST_H

/* Define to 1 if you have the `nl_langinfo' function. */
#undef HAVE_NL_LANGINFO

/* Define to 1 if libc includes obstacks. */
#undef HAVE_OBSTACK

/* Define to 1 if you have the 'obstack_printf' function. */
#undef HAVE_OBSTACK_PRINTF

/* Define to 1 if you have the 'openat' function. */
#undef HAVE_OPENAT

/* Define to 1 if you have the `opendir' function. */
#undef HAVE_OPENDIR

/* Define to 1 if the system has the 'openpty' function. */
#undef HAVE_OPENPTY

/* Define to 1 if you have the <OS.h> header file. */
#undef HAVE_OS_H

/* Define to 1 if getcwd works, except it sometimes fails when it shouldn't,
   setting errno to ERANGE, ENAMETOOLONG, or ENOENT. */
#undef HAVE_PARTLY_WORKING_GETCWD

/* Define to 1 if you have the 'pathconf' function. */
#undef HAVE_PATHCONF

/* Define to 1 if you have the <paths.h> header file. */
#undef HAVE_PATHS_H

/* Define to 1 if you have the 'pclose' function. */
#undef HAVE_PCLOSE

/* Define to 1 if you have the 'pipe' function. */
#undef HAVE_PIPE

/* Define to 1 if you have the 'pipe2' function. */
#undef HAVE_PIPE2

/* Define to 1 if you have the 'poll' function and it works. */
#undef HAVE_POLL

/* Define to 1 if you have the <poll.h> header file. */
#undef HAVE_POLL_H

/* Define to 1 if you have the 'popen' function. */
#undef HAVE_POPEN

/* Define if the ttyname_r function has a POSIX compliant declaration. */
#undef HAVE_POSIXDECL_TTYNAME_R

/* Define to 1 if you have the 'posix_memalign' function. */
#undef HAVE_POSIX_MEMALIGN

/* Define to 1 if you have the 'posix_openpt' function. */
#undef HAVE_POSIX_OPENPT

/* Define to 1 if you have the 'posix_spawn' function. */
#undef HAVE_POSIX_SPAWN

/* Define to 1 if the system has the type `posix_spawnattr_t'. */
#undef HAVE_POSIX_SPAWNATTR_T

/* Define to 1 if the system has the type `posix_spawn_file_actions_t'. */
#undef HAVE_POSIX_SPAWN_FILE_ACTIONS_T

/* Define to 1 if you have the `powf' function. */
#undef HAVE_POWF

/* Define to 1 if you have the 'pread' function. */
#undef HAVE_PREAD

/* Define to 1 if you have the <priv.h> header file. */
#undef HAVE_PRIV_H

/* Define if your system has the /proc/uptime special file. */
#undef HAVE_PROC_UPTIME

/* Define if program_invocation_name is defined */
#undef HAVE_PROGRAM_INVOCATION_NAME

/* Define if program_invocation_short_name is defined */
#undef HAVE_PROGRAM_INVOCATION_SHORT_NAME

/* Define to 1 if you have the 'pselect' function. */
#undef HAVE_PSELECT

/* Define to 1 if you have the `pstat_getdynamic' function. */
#undef HAVE_PSTAT_GETDYNAMIC

/* Define to 1 if you have the `pstat_getstatic' function. */
#undef HAVE_PSTAT_GETSTATIC

/* Define to 1 if you have the `pthread_atfork' function. */
#undef HAVE_PTHREAD_ATFORK

/* Define to 1 if you have the <pthread.h> header file. */
#undef HAVE_PTHREAD_H

/* Define if the <pthread.h> defines PTHREAD_MUTEX_RECURSIVE. */
#undef HAVE_PTHREAD_MUTEX_RECURSIVE

/* Define if the POSIX multithreading library has read/write locks. */
#undef HAVE_PTHREAD_RWLOCK

/* Define to 1 if the pthread_sigmask function can be used (despite bugs). */
#undef HAVE_PTHREAD_SIGMASK

/* Define to 1 if the system has the type `pthread_spinlock_t'. */
#undef HAVE_PTHREAD_SPINLOCK_T

/* Define to 1 if the system has the type `pthread_t'. */
#undef HAVE_PTHREAD_T

/* Define to 1 if you have the `ptsname' function. */
#undef HAVE_PTSNAME

/* Define to 1 if you have the 'ptsname_r' function. */
#undef HAVE_PTSNAME_R

/* Define to 1 if you have the <pty.h> header file. */
#undef HAVE_PTY_H

/* Define to 1 if you have the 'pwrite' function. */
#undef HAVE_PWRITE

/* Define to 1 if you have the `raise' function. */
#undef HAVE_RAISE

/* Define to 1 if you have the `random' function. */
#undef HAVE_RANDOM

/* Define to 1 if you have the <random.h> header file. */
#undef HAVE_RANDOM_H

/* Define to 1 if you have the `random_r' function. */
#undef HAVE_RANDOM_R

/* Define to 1 if you have the `rawmemchr' function. */
#undef HAVE_RAWMEMCHR

/* Define to 1 if accept is declared even after undefining macros. */
#undef HAVE_RAW_DECL_ACCEPT

/* Define to 1 if accept4 is declared even after undefining macros. */
#undef HAVE_RAW_DECL_ACCEPT4

/* Define to 1 if acosf is declared even after undefining macros. */
#undef HAVE_RAW_DECL_ACOSF

/* Define to 1 if acosl is declared even after undefining macros. */
#undef HAVE_RAW_DECL_ACOSL

/* Define to 1 if alphasort is declared even after undefining macros. */
#undef HAVE_RAW_DECL_ALPHASORT

/* Define to 1 if asinf is declared even after undefining macros. */
#undef HAVE_RAW_DECL_ASINF

/* Define to 1 if asinl is declared even after undefining macros. */
#undef HAVE_RAW_DECL_ASINL

/* Define to 1 if atanf is declared even after undefining macros. */
#undef HAVE_RAW_DECL_ATANF

/* Define to 1 if atanl is declared even after undefining macros. */
#undef HAVE_RAW_DECL_ATANL

/* Define to 1 if atoll is declared even after undefining macros. */
#undef HAVE_RAW_DECL_ATOLL

/* Define to 1 if bind is declared even after undefining macros. */
#undef HAVE_RAW_DECL_BIND

/* Define to 1 if btowc is declared even after undefining macros. */
#undef HAVE_RAW_DECL_BTOWC

/* Define to 1 if canonicalize_file_name is declared even after undefining
   macros. */
#undef HAVE_RAW_DECL_CANONICALIZE_FILE_NAME

/* Define to 1 if cbrt is declared even after undefining macros. */
#undef HAVE_RAW_DECL_CBRT

/* Define to 1 if cbrtf is declared even after undefining macros. */
#undef HAVE_RAW_DECL_CBRTF

/* Define to 1 if cbrtl is declared even after undefining macros. */
#undef HAVE_RAW_DECL_CBRTL

/* Define to 1 if ceilf is declared even after undefining macros. */
#undef HAVE_RAW_DECL_CEILF

/* Define to 1 if ceill is declared even after undefining macros. */
#undef HAVE_RAW_DECL_CEILL

/* Define to 1 if chdir is declared even after undefining macros. */
#undef HAVE_RAW_DECL_CHDIR

/* Define to 1 if chown is declared even after undefining macros. */
#undef HAVE_RAW_DECL_CHOWN

/* Define to 1 if closedir is declared even after undefining macros. */
#undef HAVE_RAW_DECL_CLOSEDIR

/* Define to 1 if connect is declared even after undefining macros. */
#undef HAVE_RAW_DECL_CONNECT

/* Define to 1 if copysign is declared even after undefining macros. */
#undef HAVE_RAW_DECL_COPYSIGN

/* Define to 1 if copysignf is declared even after undefining macros. */
#undef HAVE_RAW_DECL_COPYSIGNF

/* Define to 1 if copysignl is declared even after undefining macros. */
#undef HAVE_RAW_DECL_COPYSIGNL

/* Define to 1 if cosf is declared even after undefining macros. */
#undef HAVE_RAW_DECL_COSF

/* Define to 1 if coshf is declared even after undefining macros. */
#undef HAVE_RAW_DECL_COSHF

/* Define to 1 if cosl is declared even after undefining macros. */
#undef HAVE_RAW_DECL_COSL

/* Define to 1 if dirfd is declared even after undefining macros. */
#undef HAVE_RAW_DECL_DIRFD

/* Define to 1 if dprintf is declared even after undefining macros. */
#undef HAVE_RAW_DECL_DPRINTF

/* Define to 1 if dup is declared even after undefining macros. */
#undef HAVE_RAW_DECL_DUP

/* Define to 1 if dup2 is declared even after undefining macros. */
#undef HAVE_RAW_DECL_DUP2

/* Define to 1 if dup3 is declared even after undefining macros. */
#undef HAVE_RAW_DECL_DUP3

/* Define to 1 if duplocale is declared even after undefining macros. */
#undef HAVE_RAW_DECL_DUPLOCALE

/* Define to 1 if endusershell is declared even after undefining macros. */
#undef HAVE_RAW_DECL_ENDUSERSHELL

/* Define to 1 if environ is declared even after undefining macros. */
#undef HAVE_RAW_DECL_ENVIRON

/* Define to 1 if euidaccess is declared even after undefining macros. */
#undef HAVE_RAW_DECL_EUIDACCESS

/* Define to 1 if exp2 is declared even after undefining macros. */
#undef HAVE_RAW_DECL_EXP2

/* Define to 1 if exp2f is declared even after undefining macros. */
#undef HAVE_RAW_DECL_EXP2F

/* Define to 1 if exp2l is declared even after undefining macros. */
#undef HAVE_RAW_DECL_EXP2L

/* Define to 1 if expf is declared even after undefining macros. */
#undef HAVE_RAW_DECL_EXPF

/* Define to 1 if expl is declared even after undefining macros. */
#undef HAVE_RAW_DECL_EXPL

/* Define to 1 if expm1 is declared even after undefining macros. */
#undef HAVE_RAW_DECL_EXPM1

/* Define to 1 if expm1f is declared even after undefining macros. */
#undef HAVE_RAW_DECL_EXPM1F

/* Define to 1 if expm1l is declared even after undefining macros. */
#undef HAVE_RAW_DECL_EXPM1L

/* Define to 1 if fabsf is declared even after undefining macros. */
#undef HAVE_RAW_DECL_FABSF

/* Define to 1 if fabsl is declared even after undefining macros. */
#undef HAVE_RAW_DECL_FABSL

/* Define to 1 if faccessat is declared even after undefining macros. */
#undef HAVE_RAW_DECL_FACCESSAT

/* Define to 1 if fchdir is declared even after undefining macros. */
#undef HAVE_RAW_DECL_FCHDIR

/* Define to 1 if fchmodat is declared even after undefining macros. */
#undef HAVE_RAW_DECL_FCHMODAT

/* Define to 1 if fchownat is declared even after undefining macros. */
#undef HAVE_RAW_DECL_FCHOWNAT

/* Define to 1 if fcntl is declared even after undefining macros. */
#undef HAVE_RAW_DECL_FCNTL

/* Define to 1 if fdatasync is declared even after undefining macros. */
#undef HAVE_RAW_DECL_FDATASYNC

/* Define to 1 if fdopendir is declared even after undefining macros. */
#undef HAVE_RAW_DECL_FDOPENDIR

/* Define to 1 if ffs is declared even after undefining macros. */
#undef HAVE_RAW_DECL_FFS

/* Define to 1 if ffsl is declared even after undefining macros. */
#undef HAVE_RAW_DECL_FFSL

/* Define to 1 if ffsll is declared even after undefining macros. */
#undef HAVE_RAW_DECL_FFSLL

/* Define to 1 if flock is declared even after undefining macros. */
#undef HAVE_RAW_DECL_FLOCK

/* Define to 1 if floorf is declared even after undefining macros. */
#undef HAVE_RAW_DECL_FLOORF

/* Define to 1 if floorl is declared even after undefining macros. */
#undef HAVE_RAW_DECL_FLOORL

/* Define to 1 if fma is declared even after undefining macros. */
#undef HAVE_RAW_DECL_FMA

/* Define to 1 if fmaf is declared even after undefining macros. */
#undef HAVE_RAW_DECL_FMAF

/* Define to 1 if fmal is declared even after undefining macros. */
#undef HAVE_RAW_DECL_FMAL

/* Define to 1 if fmod is declared even after undefining macros. */
#undef HAVE_RAW_DECL_FMOD

/* Define to 1 if fmodf is declared even after undefining macros. */
#undef HAVE_RAW_DECL_FMODF

/* Define to 1 if fmodl is declared even after undefining macros. */
#undef HAVE_RAW_DECL_FMODL

/* Define to 1 if forkpty is declared even after undefining macros. */
#undef HAVE_RAW_DECL_FORKPTY

/* Define to 1 if fpurge is declared even after undefining macros. */
#undef HAVE_RAW_DECL_FPURGE

/* Define to 1 if freeaddrinfo is declared even after undefining macros. */
#undef HAVE_RAW_DECL_FREEADDRINFO

/* Define to 1 if frexpf is declared even after undefining macros. */
#undef HAVE_RAW_DECL_FREXPF

/* Define to 1 if frexpl is declared even after undefining macros. */
#undef HAVE_RAW_DECL_FREXPL

/* Define to 1 if fseeko is declared even after undefining macros. */
#undef HAVE_RAW_DECL_FSEEKO

/* Define to 1 if fstat is declared even after undefining macros. */
#undef HAVE_RAW_DECL_FSTAT

/* Define to 1 if fstatat is declared even after undefining macros. */
#undef HAVE_RAW_DECL_FSTATAT

/* Define to 1 if fsync is declared even after undefining macros. */
#undef HAVE_RAW_DECL_FSYNC

/* Define to 1 if ftello is declared even after undefining macros. */
#undef HAVE_RAW_DECL_FTELLO

/* Define to 1 if ftruncate is declared even after undefining macros. */
#undef HAVE_RAW_DECL_FTRUNCATE

/* Define to 1 if futimens is declared even after undefining macros. */
#undef HAVE_RAW_DECL_FUTIMENS

/* Define to 1 if gai_strerror is declared even after undefining macros. */
#undef HAVE_RAW_DECL_GAI_STRERROR

/* Define to 1 if getaddrinfo is declared even after undefining macros. */
#undef HAVE_RAW_DECL_GETADDRINFO

/* Define to 1 if getcwd is declared even after undefining macros. */
#undef HAVE_RAW_DECL_GETCWD

/* Define to 1 if getdelim is declared even after undefining macros. */
#undef HAVE_RAW_DECL_GETDELIM

/* Define to 1 if getdomainname is declared even after undefining macros. */
#undef HAVE_RAW_DECL_GETDOMAINNAME

/* Define to 1 if getdtablesize is declared even after undefining macros. */
#undef HAVE_RAW_DECL_GETDTABLESIZE

/* Define to 1 if getgroups is declared even after undefining macros. */
#undef HAVE_RAW_DECL_GETGROUPS

/* Define to 1 if gethostname is declared even after undefining macros. */
#undef HAVE_RAW_DECL_GETHOSTNAME

/* Define to 1 if getline is declared even after undefining macros. */
#undef HAVE_RAW_DECL_GETLINE

/* Define to 1 if getloadavg is declared even after undefining macros. */
#undef HAVE_RAW_DECL_GETLOADAVG

/* Define to 1 if getlogin is declared even after undefining macros. */
#undef HAVE_RAW_DECL_GETLOGIN

/* Define to 1 if getlogin_r is declared even after undefining macros. */
#undef HAVE_RAW_DECL_GETLOGIN_R

/* Define to 1 if getnameinfo is declared even after undefining macros. */
#undef HAVE_RAW_DECL_GETNAMEINFO

/* Define to 1 if getpagesize is declared even after undefining macros. */
#undef HAVE_RAW_DECL_GETPAGESIZE

/* Define to 1 if getpeername is declared even after undefining macros. */
#undef HAVE_RAW_DECL_GETPEERNAME

/* Define to 1 if getrusage is declared even after undefining macros. */
#undef HAVE_RAW_DECL_GETRUSAGE

/* Define to 1 if gets is declared even after undefining macros. */
#undef HAVE_RAW_DECL_GETS

/* Define to 1 if getsockname is declared even after undefining macros. */
#undef HAVE_RAW_DECL_GETSOCKNAME

/* Define to 1 if getsockopt is declared even after undefining macros. */
#undef HAVE_RAW_DECL_GETSOCKOPT

/* Define to 1 if getsubopt is declared even after undefining macros. */
#undef HAVE_RAW_DECL_GETSUBOPT

/* Define to 1 if gettimeofday is declared even after undefining macros. */
#undef HAVE_RAW_DECL_GETTIMEOFDAY

/* Define to 1 if getusershell is declared even after undefining macros. */
#undef HAVE_RAW_DECL_GETUSERSHELL

/* Define to 1 if grantpt is declared even after undefining macros. */
#undef HAVE_RAW_DECL_GRANTPT

/* Define to 1 if group_member is declared even after undefining macros. */
#undef HAVE_RAW_DECL_GROUP_MEMBER

/* Define to 1 if hypotf is declared even after undefining macros. */
#undef HAVE_RAW_DECL_HYPOTF

/* Define to 1 if hypotl is declared even after undefining macros. */
#undef HAVE_RAW_DECL_HYPOTL

/* Define to 1 if ilogb is declared even after undefining macros. */
#undef HAVE_RAW_DECL_ILOGB

/* Define to 1 if ilogbf is declared even after undefining macros. */
#undef HAVE_RAW_DECL_ILOGBF

/* Define to 1 if ilogbl is declared even after undefining macros. */
#undef HAVE_RAW_DECL_ILOGBL

/* Define to 1 if imaxabs is declared even after undefining macros. */
#undef HAVE_RAW_DECL_IMAXABS

/* Define to 1 if imaxdiv is declared even after undefining macros. */
#undef HAVE_RAW_DECL_IMAXDIV

/* Define to 1 if inet_ntop is declared even after undefining macros. */
#undef HAVE_RAW_DECL_INET_NTOP

/* Define to 1 if inet_pton is declared even after undefining macros. */
#undef HAVE_RAW_DECL_INET_PTON

/* Define to 1 if initstate is declared even after undefining macros. */
#undef HAVE_RAW_DECL_INITSTATE

/* Define to 1 if initstate_r is declared even after undefining macros. */
#undef HAVE_RAW_DECL_INITSTATE_R

/* Define to 1 if ioctl is declared even after undefining macros. */
#undef HAVE_RAW_DECL_IOCTL

/* Define to 1 if isatty is declared even after undefining macros. */
#undef HAVE_RAW_DECL_ISATTY

/* Define to 1 if isblank is declared even after undefining macros. */
#undef HAVE_RAW_DECL_ISBLANK

/* Define to 1 if iswctype is declared even after undefining macros. */
#undef HAVE_RAW_DECL_ISWCTYPE

/* Define to 1 if lchmod is declared even after undefining macros. */
#undef HAVE_RAW_DECL_LCHMOD

/* Define to 1 if lchown is declared even after undefining macros. */
#undef HAVE_RAW_DECL_LCHOWN

/* Define to 1 if ldexpf is declared even after undefining macros. */
#undef HAVE_RAW_DECL_LDEXPF

/* Define to 1 if ldexpl is declared even after undefining macros. */
#undef HAVE_RAW_DECL_LDEXPL

/* Define to 1 if link is declared even after undefining macros. */
#undef HAVE_RAW_DECL_LINK

/* Define to 1 if linkat is declared even after undefining macros. */
#undef HAVE_RAW_DECL_LINKAT

/* Define to 1 if listen is declared even after undefining macros. */
#undef HAVE_RAW_DECL_LISTEN

/* Define to 1 if log is declared even after undefining macros. */
#undef HAVE_RAW_DECL_LOG

/* Define to 1 if log10 is declared even after undefining macros. */
#undef HAVE_RAW_DECL_LOG10

/* Define to 1 if log10f is declared even after undefining macros. */
#undef HAVE_RAW_DECL_LOG10F

/* Define to 1 if log10l is declared even after undefining macros. */
#undef HAVE_RAW_DECL_LOG10L

/* Define to 1 if log1p is declared even after undefining macros. */
#undef HAVE_RAW_DECL_LOG1P

/* Define to 1 if log1pf is declared even after undefining macros. */
#undef HAVE_RAW_DECL_LOG1PF

/* Define to 1 if log1pl is declared even after undefining macros. */
#undef HAVE_RAW_DECL_LOG1PL

/* Define to 1 if log2 is declared even after undefining macros. */
#undef HAVE_RAW_DECL_LOG2

/* Define to 1 if log2f is declared even after undefining macros. */
#undef HAVE_RAW_DECL_LOG2F

/* Define to 1 if log2l is declared even after undefining macros. */
#undef HAVE_RAW_DECL_LOG2L

/* Define to 1 if logb is declared even after undefining macros. */
#undef HAVE_RAW_DECL_LOGB

/* Define to 1 if logbf is declared even after undefining macros. */
#undef HAVE_RAW_DECL_LOGBF

/* Define to 1 if logbl is declared even after undefining macros. */
#undef HAVE_RAW_DECL_LOGBL

/* Define to 1 if logf is declared even after undefining macros. */
#undef HAVE_RAW_DECL_LOGF

/* Define to 1 if logl is declared even after undefining macros. */
#undef HAVE_RAW_DECL_LOGL

/* Define to 1 if lseek is declared even after undefining macros. */
#undef HAVE_RAW_DECL_LSEEK

/* Define to 1 if lstat is declared even after undefining macros. */
#undef HAVE_RAW_DECL_LSTAT

/* Define to 1 if mbrlen is declared even after undefining macros. */
#undef HAVE_RAW_DECL_MBRLEN

/* Define to 1 if mbrtowc is declared even after undefining macros. */
#undef HAVE_RAW_DECL_MBRTOWC

/* Define to 1 if mbsinit is declared even after undefining macros. */
#undef HAVE_RAW_DECL_MBSINIT

/* Define to 1 if mbsnrtowcs is declared even after undefining macros. */
#undef HAVE_RAW_DECL_MBSNRTOWCS

/* Define to 1 if mbsrtowcs is declared even after undefining macros. */
#undef HAVE_RAW_DECL_MBSRTOWCS

/* Define to 1 if memmem is declared even after undefining macros. */
#undef HAVE_RAW_DECL_MEMMEM

/* Define to 1 if mempcpy is declared even after undefining macros. */
#undef HAVE_RAW_DECL_MEMPCPY

/* Define to 1 if memrchr is declared even after undefining macros. */
#undef HAVE_RAW_DECL_MEMRCHR

/* Define to 1 if mkdirat is declared even after undefining macros. */
#undef HAVE_RAW_DECL_MKDIRAT

/* Define to 1 if mkdtemp is declared even after undefining macros. */
#undef HAVE_RAW_DECL_MKDTEMP

/* Define to 1 if mkfifo is declared even after undefining macros. */
#undef HAVE_RAW_DECL_MKFIFO

/* Define to 1 if mkfifoat is declared even after undefining macros. */
#undef HAVE_RAW_DECL_MKFIFOAT

/* Define to 1 if mknod is declared even after undefining macros. */
#undef HAVE_RAW_DECL_MKNOD

/* Define to 1 if mknodat is declared even after undefining macros. */
#undef HAVE_RAW_DECL_MKNODAT

/* Define to 1 if mkostemp is declared even after undefining macros. */
#undef HAVE_RAW_DECL_MKOSTEMP

/* Define to 1 if mkostemps is declared even after undefining macros. */
#undef HAVE_RAW_DECL_MKOSTEMPS

/* Define to 1 if mkstemp is declared even after undefining macros. */
#undef HAVE_RAW_DECL_MKSTEMP

/* Define to 1 if mkstemps is declared even after undefining macros. */
#undef HAVE_RAW_DECL_MKSTEMPS

/* Define to 1 if modf is declared even after undefining macros. */
#undef HAVE_RAW_DECL_MODF

/* Define to 1 if modff is declared even after undefining macros. */
#undef HAVE_RAW_DECL_MODFF

/* Define to 1 if modfl is declared even after undefining macros. */
#undef HAVE_RAW_DECL_MODFL

/* Define to 1 if nl_langinfo is declared even after undefining macros. */
#undef HAVE_RAW_DECL_NL_LANGINFO

/* Define to 1 if openat is declared even after undefining macros. */
#undef HAVE_RAW_DECL_OPENAT

/* Define to 1 if opendir is declared even after undefining macros. */
#undef HAVE_RAW_DECL_OPENDIR

/* Define to 1 if openpty is declared even after undefining macros. */
#undef HAVE_RAW_DECL_OPENPTY

/* Define to 1 if pclose is declared even after undefining macros. */
#undef HAVE_RAW_DECL_PCLOSE

/* Define to 1 if pipe is declared even after undefining macros. */
#undef HAVE_RAW_DECL_PIPE

/* Define to 1 if pipe2 is declared even after undefining macros. */
#undef HAVE_RAW_DECL_PIPE2

/* Define to 1 if poll is declared even after undefining macros. */
#undef HAVE_RAW_DECL_POLL

/* Define to 1 if popen is declared even after undefining macros. */
#undef HAVE_RAW_DECL_POPEN

/* Define to 1 if posix_openpt is declared even after undefining macros. */
#undef HAVE_RAW_DECL_POSIX_OPENPT

/* Define to 1 if posix_spawn is declared even after undefining macros. */
#undef HAVE_RAW_DECL_POSIX_SPAWN

/* Define to 1 if posix_spawnattr_destroy is declared even after undefining
   macros. */
#undef HAVE_RAW_DECL_POSIX_SPAWNATTR_DESTROY

/* Define to 1 if posix_spawnattr_getflags is declared even after undefining
   macros. */
#undef HAVE_RAW_DECL_POSIX_SPAWNATTR_GETFLAGS

/* Define to 1 if posix_spawnattr_getpgroup is declared even after undefining
   macros. */
#undef HAVE_RAW_DECL_POSIX_SPAWNATTR_GETPGROUP

/* Define to 1 if posix_spawnattr_getschedparam is declared even after
   undefining macros. */
#undef HAVE_RAW_DECL_POSIX_SPAWNATTR_GETSCHEDPARAM

/* Define to 1 if posix_spawnattr_getschedpolicy is declared even after
   undefining macros. */
#undef HAVE_RAW_DECL_POSIX_SPAWNATTR_GETSCHEDPOLICY

/* Define to 1 if posix_spawnattr_getsigdefault is declared even after
   undefining macros. */
#undef HAVE_RAW_DECL_POSIX_SPAWNATTR_GETSIGDEFAULT

/* Define to 1 if posix_spawnattr_getsigmask is declared even after undefining
   macros. */
#undef HAVE_RAW_DECL_POSIX_SPAWNATTR_GETSIGMASK

/* Define to 1 if posix_spawnattr_init is declared even after undefining
   macros. */
#undef HAVE_RAW_DECL_POSIX_SPAWNATTR_INIT

/* Define to 1 if posix_spawnattr_setflags is declared even after undefining
   macros. */
#undef HAVE_RAW_DECL_POSIX_SPAWNATTR_SETFLAGS

/* Define to 1 if posix_spawnattr_setpgroup is declared even after undefining
   macros. */
#undef HAVE_RAW_DECL_POSIX_SPAWNATTR_SETPGROUP

/* Define to 1 if posix_spawnattr_setschedparam is declared even after
   undefining macros. */
#undef HAVE_RAW_DECL_POSIX_SPAWNATTR_SETSCHEDPARAM

/* Define to 1 if posix_spawnattr_setschedpolicy is declared even after
   undefining macros. */
#undef HAVE_RAW_DECL_POSIX_SPAWNATTR_SETSCHEDPOLICY

/* Define to 1 if posix_spawnattr_setsigdefault is declared even after
   undefining macros. */
#undef HAVE_RAW_DECL_POSIX_SPAWNATTR_SETSIGDEFAULT

/* Define to 1 if posix_spawnattr_setsigmask is declared even after undefining
   macros. */
#undef HAVE_RAW_DECL_POSIX_SPAWNATTR_SETSIGMASK

/* Define to 1 if posix_spawnp is declared even after undefining macros. */
#undef HAVE_RAW_DECL_POSIX_SPAWNP

/* Define to 1 if posix_spawn_file_actions_addclose is declared even after
   undefining macros. */
#undef HAVE_RAW_DECL_POSIX_SPAWN_FILE_ACTIONS_ADDCLOSE

/* Define to 1 if posix_spawn_file_actions_adddup2 is declared even after
   undefining macros. */
#undef HAVE_RAW_DECL_POSIX_SPAWN_FILE_ACTIONS_ADDDUP2

/* Define to 1 if posix_spawn_file_actions_addopen is declared even after
   undefining macros. */
#undef HAVE_RAW_DECL_POSIX_SPAWN_FILE_ACTIONS_ADDOPEN

/* Define to 1 if posix_spawn_file_actions_destroy is declared even after
   undefining macros. */
#undef HAVE_RAW_DECL_POSIX_SPAWN_FILE_ACTIONS_DESTROY

/* Define to 1 if posix_spawn_file_actions_init is declared even after
   undefining macros. */
#undef HAVE_RAW_DECL_POSIX_SPAWN_FILE_ACTIONS_INIT

/* Define to 1 if powf is declared even after undefining macros. */
#undef HAVE_RAW_DECL_POWF

/* Define to 1 if pread is declared even after undefining macros. */
#undef HAVE_RAW_DECL_PREAD

/* Define to 1 if pselect is declared even after undefining macros. */
#undef HAVE_RAW_DECL_PSELECT

/* Define to 1 if pthread_sigmask is declared even after undefining macros. */
#undef HAVE_RAW_DECL_PTHREAD_SIGMASK

/* Define to 1 if ptsname is declared even after undefining macros. */
#undef HAVE_RAW_DECL_PTSNAME

/* Define to 1 if ptsname_r is declared even after undefining macros. */
#undef HAVE_RAW_DECL_PTSNAME_R

/* Define to 1 if pwrite is declared even after undefining macros. */
#undef HAVE_RAW_DECL_PWRITE

/* Define to 1 if random is declared even after undefining macros. */
#undef HAVE_RAW_DECL_RANDOM

/* Define to 1 if random_r is declared even after undefining macros. */
#undef HAVE_RAW_DECL_RANDOM_R

/* Define to 1 if rawmemchr is declared even after undefining macros. */
#undef HAVE_RAW_DECL_RAWMEMCHR

/* Define to 1 if readdir is declared even after undefining macros. */
#undef HAVE_RAW_DECL_READDIR

/* Define to 1 if readlink is declared even after undefining macros. */
#undef HAVE_RAW_DECL_READLINK

/* Define to 1 if readlinkat is declared even after undefining macros. */
#undef HAVE_RAW_DECL_READLINKAT

/* Define to 1 if realpath is declared even after undefining macros. */
#undef HAVE_RAW_DECL_REALPATH

/* Define to 1 if recv is declared even after undefining macros. */
#undef HAVE_RAW_DECL_RECV

/* Define to 1 if recvfrom is declared even after undefining macros. */
#undef HAVE_RAW_DECL_RECVFROM

/* Define to 1 if remainder is declared even after undefining macros. */
#undef HAVE_RAW_DECL_REMAINDER

/* Define to 1 if remainderf is declared even after undefining macros. */
#undef HAVE_RAW_DECL_REMAINDERF

/* Define to 1 if remainderl is declared even after undefining macros. */
#undef HAVE_RAW_DECL_REMAINDERL

/* Define to 1 if renameat is declared even after undefining macros. */
#undef HAVE_RAW_DECL_RENAMEAT

/* Define to 1 if rewinddir is declared even after undefining macros. */
#undef HAVE_RAW_DECL_REWINDDIR

/* Define to 1 if rint is declared even after undefining macros. */
#undef HAVE_RAW_DECL_RINT

/* Define to 1 if rintf is declared even after undefining macros. */
#undef HAVE_RAW_DECL_RINTF

/* Define to 1 if rintl is declared even after undefining macros. */
#undef HAVE_RAW_DECL_RINTL

/* Define to 1 if rmdir is declared even after undefining macros. */
#undef HAVE_RAW_DECL_RMDIR

/* Define to 1 if round is declared even after undefining macros. */
#undef HAVE_RAW_DECL_ROUND

/* Define to 1 if roundf is declared even after undefining macros. */
#undef HAVE_RAW_DECL_ROUNDF

/* Define to 1 if roundl is declared even after undefining macros. */
#undef HAVE_RAW_DECL_ROUNDL

/* Define to 1 if rpmatch is declared even after undefining macros. */
#undef HAVE_RAW_DECL_RPMATCH

/* Define to 1 if scandir is declared even after undefining macros. */
#undef HAVE_RAW_DECL_SCANDIR

/* Define to 1 if select is declared even after undefining macros. */
#undef HAVE_RAW_DECL_SELECT

/* Define to 1 if send is declared even after undefining macros. */
#undef HAVE_RAW_DECL_SEND

/* Define to 1 if sendto is declared even after undefining macros. */
#undef HAVE_RAW_DECL_SENDTO

/* Define to 1 if setenv is declared even after undefining macros. */
#undef HAVE_RAW_DECL_SETENV

/* Define to 1 if sethostname is declared even after undefining macros. */
#undef HAVE_RAW_DECL_SETHOSTNAME

/* Define to 1 if setlocale is declared even after undefining macros. */
#undef HAVE_RAW_DECL_SETLOCALE

/* Define to 1 if setsockopt is declared even after undefining macros. */
#undef HAVE_RAW_DECL_SETSOCKOPT

/* Define to 1 if setstate is declared even after undefining macros. */
#undef HAVE_RAW_DECL_SETSTATE

/* Define to 1 if setstate_r is declared even after undefining macros. */
#undef HAVE_RAW_DECL_SETSTATE_R

/* Define to 1 if setusershell is declared even after undefining macros. */
#undef HAVE_RAW_DECL_SETUSERSHELL

/* Define to 1 if shutdown is declared even after undefining macros. */
#undef HAVE_RAW_DECL_SHUTDOWN

/* Define to 1 if sigaction is declared even after undefining macros. */
#undef HAVE_RAW_DECL_SIGACTION

/* Define to 1 if sigaddset is declared even after undefining macros. */
#undef HAVE_RAW_DECL_SIGADDSET

/* Define to 1 if sigdelset is declared even after undefining macros. */
#undef HAVE_RAW_DECL_SIGDELSET

/* Define to 1 if sigemptyset is declared even after undefining macros. */
#undef HAVE_RAW_DECL_SIGEMPTYSET

/* Define to 1 if sigfillset is declared even after undefining macros. */
#undef HAVE_RAW_DECL_SIGFILLSET

/* Define to 1 if sigismember is declared even after undefining macros. */
#undef HAVE_RAW_DECL_SIGISMEMBER

/* Define to 1 if sigpending is declared even after undefining macros. */
#undef HAVE_RAW_DECL_SIGPENDING

/* Define to 1 if sigprocmask is declared even after undefining macros. */
#undef HAVE_RAW_DECL_SIGPROCMASK

/* Define to 1 if sinf is declared even after undefining macros. */
#undef HAVE_RAW_DECL_SINF

/* Define to 1 if sinhf is declared even after undefining macros. */
#undef HAVE_RAW_DECL_SINHF

/* Define to 1 if sinl is declared even after undefining macros. */
#undef HAVE_RAW_DECL_SINL

/* Define to 1 if sleep is declared even after undefining macros. */
#undef HAVE_RAW_DECL_SLEEP

/* Define to 1 if snprintf is declared even after undefining macros. */
#undef HAVE_RAW_DECL_SNPRINTF

/* Define to 1 if socket is declared even after undefining macros. */
#undef HAVE_RAW_DECL_SOCKET

/* Define to 1 if sqrtf is declared even after undefining macros. */
#undef HAVE_RAW_DECL_SQRTF

/* Define to 1 if sqrtl is declared even after undefining macros. */
#undef HAVE_RAW_DECL_SQRTL

/* Define to 1 if srandom is declared even after undefining macros. */
#undef HAVE_RAW_DECL_SRANDOM

/* Define to 1 if srandom_r is declared even after undefining macros. */
#undef HAVE_RAW_DECL_SRANDOM_R

/* Define to 1 if stat is declared even after undefining macros. */
#undef HAVE_RAW_DECL_STAT

/* Define to 1 if stpcpy is declared even after undefining macros. */
#undef HAVE_RAW_DECL_STPCPY

/* Define to 1 if stpncpy is declared even after undefining macros. */
#undef HAVE_RAW_DECL_STPNCPY

/* Define to 1 if strcasecmp is declared even after undefining macros. */
#undef HAVE_RAW_DECL_STRCASECMP

/* Define to 1 if strcasestr is declared even after undefining macros. */
#undef HAVE_RAW_DECL_STRCASESTR

/* Define to 1 if strchrnul is declared even after undefining macros. */
#undef HAVE_RAW_DECL_STRCHRNUL

/* Define to 1 if strdup is declared even after undefining macros. */
#undef HAVE_RAW_DECL_STRDUP

/* Define to 1 if strerror_r is declared even after undefining macros. */
#undef HAVE_RAW_DECL_STRERROR_R

/* Define to 1 if strncasecmp is declared even after undefining macros. */
#undef HAVE_RAW_DECL_STRNCASECMP

/* Define to 1 if strncat is declared even after undefining macros. */
#undef HAVE_RAW_DECL_STRNCAT

/* Define to 1 if strndup is declared even after undefining macros. */
#undef HAVE_RAW_DECL_STRNDUP

/* Define to 1 if strnlen is declared even after undefining macros. */
#undef HAVE_RAW_DECL_STRNLEN

/* Define to 1 if strpbrk is declared even after undefining macros. */
#undef HAVE_RAW_DECL_STRPBRK

/* Define to 1 if strsep is declared even after undefining macros. */
#undef HAVE_RAW_DECL_STRSEP

/* Define to 1 if strsignal is declared even after undefining macros. */
#undef HAVE_RAW_DECL_STRSIGNAL

/* Define to 1 if strtod is declared even after undefining macros. */
#undef HAVE_RAW_DECL_STRTOD

/* Define to 1 if strtoimax is declared even after undefining macros. */
#undef HAVE_RAW_DECL_STRTOIMAX

/* Define to 1 if strtok_r is declared even after undefining macros. */
#undef HAVE_RAW_DECL_STRTOK_R

/* Define to 1 if strtoll is declared even after undefining macros. */
#undef HAVE_RAW_DECL_STRTOLL

/* Define to 1 if strtoull is declared even after undefining macros. */
#undef HAVE_RAW_DECL_STRTOULL

/* Define to 1 if strtoumax is declared even after undefining macros. */
#undef HAVE_RAW_DECL_STRTOUMAX

/* Define to 1 if strverscmp is declared even after undefining macros. */
#undef HAVE_RAW_DECL_STRVERSCMP

/* Define to 1 if symlink is declared even after undefining macros. */
#undef HAVE_RAW_DECL_SYMLINK

/* Define to 1 if symlinkat is declared even after undefining macros. */
#undef HAVE_RAW_DECL_SYMLINKAT

/* Define to 1 if tanf is declared even after undefining macros. */
#undef HAVE_RAW_DECL_TANF

/* Define to 1 if tanhf is declared even after undefining macros. */
#undef HAVE_RAW_DECL_TANHF

/* Define to 1 if tanl is declared even after undefining macros. */
#undef HAVE_RAW_DECL_TANL

/* Define to 1 if tcgetsid is declared even after undefining macros. */
#undef HAVE_RAW_DECL_TCGETSID

/* Define to 1 if tdelete is declared even after undefining macros. */
#undef HAVE_RAW_DECL_TDELETE

/* Define to 1 if tfind is declared even after undefining macros. */
#undef HAVE_RAW_DECL_TFIND

/* Define to 1 if times is declared even after undefining macros. */
#undef HAVE_RAW_DECL_TIMES

/* Define to 1 if tmpfile is declared even after undefining macros. */
#undef HAVE_RAW_DECL_TMPFILE

/* Define to 1 if towctrans is declared even after undefining macros. */
#undef HAVE_RAW_DECL_TOWCTRANS

/* Define to 1 if trunc is declared even after undefining macros. */
#undef HAVE_RAW_DECL_TRUNC

/* Define to 1 if truncf is declared even after undefining macros. */
#undef HAVE_RAW_DECL_TRUNCF

/* Define to 1 if truncl is declared even after undefining macros. */
#undef HAVE_RAW_DECL_TRUNCL

/* Define to 1 if tsearch is declared even after undefining macros. */
#undef HAVE_RAW_DECL_TSEARCH

/* Define to 1 if ttyname_r is declared even after undefining macros. */
#undef HAVE_RAW_DECL_TTYNAME_R

/* Define to 1 if twalk is declared even after undefining macros. */
#undef HAVE_RAW_DECL_TWALK

/* Define to 1 if uname is declared even after undefining macros. */
#undef HAVE_RAW_DECL_UNAME

/* Define to 1 if unlink is declared even after undefining macros. */
#undef HAVE_RAW_DECL_UNLINK

/* Define to 1 if unlinkat is declared even after undefining macros. */
#undef HAVE_RAW_DECL_UNLINKAT

/* Define to 1 if unlockpt is declared even after undefining macros. */
#undef HAVE_RAW_DECL_UNLOCKPT

/* Define to 1 if unsetenv is declared even after undefining macros. */
#undef HAVE_RAW_DECL_UNSETENV

/* Define to 1 if usleep is declared even after undefining macros. */
#undef HAVE_RAW_DECL_USLEEP

/* Define to 1 if utimensat is declared even after undefining macros. */
#undef HAVE_RAW_DECL_UTIMENSAT

/* Define to 1 if vdprintf is declared even after undefining macros. */
#undef HAVE_RAW_DECL_VDPRINTF

/* Define to 1 if vsnprintf is declared even after undefining macros. */
#undef HAVE_RAW_DECL_VSNPRINTF

/* Define to 1 if waitpid is declared even after undefining macros. */
#undef HAVE_RAW_DECL_WAITPID

/* Define to 1 if wcpcpy is declared even after undefining macros. */
#undef HAVE_RAW_DECL_WCPCPY

/* Define to 1 if wcpncpy is declared even after undefining macros. */
#undef HAVE_RAW_DECL_WCPNCPY

/* Define to 1 if wcrtomb is declared even after undefining macros. */
#undef HAVE_RAW_DECL_WCRTOMB

/* Define to 1 if wcscasecmp is declared even after undefining macros. */
#undef HAVE_RAW_DECL_WCSCASECMP

/* Define to 1 if wcscat is declared even after undefining macros. */
#undef HAVE_RAW_DECL_WCSCAT

/* Define to 1 if wcschr is declared even after undefining macros. */
#undef HAVE_RAW_DECL_WCSCHR

/* Define to 1 if wcscmp is declared even after undefining macros. */
#undef HAVE_RAW_DECL_WCSCMP

/* Define to 1 if wcscoll is declared even after undefining macros. */
#undef HAVE_RAW_DECL_WCSCOLL

/* Define to 1 if wcscpy is declared even after undefining macros. */
#undef HAVE_RAW_DECL_WCSCPY

/* Define to 1 if wcscspn is declared even after undefining macros. */
#undef HAVE_RAW_DECL_WCSCSPN

/* Define to 1 if wcsdup is declared even after undefining macros. */
#undef HAVE_RAW_DECL_WCSDUP

/* Define to 1 if wcslen is declared even after undefining macros. */
#undef HAVE_RAW_DECL_WCSLEN

/* Define to 1 if wcsncasecmp is declared even after undefining macros. */
#undef HAVE_RAW_DECL_WCSNCASECMP

/* Define to 1 if wcsncat is declared even after undefining macros. */
#undef HAVE_RAW_DECL_WCSNCAT

/* Define to 1 if wcsncmp is declared even after undefining macros. */
#undef HAVE_RAW_DECL_WCSNCMP

/* Define to 1 if wcsncpy is declared even after undefining macros. */
#undef HAVE_RAW_DECL_WCSNCPY

/* Define to 1 if wcsnlen is declared even after undefining macros. */
#undef HAVE_RAW_DECL_WCSNLEN

/* Define to 1 if wcsnrtombs is declared even after undefining macros. */
#undef HAVE_RAW_DECL_WCSNRTOMBS

/* Define to 1 if wcspbrk is declared even after undefining macros. */
#undef HAVE_RAW_DECL_WCSPBRK

/* Define to 1 if wcsrchr is declared even after undefining macros. */
#undef HAVE_RAW_DECL_WCSRCHR

/* Define to 1 if wcsrtombs is declared even after undefining macros. */
#undef HAVE_RAW_DECL_WCSRTOMBS

/* Define to 1 if wcsspn is declared even after undefining macros. */
#undef HAVE_RAW_DECL_WCSSPN

/* Define to 1 if wcsstr is declared even after undefining macros. */
#undef HAVE_RAW_DECL_WCSSTR

/* Define to 1 if wcstok is declared even after undefining macros. */
#undef HAVE_RAW_DECL_WCSTOK

/* Define to 1 if wcswidth is declared even after undefining macros. */
#undef HAVE_RAW_DECL_WCSWIDTH

/* Define to 1 if wcsxfrm is declared even after undefining macros. */
#undef HAVE_RAW_DECL_WCSXFRM

/* Define to 1 if wctob is declared even after undefining macros. */
#undef HAVE_RAW_DECL_WCTOB

/* Define to 1 if wctrans is declared even after undefining macros. */
#undef HAVE_RAW_DECL_WCTRANS

/* Define to 1 if wctype is declared even after undefining macros. */
#undef HAVE_RAW_DECL_WCTYPE

/* Define to 1 if wcwidth is declared even after undefining macros. */
#undef HAVE_RAW_DECL_WCWIDTH

/* Define to 1 if wmemchr is declared even after undefining macros. */
#undef HAVE_RAW_DECL_WMEMCHR

/* Define to 1 if wmemcmp is declared even after undefining macros. */
#undef HAVE_RAW_DECL_WMEMCMP

/* Define to 1 if wmemcpy is declared even after undefining macros. */
#undef HAVE_RAW_DECL_WMEMCPY

/* Define to 1 if wmemmove is declared even after undefining macros. */
#undef HAVE_RAW_DECL_WMEMMOVE

/* Define to 1 if wmemset is declared even after undefining macros. */
#undef HAVE_RAW_DECL_WMEMSET

/* Define to 1 if _Exit is declared even after undefining macros. */
#undef HAVE_RAW_DECL__EXIT

/* Define to 1 if you have the `readdir' function. */
#undef HAVE_READDIR

/* Define if you have the readline library. */
#undef HAVE_READLINE

/* Define to 1 if you have the <readline/history.h> header file. */
#undef HAVE_READLINE_HISTORY_H

/* Define to 1 if you have the <readline/readline.h> header file. */
#undef HAVE_READLINE_READLINE_H

/* Define to 1 if you have the 'readlink' function. */
#undef HAVE_READLINK

/* Define to 1 if you have the 'readlinkat' function. */
#undef HAVE_READLINKAT

/* Define to 1 if your system has a GNU libc compatible 'realloc' function,
   and to 0 otherwise. */
#undef HAVE_REALLOC_GNU

/* Define if the 'realloc' function is POSIX compliant. */
#undef HAVE_REALLOC_POSIX

/* Define to 1 if you have the 'realpath' function. */
#undef HAVE_REALPATH

/* Define to 1 if you have the 'recvmsg' function. */
#undef HAVE_RECVMSG

/* Define to 1 if the remainder() function is available in libc or libm. */
#undef HAVE_REMAINDER

/* Define to 1 if you have the 'renameat' function. */
#undef HAVE_RENAMEAT

/* Define to 1 if you have the `revoke' function. */
#undef HAVE_REVOKE

/* Define to 1 if you have the `rewinddir' function. */
#undef HAVE_REWINDDIR

/* Define to 1 if you have the `rpmatch' function. */
#undef HAVE_RPMATCH

/* Define to 1 if you have run the test for working tzset. */
#undef HAVE_RUN_TZSET_TEST

/* Define to 1 if 'long double' and 'double' have the same representation. */
#undef HAVE_SAME_LONG_DOUBLE_AS_DOUBLE

/* Define to 1 if the system has the type `sa_family_t'. */
#undef HAVE_SA_FAMILY_T

/* Define to 1 if you have the `scandir' function. */
#undef HAVE_SCANDIR

/* Define to 1 if you have the `sched_getaffinity' function. */
#undef HAVE_SCHED_GETAFFINITY

/* Define to 1 if sched_getaffinity has a glibc compatible declaration. */
#undef HAVE_SCHED_GETAFFINITY_LIKE_GLIBC

/* Define to 1 if you have the `sched_getaffinity_np' function. */
#undef HAVE_SCHED_GETAFFINITY_NP

/* Define to 1 if you have the <sched.h> header file. */
#undef HAVE_SCHED_H

/* Define to 1 if you have the `sched_setparam' function. */
#undef HAVE_SCHED_SETPARAM

/* Define to 1 if you have the `sched_setscheduler' function. */
#undef HAVE_SCHED_SETSCHEDULER

/* Define to 1 if you have the <search.h> header file. */
#undef HAVE_SEARCH_H

/* Define to 1 if you have the 'select' function. */
#undef HAVE_SELECT

/* Define to 1 if you have the <selinux/context.h> header file. */
#undef HAVE_SELINUX_CONTEXT_H

/* Define to 1 if you have the <selinux/flask.h> header file. */
#undef HAVE_SELINUX_FLASK_H

/* Define to 1 if you have the <selinux/selinux.h> header file. */
#undef HAVE_SELINUX_SELINUX_H

/* Define to 1 if you have the 'sendmsg' function. */
#undef HAVE_SENDMSG

/* Define to 1 if you have the `setegid' function. */
#undef HAVE_SETEGID

/* Define to 1 if you have the 'setenv' function. */
#undef HAVE_SETENV

/* Define to 1 if you have the `seteuid' function. */
#undef HAVE_SETEUID

/* Define to 1 if you have the `sethostname' function. */
#undef HAVE_SETHOSTNAME

/* Define to 1 if you have the `setlocale' function. */
#undef HAVE_SETLOCALE

/* Define to 1 if you have the 'setregid' function. */
#undef HAVE_SETREGID

/* Define to 1 if you have the 'setresgid' function. */
#undef HAVE_SETRESGID

/* Define to 1 if you have the 'setresuid' function. */
#undef HAVE_SETRESUID

/* Define to 1 if you have the 'setreuid' function. */
#undef HAVE_SETREUID

/* Define to 1 if you have the `setrlimit' function. */
#undef HAVE_SETRLIMIT

/* Define to 1 if you have the 'settimeofday' function. */
#undef HAVE_SETTIMEOFDAY

/* Define to 1 if you have the 'shutdown' function. */
#undef HAVE_SHUTDOWN

/* Define to 1 if you have the `sig2str' function. */
#undef HAVE_SIG2STR

/* Define to 1 if you have the 'sigaction' function. */
#undef HAVE_SIGACTION

/* Define to 1 if you have the 'sigaltstack' function. */
#undef HAVE_SIGALTSTACK

/* Define to 1 if the system has the type `siginfo_t'. */
#undef HAVE_SIGINFO_T

/* Define to 1 if you have the 'siginterrupt' function. */
#undef HAVE_SIGINTERRUPT

/* Define to 1 if 'sig_atomic_t' is a signed integer type. */
#undef HAVE_SIGNED_SIG_ATOMIC_T

/* Define to 1 if 'wchar_t' is a signed integer type. */
#undef HAVE_SIGNED_WCHAR_T

/* Define to 1 if 'wint_t' is a signed integer type. */
#undef HAVE_SIGNED_WINT_T

/* Define to 1 if the system has the type `sigset_t'. */
#undef HAVE_SIGSET_T

/* Define to 1 if the system has the type `sig_atomic_t'. */
#undef HAVE_SIG_ATOMIC_T

/* Define to 1 if you have the `sinf' function. */
#undef HAVE_SINF

/* Define to 1 if you have the `sinhf' function. */
#undef HAVE_SINHF

/* Define to 1 if you have the 'sleep' function. */
#undef HAVE_SLEEP

/* Define to 1 if you have the `snprintf' function. */
#undef HAVE_SNPRINTF

/* Define if the return value of the snprintf function is the number of of
   bytes (excluding the terminating NUL) that would have been produced if the
   buffer had been large enough. */
#undef HAVE_SNPRINTF_RETVAL_C99

/* Define to 1 if you have the 'socketpair' function. */
#undef HAVE_SOCKETPAIR

/* Define to 1 if you have the <spawn.h> header file. */
#undef HAVE_SPAWN_H

/* Define to 1 if you have the `sqrtf' function. */
#undef HAVE_SQRTF

/* Define to 1 if extending the stack slightly past the limit causes a SIGSEGV
   which can be handled on an alternate stack established with sigaltstack. */
#undef HAVE_STACK_OVERFLOW_HANDLING

/* Define to 1 if the system has the type `stack_t'. */
#undef HAVE_STACK_T

/* Define to 1 if you have the `statacl' function. */
#undef HAVE_STATACL

/* Define to 1 if you have the <stdint.h> header file. */
#undef HAVE_STDINT_H

/* Define if <stdint.h> exists, doesn't clash with <sys/types.h>, and declares
   uintmax_t. */
#undef HAVE_STDINT_H_WITH_UINTMAX

/* Define to 1 if you have the <stdio_ext.h> header file. */
#undef HAVE_STDIO_EXT_H

/* Define to 1 if you have the <stdlib.h> header file. */
#undef HAVE_STDLIB_H

/* Define to 1 if you have the 'stime' function. */
#undef HAVE_STIME

/* Define to 1 if you have the 'stpcpy' function. */
#undef HAVE_STPCPY

/* Define if you have the stpncpy() function and it works. */
#undef HAVE_STPNCPY

/* Define to 1 if you have the `strcasecmp' function. */
#undef HAVE_STRCASECMP

/* Define to 1 if you have the `strcasestr' function. */
#undef HAVE_STRCASESTR

/* Define to 1 if you have the `strchrnul' function. */
#undef HAVE_STRCHRNUL

/* Define to 1 if you have the `strcspn' function. */
#undef HAVE_STRCSPN

/* Define to 1 if you have the 'strdup' function. */
#undef HAVE_STRDUP

/* Define to 1 if you have the 'strerror_r' function. */
#undef HAVE_STRERROR_R

/* Define to 1 if you have the <strings.h> header file. */
#undef HAVE_STRINGS_H

/* Define to 1 if you have the <string.h> header file. */
#undef HAVE_STRING_H

/* Define to 1 if you have the `strncasecmp' function. */
#undef HAVE_STRNCASECMP

/* Define to 1 if you have the 'strndup' function. */
#undef HAVE_STRNDUP

/* Define to 1 if you have the `strnlen' function. */
#undef HAVE_STRNLEN

/* Define to 1 if you have the `strpbrk' function. */
#undef HAVE_STRPBRK

/* Define to 1 if you have the 'strptime' function. */
#undef HAVE_STRPTIME

/* Define to 1 if you have the `strsep' function. */
#undef HAVE_STRSEP

/* Define to 1 if you have the `strsignal' function. */
#undef HAVE_STRSIGNAL

/* Define to 1 if you have the `strtod_l' function. */
#undef HAVE_STRTOD_L

/* Define to 1 if you have the 'strtof' function. */
#undef HAVE_STRTOF

/* Define to 1 if you have the 'strtoimax' function. */
#undef HAVE_STRTOIMAX

/* Define to 1 if you have the `strtok_r' function. */
#undef HAVE_STRTOK_R

/* Define to 1 if you have the `strtol' function. */
#undef HAVE_STRTOL

/* Define to 1 if you have the `strtold_l' function. */
#undef HAVE_STRTOLD_L

/* Define to 1 if you have the `strtoll' function. */
#undef HAVE_STRTOLL

/* Define to 1 if you have the `strtoul' function. */
#undef HAVE_STRTOUL

/* Define to 1 if you have the `strtoull' function. */
#undef HAVE_STRTOULL

/* Define to 1 if you have the 'strtoumax' function. */
#undef HAVE_STRTOUMAX

/* Define to 1 if the system has the type `struct addrinfo'. */
#undef HAVE_STRUCT_ADDRINFO

/* Define if there is a member named d_type in the struct describing directory
   headers. */
#undef HAVE_STRUCT_DIRENT_D_TYPE

/* Define to 1 if `l_type' is a member of `struct flock'. */
#undef HAVE_STRUCT_FLOCK_L_TYPE

/* Define to 1 if `decimal_point' is a member of `struct lconv'. */
#undef HAVE_STRUCT_LCONV_DECIMAL_POINT

/* Define to 1 if `msg_accrights' is a member of `struct msghdr'. */
#undef HAVE_STRUCT_MSGHDR_MSG_ACCRIGHTS

/* Define to 1 if `n_un.n_name' is a member of `struct nlist'. */
#undef HAVE_STRUCT_NLIST_N_UN_N_NAME

/* Define to 1 if the system has the type `struct random_data'. */
#undef HAVE_STRUCT_RANDOM_DATA

/* Define to 1 if `sa_sigaction' is a member of `struct sigaction'. */
#undef HAVE_STRUCT_SIGACTION_SA_SIGACTION

/* Define to 1 if `sa_len' is a member of `struct sockaddr'. */
#undef HAVE_STRUCT_SOCKADDR_SA_LEN

/* Define to 1 if the system has the type `struct sockaddr_storage'. */
#undef HAVE_STRUCT_SOCKADDR_STORAGE

/* Define to 1 if `ss_family' is a member of `struct sockaddr_storage'. */
#undef HAVE_STRUCT_SOCKADDR_STORAGE_SS_FAMILY

/* Define to 1 if `f_type' is a member of `struct statfs'. */
#undef HAVE_STRUCT_STATFS_F_TYPE

/* Define to 1 if `st_atimensec' is a member of `struct stat'. */
#undef HAVE_STRUCT_STAT_ST_ATIMENSEC

/* Define to 1 if `st_atimespec.tv_nsec' is a member of `struct stat'. */
#undef HAVE_STRUCT_STAT_ST_ATIMESPEC_TV_NSEC

/* Define to 1 if `st_atim.st__tim.tv_nsec' is a member of `struct stat'. */
#undef HAVE_STRUCT_STAT_ST_ATIM_ST__TIM_TV_NSEC

/* Define to 1 if `st_atim.tv_nsec' is a member of `struct stat'. */
#undef HAVE_STRUCT_STAT_ST_ATIM_TV_NSEC

/* Define to 1 if `st_birthtimensec' is a member of `struct stat'. */
#undef HAVE_STRUCT_STAT_ST_BIRTHTIMENSEC

/* Define to 1 if `st_birthtimespec.tv_nsec' is a member of `struct stat'. */
#undef HAVE_STRUCT_STAT_ST_BIRTHTIMESPEC_TV_NSEC

/* Define to 1 if `st_birthtim.tv_nsec' is a member of `struct stat'. */
#undef HAVE_STRUCT_STAT_ST_BIRTHTIM_TV_NSEC

/* Define to 1 if `st_blocks' is a member of `struct stat'. */
#undef HAVE_STRUCT_STAT_ST_BLOCKS

/* Define to 1 if the system has the type `struct tms'. */
#undef HAVE_STRUCT_TMS

/* Define to 1 if `tm_zone' is a member of `struct tm'. */
#undef HAVE_STRUCT_TM_TM_ZONE

/* Define if struct utimbuf is declared -- usually in <utime.h>. Some systems
   have utime.h but don't declare the struct anywhere. */
#undef HAVE_STRUCT_UTIMBUF

/* Define to 1 if `ut_exit' is a member of `struct utmpx'. */
#undef HAVE_STRUCT_UTMPX_UT_EXIT

/* Define to 1 if `ut_exit.e_exit' is a member of `struct utmpx'. */
#undef HAVE_STRUCT_UTMPX_UT_EXIT_E_EXIT

/* Define to 1 if `ut_exit.e_termination' is a member of `struct utmpx'. */
#undef HAVE_STRUCT_UTMPX_UT_EXIT_E_TERMINATION

/* Define to 1 if `ut_exit.ut_exit' is a member of `struct utmpx'. */
#undef HAVE_STRUCT_UTMPX_UT_EXIT_UT_EXIT

/* Define to 1 if `ut_exit.ut_termination' is a member of `struct utmpx'. */
#undef HAVE_STRUCT_UTMPX_UT_EXIT_UT_TERMINATION

/* Define to 1 if `ut_id' is a member of `struct utmpx'. */
#undef HAVE_STRUCT_UTMPX_UT_ID

/* Define to 1 if `ut_name' is a member of `struct utmpx'. */
#undef HAVE_STRUCT_UTMPX_UT_NAME

/* Define to 1 if `ut_pid' is a member of `struct utmpx'. */
#undef HAVE_STRUCT_UTMPX_UT_PID

/* Define to 1 if `ut_type' is a member of `struct utmpx'. */
#undef HAVE_STRUCT_UTMPX_UT_TYPE

/* Define to 1 if `ut_user' is a member of `struct utmpx'. */
#undef HAVE_STRUCT_UTMPX_UT_USER

/* Define to 1 if `ut_exit' is a member of `struct utmp'. */
#undef HAVE_STRUCT_UTMP_UT_EXIT

/* Define to 1 if `ut_exit.e_exit' is a member of `struct utmp'. */
#undef HAVE_STRUCT_UTMP_UT_EXIT_E_EXIT

/* Define to 1 if `ut_exit.e_termination' is a member of `struct utmp'. */
#undef HAVE_STRUCT_UTMP_UT_EXIT_E_TERMINATION

/* Define to 1 if `ut_exit.ut_exit' is a member of `struct utmp'. */
#undef HAVE_STRUCT_UTMP_UT_EXIT_UT_EXIT

/* Define to 1 if `ut_exit.ut_termination' is a member of `struct utmp'. */
#undef HAVE_STRUCT_UTMP_UT_EXIT_UT_TERMINATION

/* Define to 1 if `ut_id' is a member of `struct utmp'. */
#undef HAVE_STRUCT_UTMP_UT_ID

/* Define to 1 if `ut_name' is a member of `struct utmp'. */
#undef HAVE_STRUCT_UTMP_UT_NAME

/* Define to 1 if `ut_pid' is a member of `struct utmp'. */
#undef HAVE_STRUCT_UTMP_UT_PID

/* Define to 1 if `ut_type' is a member of `struct utmp'. */
#undef HAVE_STRUCT_UTMP_UT_TYPE

/* Define to 1 if `ut_user' is a member of `struct utmp'. */
#undef HAVE_STRUCT_UTMP_UT_USER

/* Define to 1 if the system has the type `struct utsname'. */
#undef HAVE_STRUCT_UTSNAME

/* Define to 1 if you have the `strverscmp' function. */
#undef HAVE_STRVERSCMP

/* Define to 1 if your `struct stat' has `st_blocks'. Deprecated, use
   `HAVE_STRUCT_STAT_ST_BLOCKS' instead. */
#undef HAVE_ST_BLOCKS

/* Define if struct stat has an st_dm_mode member. */
#undef HAVE_ST_DM_MODE

/* Define to 1 if you have the 'symlink' function. */
#undef HAVE_SYMLINK

/* Define to 1 if you have the 'symlinkat' function. */
#undef HAVE_SYMLINKAT

/* Define to 1 if you have the `sysctl' function. */
#undef HAVE_SYSCTL

/* Define to 1 if you have the <sysexits.h> header file. */
#undef HAVE_SYSEXITS_H

/* Define to 1 if you have the `sysinfo' function. */
#undef HAVE_SYSINFO

/* Define to 1 if you have the `sysmp' function. */
#undef HAVE_SYSMP

/* Define to 1 if you have the <sys/acl.h> header file. */
#undef HAVE_SYS_ACL_H

/* Define to 1 if you have the <sys/bitypes.h> header file. */
#undef HAVE_SYS_BITYPES_H

/* Define to 1 if you have the <sys/cdefs.h> header file. */
#undef HAVE_SYS_CDEFS_H

/* Define to 1 if you have the <sys/file.h> header file. */
#undef HAVE_SYS_FILE_H

/* Define to 1 if you have the <sys/filio.h> header file. */
#undef HAVE_SYS_FILIO_H

/* Define to 1 if you have the <sys/filsys.h> header file. */
#undef HAVE_SYS_FILSYS_H

/* Define to 1 if you have the <sys/fs/s5param.h> header file. */
#undef HAVE_SYS_FS_S5PARAM_H

/* Define to 1 if you have the <sys/fs_types.h> header file. */
#undef HAVE_SYS_FS_TYPES_H

/* Define to 1 if you have the <sys/inttypes.h> header file. */
#undef HAVE_SYS_INTTYPES_H

/* Define to 1 if you have the <sys/ioctl.h> header file. */
#undef HAVE_SYS_IOCTL_H

/* Define to 1 if you have the <sys/loadavg.h> header file. */
#undef HAVE_SYS_LOADAVG_H

/* Define to 1 if you have the <sys/mman.h> header file. */
#undef HAVE_SYS_MMAN_H

/* Define to 1 if you have the <sys/mount.h> header file. */
#undef HAVE_SYS_MOUNT_H

/* Define to 1 if you have the <sys/param.h> header file. */
#undef HAVE_SYS_PARAM_H

/* Define to 1 if you have the <sys/pstat.h> header file. */
#undef HAVE_SYS_PSTAT_H

/* Define to 1 if you have the <sys/resource.h> header file. */
#undef HAVE_SYS_RESOURCE_H

/* Define to 1 if you have the <sys/select.h> header file. */
#undef HAVE_SYS_SELECT_H

/* Define to 1 if you have the <sys/socket.h> header file. */
#undef HAVE_SYS_SOCKET_H

/* Define to 1 if you have the <sys/statfs.h> header file. */
#undef HAVE_SYS_STATFS_H

/* Define to 1 if you have the <sys/stat.h> header file. */
#undef HAVE_SYS_STAT_H

/* Define to 1 if you have the <sys/sysctl.h> header file. */
#undef HAVE_SYS_SYSCTL_H

/* Define to 1 if you have the <sys/sysinfo.h> header file. */
#undef HAVE_SYS_SYSINFO_H

/* Define to 1 if you have the <sys/sysmp.h> header file. */
#undef HAVE_SYS_SYSMP_H

/* Define to 1 if you have the <sys/systemcfg.h> header file. */
#undef HAVE_SYS_SYSTEMCFG_H

/* Define to 1 if you have the <sys/systeminfo.h> header file. */
#undef HAVE_SYS_SYSTEMINFO_H

/* Define to 1 if you have the <sys/table.h> header file. */
#undef HAVE_SYS_TABLE_H

/* Define to 1 if you have the <sys/timeb.h> header file. */
#undef HAVE_SYS_TIMEB_H

/* Define to 1 if you have the <sys/times.h> header file. */
#undef HAVE_SYS_TIMES_H

/* Define to 1 if you have the <sys/time.h> header file. */
#undef HAVE_SYS_TIME_H

/* Define to 1 if you have the <sys/types.h> header file. */
#undef HAVE_SYS_TYPES_H

/* Define to 1 if you have the <sys/uio.h> header file. */
#undef HAVE_SYS_UIO_H

/* Define to 1 if you have the <sys/utsname.h> header file. */
#undef HAVE_SYS_UTSNAME_H

/* Define to 1 if you have the <sys/vfs.h> header file. */
#undef HAVE_SYS_VFS_H

/* Define to 1 if you have the <sys/wait.h> header file. */
#undef HAVE_SYS_WAIT_H

/* Define to 1 if you have the `table' function. */
#undef HAVE_TABLE

/* Define to 1 if you have the `tanf' function. */
#undef HAVE_TANF

/* Define to 1 if you have the `tanhf' function. */
#undef HAVE_TANHF

/* Define to 1 if you have the 'tcgetattr' function. */
#undef HAVE_TCGETATTR

/* Define to 1 if you have the `tcgetsid' function. */
#undef HAVE_TCGETSID

/* Define to 1 if you have the 'tcsetattr' function. */
#undef HAVE_TCSETATTR

/* Define to 1 if you have the <termios.h> header file. */
#undef HAVE_TERMIOS_H

/* Define to 1 if you have the 'timegm' function. */
#undef HAVE_TIMEGM

/* Define to 1 if you have the `timer_settime' function. */
#undef HAVE_TIMER_SETTIME

/* Define to 1 if you have the 'times' function. */
#undef HAVE_TIMES

/* Define if struct tm has the tm_gmtoff member. */
#undef HAVE_TM_GMTOFF

/* Define to 1 if your `struct tm' has `tm_zone'. Deprecated, use
   `HAVE_STRUCT_TM_TM_ZONE' instead. */
#undef HAVE_TM_ZONE

/* Define to 1 if you have the `towlower' function. */
#undef HAVE_TOWLOWER

/* Define to 1 if you have the `tsearch' function. */
#undef HAVE_TSEARCH

/* Define to 1 if you have the `ttyname' function. */
#undef HAVE_TTYNAME

/* Define to 1 if you have the `ttyname_r' function. */
#undef HAVE_TTYNAME_R

/* Define to 1 if you don't have `tm_zone' but do have the external array
   `tzname'. */
#undef HAVE_TZNAME

/* Define to 1 if you have the 'tzset' function. */
#undef HAVE_TZSET

/* Define to 1 if you have the <ucontext.h> header file. */
#undef HAVE_UCONTEXT_H

/* Define to 1 if you have the `uname' function. */
#undef HAVE_UNAME

/* Define to 1 if you have the <unistd.h> header file. */
#undef HAVE_UNISTD_H

/* Define to 1 if you have the 'unlinkat' function. */
#undef HAVE_UNLINKAT

/* Define to 1 if you have the `unlockpt' function. */
#undef HAVE_UNLOCKPT

/* Define to 1 if you have the `unsetenv' function. */
#undef HAVE_UNSETENV

/* Define to 1 if the system has the type 'unsigned long long int'. */
#undef HAVE_UNSIGNED_LONG_LONG_INT

/* Define to 1 if you have the `uselocale' function. */
#undef HAVE_USELOCALE

/* Define to 1 if you have the 'usleep' function. */
#undef HAVE_USLEEP

/* Define to 1 if you have the <util.h> header file. */
#undef HAVE_UTIL_H

/* Define to 1 if you have the `utime' function. */
#undef HAVE_UTIME

/* Define to 1 if you have the 'utimensat' function. */
#undef HAVE_UTIMENSAT

/* Define to 1 if you have the `utimes' function. */
#undef HAVE_UTIMES

/* Define to 1 if you have the <utime.h> header file. */
#undef HAVE_UTIME_H

/* Define to 1 if you have the 'utmpname' function. */
#undef HAVE_UTMPNAME

/* Define to 1 if you have the 'utmpxname' function. */
#undef HAVE_UTMPXNAME

/* Define to 1 if you have the <utmpx.h> header file. */
#undef HAVE_UTMPX_H

/* Define to 1 if you have the <utmp.h> header file. */
#undef HAVE_UTMP_H

/* Define to 1 if you have the 'vasnprintf' function. */
#undef HAVE_VASNPRINTF

/* Define to 1 if you have the `vasprintf' function. */
#undef HAVE_VASPRINTF

/* Define to 1 if the preprocessor supports variadic macros and __VA_ARGS__.
   */
#undef HAVE_VA_ARGS

/* Define to 1 if you have the 'vdprintf' function. */
#undef HAVE_VDPRINTF

/* Define to 1 if you have the `vfork' function. */
#undef HAVE_VFORK

/* Define to 1 or 0, depending whether the compiler supports simple visibility
   declarations. */
#undef HAVE_VISIBILITY

/* Define to 1 if you have the `vsnprintf' function. */
#undef HAVE_VSNPRINTF

/* Define to 1 if you have the `waitid' function. */
#undef HAVE_WAITID

/* Define to 1 if you have the <wchar.h> header file. */
#undef HAVE_WCHAR_H

/* Define if you have the 'wchar_t' type. */
#undef HAVE_WCHAR_T

/* Define to 1 if you have the 'wcpcpy' function. */
#undef HAVE_WCPCPY

/* Define to 1 if you have the 'wcpncpy' function. */
#undef HAVE_WCPNCPY

/* Define to 1 if you have the 'wcrtomb' function. */
#undef HAVE_WCRTOMB

/* Define to 1 if you have the 'wcscasecmp' function. */
#undef HAVE_WCSCASECMP

/* Define to 1 if you have the 'wcscat' function. */
#undef HAVE_WCSCAT

/* Define to 1 if you have the 'wcschr' function. */
#undef HAVE_WCSCHR

/* Define to 1 if you have the 'wcscmp' function. */
#undef HAVE_WCSCMP

/* Define to 1 if you have the 'wcscoll' function. */
#undef HAVE_WCSCOLL

/* Define to 1 if you have the 'wcscpy' function. */
#undef HAVE_WCSCPY

/* Define to 1 if you have the 'wcscspn' function. */
#undef HAVE_WCSCSPN

/* Define to 1 if you have the 'wcsdup' function. */
#undef HAVE_WCSDUP

/* Define to 1 if you have the 'wcslen' function. */
#undef HAVE_WCSLEN

/* Define to 1 if you have the 'wcsncasecmp' function. */
#undef HAVE_WCSNCASECMP

/* Define to 1 if you have the 'wcsncat' function. */
#undef HAVE_WCSNCAT

/* Define to 1 if you have the 'wcsncmp' function. */
#undef HAVE_WCSNCMP

/* Define to 1 if you have the 'wcsncpy' function. */
#undef HAVE_WCSNCPY

/* Define to 1 if you have the 'wcsnlen' function. */
#undef HAVE_WCSNLEN

/* Define to 1 if you have the 'wcsnrtombs' function. */
#undef HAVE_WCSNRTOMBS

/* Define to 1 if you have the 'wcspbrk' function. */
#undef HAVE_WCSPBRK

/* Define to 1 if you have the 'wcsrchr' function. */
#undef HAVE_WCSRCHR

/* Define to 1 if you have the 'wcsrtombs' function. */
#undef HAVE_WCSRTOMBS

/* Define to 1 if you have the 'wcsspn' function. */
#undef HAVE_WCSSPN

/* Define to 1 if you have the 'wcsstr' function. */
#undef HAVE_WCSSTR

/* Define to 1 if you have the 'wcstok' function. */
#undef HAVE_WCSTOK

/* Define to 1 if you have the 'wcswidth' function. */
#undef HAVE_WCSWIDTH

/* Define to 1 if you have the 'wcsxfrm' function. */
#undef HAVE_WCSXFRM

/* Define to 1 if you have the 'wctob' function. */
#undef HAVE_WCTOB

/* Define to 1 if you have the <wctype.h> header file. */
#undef HAVE_WCTYPE_H

/* Define to 1 if you have the 'wcwidth' function. */
#undef HAVE_WCWIDTH

/* Define to 1 if you have the <winsock2.h> header file. */
#undef HAVE_WINSOCK2_H

/* Define if you have the 'wint_t' type. */
#undef HAVE_WINT_T

/* Define to 1 if you have the 'wmemchr' function. */
#undef HAVE_WMEMCHR

/* Define to 1 if you have the 'wmemcpy' function. */
#undef HAVE_WMEMCPY

/* Define to 1 if you have the 'wmempcpy' function. */
#undef HAVE_WMEMPCPY

/* This value is set to 1 to indicate that the system argz facility works */
#undef HAVE_WORKING_ARGZ

/* Define to 1 if fstatat (..., 0) works. For example, it does not work in AIX
   7.1. */
#undef HAVE_WORKING_FSTATAT_ZERO_FLAG

/* Define to 1 if O_NOATIME works. */
#undef HAVE_WORKING_O_NOATIME

/* Define to 1 if O_NOFOLLOW works. */
#undef HAVE_WORKING_O_NOFOLLOW

/* Define if you have the posix_spawn and posix_spawnp functions and they
   work. */
#undef HAVE_WORKING_POSIX_SPAWN

/* Define if utimes works properly. */
#undef HAVE_WORKING_UTIMES

/* Define to 1 if you have the <ws2tcpip.h> header file. */
#undef HAVE_WS2TCPIP_H

/* Define to 1 if you have the <xlocale.h> header file. */
#undef HAVE_XLOCALE_H

/* Define to 1 if extending the stack slightly past the limit causes a
   SIGSEGV, and an alternate stack can be established with sigaltstack, and
   the signal handler is passed a context that specifies the run time stack.
   This behavior is defined by POSIX 1003.1-2001 with the X/Open System
   Interface (XSI) option and is a standardized way to implement a SEGV-based
   stack overflow detection heuristic. */
#undef HAVE_XSI_STACK_OVERFLOW_HEURISTIC

/* Define to 1 if the system has the type `_Bool'. */
#undef HAVE__BOOL

/* Define to 1 if you have the `_Exit' function. */
#undef HAVE__EXIT

/* Define to 1 if you have the `_fseeki64' function. */
#undef HAVE__FSEEKI64

/* Define to 1 if you have the `_ftelli64' function. */
#undef HAVE__FTELLI64

/* Define to 1 if you have the `_ftime' function. */
#undef HAVE__FTIME

/* Define to 1 if you have the `_getpty' function. */
#undef HAVE__GETPTY

/* Define to 1 if you have the `_NSGetExecutablePath' function. */
#undef HAVE__NSGETEXECUTABLEPATH

/* Define to 1 if you have the '_set_invalid_parameter_handler' function. */
#undef HAVE__SET_INVALID_PARAMETER_HANDLER

/* Define to 1 if you have the external variable, _system_configuration with a
   member named physmem. */
#undef HAVE__SYSTEM_CONFIGURATION

/* Define to 1 if you have the '__fbufsize' function. */
#undef HAVE___FBUFSIZE

/* Define to 1 if you have the '__flbf' function. */
#undef HAVE___FLBF

/* Define to 1 if you have the '__fpending' function. */
#undef HAVE___FPENDING

/* Define to 1 if you have the '__fpurge' function. */
#undef HAVE___FPURGE

/* Define to 1 if you have the '__freadable' function. */
#undef HAVE___FREADABLE

/* Define to 1 if you have the '__freadahead' function. */
#undef HAVE___FREADAHEAD

/* Define to 1 if you have the '__freading' function. */
#undef HAVE___FREADING

/* Define to 1 if you have the '__freadptr' function. */
#undef HAVE___FREADPTR

/* Define to 1 if you have the '__freadptrinc' function. */
#undef HAVE___FREADPTRINC

/* Define to 1 if you have the '__fseterr' function. */
#undef HAVE___FSETERR

/* Define to 1 if you have the '__fsetlocking' function. */
#undef HAVE___FSETLOCKING

/* Define to 1 if you have the '__fwritable' function. */
#undef HAVE___FWRITABLE

/* Define to 1 if you have the '__fwriting' function. */
#undef HAVE___FWRITING

/* Define to 1 if you have the `__secure_getenv' function. */
#undef HAVE___SECURE_GETENV

/* Define to 1 if you have the '__xpg_strerror_r' function. */
#undef HAVE___XPG_STRERROR_R

/* Define HOST_NAME_MAX when <limits.h> does not define it. */
#undef HOST_NAME_MAX

/* The host operating system. */
#undef HOST_OPERATING_SYSTEM

/* Define as const if the declaration of iconv() needs const. */
#undef ICONV_CONST

/* Define to a symbolic name denoting the flavor of iconv_open()
   implementation. */
#undef ICONV_FLAVOR

/* Define to the value of ${prefix}, as a string. */
#undef INSTALLPREFIX

/* Define to 1 if isatty() may fail without setting errno. */
#undef ISATTY_FAILS_WITHOUT_SETTING_ERRNO

/* Define as the bit index in the word where to find bit 0 of the exponent of
   'long double'. */
#undef LDBL_EXPBIT0_BIT

/* Define as the word index where to find the exponent of 'long double'. */
#undef LDBL_EXPBIT0_WORD

/* Define as the bit index in the word where to find the sign of 'long
   double'. */
#undef LDBL_SIGNBIT_BIT

/* Define as the word index where to find the sign of 'long double'. */
#undef LDBL_SIGNBIT_WORD

/* Define to 1 if linkat fails to recognize a trailing slash. */
#undef LINKAT_TRAILING_SLASH_BUG

/* Define to 1 if 'link(2)' dereferences symbolic links, 0 if it creates hard
   links to symlinks, -1 if it depends on the variable __xpg4, and -2 if
   unknown. */
#undef LINK_FOLLOWS_SYMLINKS

/* Define to 1 if lseek does not detect pipes. */
#undef LSEEK_PIPE_BROKEN

/* Define to 1 if 'lstat' dereferences a symlink specified with a trailing
   slash. */
#undef LSTAT_FOLLOWS_SLASHED_SYMLINK

/* If malloc(0) is != NULL, define this to 1. Otherwise define this to 0. */
#undef MALLOC_0_IS_NONNULL

/* Define to a substitute value for mmap()'s MAP_ANONYMOUS flag. */
#undef MAP_ANONYMOUS

/* Define if the mbrtowc function has the NULL pwc argument bug. */
#undef MBRTOWC_NULL_ARG1_BUG

/* Define if the mbrtowc function has the NULL string argument bug. */
#undef MBRTOWC_NULL_ARG2_BUG

/* Define if the mbrtowc function does not return 0 for a NUL character. */
#undef MBRTOWC_NUL_RETVAL_BUG

/* Define if the mbrtowc function returns a wrong return value. */
#undef MBRTOWC_RETVAL_BUG

/* Define to 1 if mkfifo does not reject trailing slash */
#undef MKFIFO_TRAILING_SLASH_BUG

/* Define to 1 if mknod cannot create a fifo without super-user privileges */
#undef MKNOD_FIFO_BUG

/* defined to the name of the unpredictable nonce device */
#undef NAME_OF_NONCE_DEVICE

/* defined to the name of the pseudo random device */
#undef NAME_OF_PSEUDO_RANDOM_DEVICE

/* defined to the name of the (strong) random device */
#undef NAME_OF_RANDOM_DEVICE

/* Define to 1 if assertions should be disabled. */
#undef NDEBUG

/* Define if the vasnprintf implementation needs special code for the 'a' and
   'A' directives. */
#undef NEED_PRINTF_DIRECTIVE_A

/* Define if the vasnprintf implementation needs special code for the 'F'
   directive. */
#undef NEED_PRINTF_DIRECTIVE_F

/* Define if the vasnprintf implementation needs special code for the 'ls'
   directive. */
#undef NEED_PRINTF_DIRECTIVE_LS

/* Define if the vasnprintf implementation needs special code for 'double'
   arguments. */
#undef NEED_PRINTF_DOUBLE

/* Define if the vasnprintf implementation needs special code for surviving
   out-of-memory conditions. */
#undef NEED_PRINTF_ENOMEM

/* Define if the vasnprintf implementation needs special code for the ' flag.
   */
#undef NEED_PRINTF_FLAG_GROUPING

/* Define if the vasnprintf implementation needs special code for the '-'
   flag. */
#undef NEED_PRINTF_FLAG_LEFTADJUST

/* Define if the vasnprintf implementation needs special code for the 0 flag.
   */
#undef NEED_PRINTF_FLAG_ZERO

/* Define if the vasnprintf implementation needs special code for infinite
   'double' arguments. */
#undef NEED_PRINTF_INFINITE_DOUBLE

/* Define if the vasnprintf implementation needs special code for infinite
   'long double' arguments. */
#undef NEED_PRINTF_INFINITE_LONG_DOUBLE

/* Define if the vasnprintf implementation needs special code for 'long
   double' arguments. */
#undef NEED_PRINTF_LONG_DOUBLE

/* Define if the vasnprintf implementation needs special code for supporting
   large precisions without arbitrary bounds. */
#undef NEED_PRINTF_UNBOUNDED_PRECISION

/* Define to 1 if your C compiler doesn't accept -c and -o together. */
#undef NO_MINUS_C_MINUS_O

/* Define to 1 if the nlist n_name member is a pointer */
#undef N_NAME_POINTER

/* Define to 1 if open() fails to recognize a trailing slash. */
#undef OPEN_TRAILING_SLASH_BUG

/* Name of package */
#undef PACKAGE

/* Define to the address where bug reports for this package should be sent. */
#undef PACKAGE_BUGREPORT

/* Define to the full name of this package. */
#undef PACKAGE_NAME

/* String identifying the packager of this software */
#undef PACKAGE_PACKAGER

/* Packager info for bug reports (URL/e-mail/...) */
#undef PACKAGE_PACKAGER_BUG_REPORTS

/* Packager-specific version information */
#undef PACKAGE_PACKAGER_VERSION

/* Define to the full name and version of this package. */
#undef PACKAGE_STRING

/* Define to the one symbol short name of this package. */
#undef PACKAGE_TARNAME

/* Define to the home page for this package. */
#undef PACKAGE_URL

/* Define to the version of this package. */
#undef PACKAGE_VERSION

/* the number of pending output bytes on stream 'fp' */
#undef PENDING_OUTPUT_N_BYTES

/* Define to the maximum link count that a true pipe can have. */
#undef PIPE_LINK_COUNT_MAX

/* Define if <inttypes.h> exists and defines unusable PRI* macros. */
#undef PRI_MACROS_BROKEN

/* Define to the type that is the result of default argument promotions of
   type mode_t. */
#undef PROMOTED_MODE_T

/* Define if the pthread_in_use() detection is hard. */
#undef PTHREAD_IN_USE_DETECTION_HARD

/* Define to 1 if pthread_sigmask(), when it fails, returns -1 and sets errno.
   */
#undef PTHREAD_SIGMASK_FAILS_WITH_ERRNO

/* Define to 1 if pthread_sigmask() may returns 0 and have no effect. */
#undef PTHREAD_SIGMASK_INEFFECTIVE

/* Define to 1 if pthread_sigmask() unblocks signals incorrectly. */
#undef PTHREAD_SIGMASK_UNBLOCK_BUG

/* Define to l, ll, u, ul, ull, etc., as suitable for constants of type
   'ptrdiff_t'. */
#undef PTRDIFF_T_SUFFIX

/* Define to 1 if readlink fails to recognize a trailing slash. */
#undef READLINK_TRAILING_SLASH_BUG

/* If realloc(NULL,0) is != NULL, define this to 1. Otherwise define this to
   0. */
#undef REALLOC_0_IS_NONNULL

/* Define if rename does not work when the destination file exists, as on
   Cygwin 1.5 or Windows. */
#undef RENAME_DEST_EXISTS_BUG

/* Define if rename fails to leave hard links alone, as on NetBSD 1.6 or
   Cygwin 1.5. */
#undef RENAME_HARD_LINK_BUG

/* Define if rename does not correctly handle slashes on the destination
   argument, such as on Solaris 10 or NetBSD 1.6. */
#undef RENAME_TRAILING_SLASH_DEST_BUG

/* Define if rename does not correctly handle slashes on the source argument,
   such as on Solaris 9 or cygwin 1.5. */
#undef RENAME_TRAILING_SLASH_SOURCE_BUG

/* Define to 1 if gnulib's fchdir() replacement is used. */
#undef REPLACE_FCHDIR

/* Define if fprintf is overridden by a POSIX compliant gnulib implementation.
   */
#undef REPLACE_FPRINTF_POSIX

/* Define to 1 if stat needs help when passed a directory name with a trailing
   slash */
#undef REPLACE_FUNC_STAT_DIR

/* Define to 1 if stat needs help when passed a file name with a trailing
   slash */
#undef REPLACE_FUNC_STAT_FILE

/* Define if the iconv() functions are enhanced to handle the
   UTF-{16,32}{BE,LE} encodings. */
#undef REPLACE_ICONV_UTF

/* Define if nl_langinfo exists but is overridden by gnulib. */
#undef REPLACE_NL_LANGINFO

/* Define to 1 if open() should work around the inability to open a directory.
   */
#undef REPLACE_OPEN_DIRECTORY

/* Define if printf is overridden by a POSIX compliant gnulib implementation.
   */
#undef REPLACE_PRINTF_POSIX

/* Define to 1 if strerror(0) does not return a message implying success. */
#undef REPLACE_STRERROR_0

/* Define if vasnprintf exists but is overridden by gnulib. */
#undef REPLACE_VASNPRINTF

/* Define if vfprintf is overridden by a POSIX compliant gnulib
   implementation. */
#undef REPLACE_VFPRINTF_POSIX

/* Define if vprintf is overridden by a POSIX compliant gnulib implementation.
   */
#undef REPLACE_VPRINTF_POSIX

/* the value to which errno is set when rmdir fails on a nonempty directory */
#undef RMDIR_ERRNO_NOT_EMPTY

/* Define if sigaltstack() interprets the stack_t.ss_sp field incorrectly, as
   the highest address of the alternate stack range rather than as the lowest
   address. */
#undef SIGALTSTACK_SS_REVERSED

/* Define if lists must be signal-safe. */
#undef SIGNAL_SAFE_LIST

/* Define to l, ll, u, ul, ull, etc., as suitable for constants of type
   'sig_atomic_t'. */
#undef SIG_ATOMIC_T_SUFFIX

/* Define as the maximum value of type 'size_t', if the system doesn't define
   it. */
#ifndef SIZE_MAX
# undef SIZE_MAX
#endif

/* Define to l, ll, u, ul, ull, etc., as suitable for constants of type
   'size_t'. */
#undef SIZE_T_SUFFIX

/* If using the C implementation of alloca, define if you know the
   direction of stack growth for your system; otherwise it will be
   automatically deduced at runtime.
        STACK_DIRECTION > 0 => grows toward higher addresses
        STACK_DIRECTION < 0 => grows toward lower addresses
        STACK_DIRECTION = 0 => direction of growth unknown */
#undef STACK_DIRECTION

/* Define if the block counts reported by statfs may be truncated to 2GB and
   the correct values may be stored in the f_spare array. (SunOS 4.1.2, 4.1.3,
   and 4.1.3_U1 are reported to have this problem. SunOS 4.1.1 seems not to be
   affected.) */
#undef STATFS_TRUNCATES_BLOCK_COUNTS

/* Define to 1 if the `S_IS*' macros in <sys/stat.h> do not work properly. */
#undef STAT_MACROS_BROKEN

/* Define if there is no specific function for reading file systems usage
   information and you have the <sys/filsys.h> header file. (SVR2) */
#undef STAT_READ_FILSYS

/* Define if statfs takes 2 args and struct statfs has a field named f_bsize.
   (4.3BSD, SunOS 4, HP-UX, AIX PS/2) */
#undef STAT_STATFS2_BSIZE

/* Define if statfs takes 2 args and struct statfs has a field named f_frsize.
   (glibc/Linux > 2.6) */
#undef STAT_STATFS2_FRSIZE

/* Define if statfs takes 2 args and struct statfs has a field named f_fsize.
   (4.4BSD, NetBSD) */
#undef STAT_STATFS2_FSIZE

/* Define if statfs takes 2 args and the second argument has type struct
   fs_data. (Ultrix) */
#undef STAT_STATFS2_FS_DATA

/* Define if statfs takes 3 args. (DEC Alpha running OSF/1) */
#undef STAT_STATFS3_OSF1

/* Define if statfs takes 4 args. (SVR3, Dynix, old Irix, old AIX, Dolphin) */
#undef STAT_STATFS4

/* Define if there is a function named statvfs. (SVR4) */
#undef STAT_STATVFS

/* Define if statvfs64 should be preferred over statvfs. */
#undef STAT_STATVFS64

/* Define to 1 if you have the ANSI C header files. */
#undef STDC_HEADERS

/* Define to 1 if strerror_r returns char *. */
#undef STRERROR_R_CHAR_P

/* Define to 1 on System V Release 4. */
#undef SVR4

/* Define to 1 if all 'time_t' values fit in a 'long int'. */
#undef TIME_T_FITS_IN_LONG_INT

/* Define to 1 if your <sys/time.h> declares `struct tm'. */
#undef TM_IN_SYS_TIME

/* Define to 1 if the type of the st_atim member of a struct stat is struct
   timespec. */
#undef TYPEOF_STRUCT_STAT_ST_ATIM_IS_STRUCT_TIMESPEC

/* Define if tzset clobbers localtime's static buffer. */
#undef TZSET_CLOBBERS_LOCALTIME

/* Define to 1 for Encore UMAX. */
#undef UMAX

/* Define to 1 for Encore UMAX 4.3 that has <inq_status/cpustats.h> instead of
   <sys/cpustats.h>. */
#undef UMAX4_3

/* Define to 1 if unlink (dir) cannot possibly succeed. */
#undef UNLINK_CANNOT_UNLINK_DIR

/* Define to 1 if unlink() on a parent directory may succeed */
#undef UNLINK_PARENT_BUG

/* Define to the prefix of C symbols at the assembler and linker level, either
   an underscore or empty. */
#undef USER_LABEL_PREFIX

/* Define to nonzero if you want access control list support. */
#undef USE_ACL

/* Define if the POSIX multithreading library can be used. */
#undef USE_POSIX_THREADS

/* Define if references to the POSIX multithreading library should be made
   weak. */
#undef USE_POSIX_THREADS_WEAK

/* Define if the GNU Pth multithreading library can be used. */
#undef USE_PTH_THREADS

/* Define if references to the GNU Pth multithreading library should be made
   weak. */
#undef USE_PTH_THREADS_WEAK

/* Define if the old Solaris multithreading library can be used. */
#undef USE_SOLARIS_THREADS

/* Define if references to the old Solaris multithreading library should be
   made weak. */
#undef USE_SOLARIS_THREADS_WEAK

/* Define to 1 if you want getc etc. to use unlocked I/O if available.
   Unlocked I/O can improve performance in unithreaded apps, but it is not
   safe for multithreaded apps. */
#undef USE_UNLOCKED_IO

/* Define if the native Windows multithreading API can be used. */
#undef USE_WINDOWS_THREADS

/* Version number of package */
#undef VERSION

/* Define to 1 if unsetenv returns void instead of int. */
#undef VOID_UNSETENV

/* Define to l, ll, u, ul, ull, etc., as suitable for constants of type
   'wchar_t'. */
#undef WCHAR_T_SUFFIX

/* Define if the wcsrtombs function has the NULL destination argument bug. */
#undef WCSRTOMBS_NULL_ARG_BUG

/* Define if the wcsrtombs function may set the source pointer to NULL without
   NUL-terminating the destination. */
#undef WCSRTOMBS_TERMINATION_BUG

/* Define if WSAStartup is needed. */
#undef WINDOWS_SOCKETS

/* Define if sys/ptem.h is required for struct winsize. */
#undef WINSIZE_IN_PTEM

/* Define to l, ll, u, ul, ull, etc., as suitable for constants of type
   'wint_t'. */
#undef WINT_T_SUFFIX

/* Define WORDS_BIGENDIAN to 1 if your processor stores words with the most
   significant byte first (like Motorola and SPARC, unlike Intel). */
#if defined AC_APPLE_UNIVERSAL_BUILD
# if defined __BIG_ENDIAN__
#  define WORDS_BIGENDIAN 1
# endif
#else
# ifndef WORDS_BIGENDIAN
#  undef WORDS_BIGENDIAN
# endif
#endif

/* Define to 1 to internationalize bison runtime messages. */
#undef YYENABLE_NLS

/* Enable large inode numbers on Mac OS X.  */
#ifndef _DARWIN_USE_64_BIT_INODE
# define _DARWIN_USE_64_BIT_INODE 1
#endif

/* Number of bits in a file offset, on hosts where this is settable. */
#undef _FILE_OFFSET_BITS

/* Define to 1 if Gnulib overrides 'struct stat' on Windows so that struct
   stat.st_size becomes 64-bit. */
#undef _GL_WINDOWS_64_BIT_ST_SIZE

/* Define to 1 to make fseeko visible on some hosts (e.g. glibc 2.2). */
#undef _LARGEFILE_SOURCE

/* Define for large files, on AIX-style hosts. */
#undef _LARGE_FILES

/* Define to 1 on Solaris. */
#undef _LCONV_C99

/* Define in order to get some macros on AIX systems. */
#undef _LINUX_SOURCE_COMPAT

/* Define to 1 if on MINIX. */
#undef _MINIX

/* The _Noreturn keyword of C11.  */
#if ! (defined _Noreturn \
       || (defined __STDC_VERSION__ && 201112 <= __STDC_VERSION__))
# if (3 <= __GNUC__ || (__GNUC__ == 2 && 8 <= __GNUC_MINOR__) \
      || 0x5110 <= __SUNPRO_C)
#  define _Noreturn __attribute__ ((__noreturn__))
# elif defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn
# endif
#endif


/* Define to 2 if the system does not provide POSIX.1 features except with
   this defined. */
#undef _POSIX_1_SOURCE

/* Define to 1 in order to get the POSIX compatible declarations of socket
   functions. */
#undef _POSIX_PII_SOCKET

/* Define to 1 if you need to in order for 'stat' and other things to work. */
#undef _POSIX_SOURCE

/* Define if you want <regex.h> to include <limits.h>, so that it consistently
   overrides <limits.h>'s RE_DUP_MAX. */
#undef _REGEX_INCLUDE_LIMITS_H

/* Define if you want regoff_t to be at least as wide POSIX requires. */
#undef _REGEX_LARGE_OFFSETS

/* Define to 500 only on HP-UX. */
#undef _XOPEN_SOURCE

/* Enable extensions on AIX 3, Interix.  */
#ifndef _ALL_SOURCE
# undef _ALL_SOURCE
#endif
/* Enable general extensions on Mac OS X.  */
#ifndef _DARWIN_C_SOURCE
# undef _DARWIN_C_SOURCE
#endif
/* Enable GNU extensions on systems that have them.  */
#ifndef _GNU_SOURCE
# undef _GNU_SOURCE
#endif
/* Enable threading extensions on Solaris.  */
#ifndef _POSIX_PTHREAD_SEMANTICS
# undef _POSIX_PTHREAD_SEMANTICS
#endif
/* Enable extensions on HP NonStop.  */
#ifndef _TANDEM_SOURCE
# undef _TANDEM_SOURCE
#endif
/* Enable general extensions on Solaris.  */
#ifndef __EXTENSIONS__
# undef __EXTENSIONS__
#endif


/* Define to rpl_ if the getopt replacement functions and variables should be
   used. */
#undef __GETOPT_PREFIX

/* Define so that glibc/gnulib argp.h does not typedef error_t. */
#undef __error_t_defined

/* Define as a replacement for the ISO C99 __func__ variable. */
#undef __func__

/* Define as 'access' if you don't have the eaccess() function. */
#undef eaccess

/* Define to a type to use for 'error_t' if it is not otherwise available. */
#undef error_t

/* _GL_INLINE is a portable alternative to ISO C99 plain 'inline'.
   _GL_EXTERN_INLINE is a portable alternative to 'extern inline'.
   _GL_INLINE_HEADER_BEGIN contains useful stuff to put
     in an include file, before uses of _GL_INLINE.
     It suppresses GCC's bogus "no previous prototype for 'FOO'" diagnostic,
     when FOO is an inline function in the header; see
     <http://gcc.gnu.org/bugzilla/show_bug.cgi?id=54113>.
   _GL_INLINE_HEADER_END contains useful stuff to put
     in the same include file, after uses of _GL_INLINE.

   Suppress the use of extern inline on Apple's platforms,
   as Libc-825.25 (2012-09-19) is incompatible with it; see
   <http://lists.gnu.org/archive/html/bug-gnulib/2012-12/msg00023.html>.
   Perhaps Apple will fix this some day.  */
#if ((__GNUC__ \
      ? defined __GNUC_STDC_INLINE__ && __GNUC_STDC_INLINE__ \
      : 199901L <= __STDC_VERSION__) \
     && !defined __APPLE__)
# define _GL_INLINE inline
# define _GL_EXTERN_INLINE extern inline
#elif 2 < __GNUC__ + (7 <= __GNUC_MINOR__) && !defined __APPLE__
# if __GNUC_GNU_INLINE__
   /* __gnu_inline__ suppresses a GCC 4.2 diagnostic.  */
#  define _GL_INLINE extern inline __attribute__ ((__gnu_inline__))
# else
#  define _GL_INLINE extern inline
# endif
# define _GL_EXTERN_INLINE extern
#else
# define _GL_INLINE static _GL_UNUSED
# define _GL_EXTERN_INLINE static _GL_UNUSED
#endif

#if 4 < __GNUC__ + (6 <= __GNUC_MINOR__)
# if defined __GNUC_STDC_INLINE__ && __GNUC_STDC_INLINE__
#  define _GL_INLINE_HEADER_CONST_PRAGMA
# else
#  define _GL_INLINE_HEADER_CONST_PRAGMA \
     _Pragma ("GCC diagnostic ignored \"-Wsuggest-attribute=const\"")
# endif
# define _GL_INLINE_HEADER_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wmissing-prototypes\"") \
    _Pragma ("GCC diagnostic ignored \"-Wmissing-declarations\"") \
    _GL_INLINE_HEADER_CONST_PRAGMA
# define _GL_INLINE_HEADER_END \
    _Pragma ("GCC diagnostic pop")
#else
# define _GL_INLINE_HEADER_BEGIN
# define _GL_INLINE_HEADER_END
#endif

/* Always use our fgetfilecon wrapper. */
#undef fgetfilecon

/* Define to a replacement function name for fnmatch(). */
#undef fnmatch

/* Define to rpl_free if the replacement function should be used. */
#undef free

/* Always use our getfilecon wrapper. */
#undef getfilecon

/* Define to a replacement function name for getpass(). */
#undef getpass

/* Define to `int' if <sys/types.h> doesn't define. */
#undef gid_t

/* A replacement for va_copy, if needed.  */
#define gl_va_copy(a,b) ((a) = (b))

/* Define to rpl_gmtime if the replacement function should be used. */
#undef gmtime

/* Define to `__inline__' or `__inline' if that's what the C compiler
   calls it, or to nothing if 'inline' is not supported under any name.  */
#ifndef __cplusplus
#undef inline
#endif

/* Define to long or long long if <stdint.h> and <inttypes.h> don't define. */
#undef intmax_t

/* Work around a bug in Apple GCC 4.0.1 build 5465: In C99 mode, it supports
   the ISO C 99 semantics of 'extern inline' (unlike the GNU C semantics of
   earlier versions), but does not display it by setting __GNUC_STDC_INLINE__.
   __APPLE__ && __MACH__ test for Mac OS X.
   __APPLE_CC__ tests for the Apple compiler and its version.
   __STDC_VERSION__ tests for the C99 mode.  */
#if defined __APPLE__ && defined __MACH__ && __APPLE_CC__ >= 5465 && !defined __cplusplus && __STDC_VERSION__ >= 199901L && !defined __GNUC_STDC_INLINE__
# define __GNUC_STDC_INLINE__ 1
#endif

/* Always use our lgetfilecon wrapper. */
#undef lgetfilecon

/* Define to rpl_localtime if the replacement function should be used. */
#undef localtime

/* Define to a type if <wchar.h> does not define. */
#undef mbstate_t

/* Define to rpl_memcmp if the replacement function should be used. */
#undef memcmp

/* Define to the real name of the mktime_internal function. */
#undef mktime_internal

/* Define to `int' if <sys/types.h> does not define. */
#undef mode_t

/* Define to the name of the strftime replacement function. */
#undef my_strftime

/* Define to the type of st_nlink in struct stat, or a supertype. */
#undef nlink_t

/* Define to `long int' if <sys/types.h> does not define. */
#undef off_t

/* Define to `int' if <sys/types.h> does not define. */
#undef pid_t

/* Define as the type of the result of subtracting two pointers, if the system
   doesn't define it. */
#undef ptrdiff_t

/* Define to rpl_re_comp if the replacement should be used. */
#undef re_comp

/* Define to rpl_re_compile_fastmap if the replacement should be used. */
#undef re_compile_fastmap

/* Define to rpl_re_compile_pattern if the replacement should be used. */
#undef re_compile_pattern

/* Define to rpl_re_exec if the replacement should be used. */
#undef re_exec

/* Define to rpl_re_match if the replacement should be used. */
#undef re_match

/* Define to rpl_re_match_2 if the replacement should be used. */
#undef re_match_2

/* Define to rpl_re_search if the replacement should be used. */
#undef re_search

/* Define to rpl_re_search_2 if the replacement should be used. */
#undef re_search_2

/* Define to rpl_re_set_registers if the replacement should be used. */
#undef re_set_registers

/* Define to rpl_re_set_syntax if the replacement should be used. */
#undef re_set_syntax

/* Define to rpl_re_syntax_options if the replacement should be used. */
#undef re_syntax_options

/* Define to rpl_regcomp if the replacement should be used. */
#undef regcomp

/* Define to rpl_regerror if the replacement should be used. */
#undef regerror

/* Define to rpl_regexec if the replacement should be used. */
#undef regexec

/* Define to rpl_regfree if the replacement should be used. */
#undef regfree

/* Define to the equivalent of the C99 'restrict' keyword, or to
   nothing if this is not supported.  Do not define if restrict is
   supported directly.  */
#undef restrict
/* Work around a bug in Sun C++: it does not support _Restrict or
   __restrict__, even though the corresponding Sun C compiler ends up with
   "#define restrict _Restrict" or "#define restrict __restrict__" in the
   previous line.  Perhaps some future version of Sun C++ will work with
   restrict; if so, hopefully it defines __RESTRICT like Sun C does.  */
#if defined __SUNPRO_CC && !defined __RESTRICT
# define _Restrict
# define __restrict__
#endif

/* Define as an integer type suitable for memory locations that can be
   accessed atomically even in the presence of asynchronous signals. */
#undef sig_atomic_t

/* Define to `unsigned int' if <sys/types.h> does not define. */
#undef size_t

/* type to use in place of socklen_t if not defined */
#undef socklen_t

/* Define as a signed type of the same size as size_t. */
#undef ssize_t

/* Define to rpl_tzset if the wrapper function should be used. */
#undef tzset

/* Define to `int' if <sys/types.h> doesn't define. */
#undef uid_t

/* Define as a marker that can be attached to declarations that might not
    be used.  This helps to reduce warnings, such as from
    GCC -Wunused-parameter.  */
#if __GNUC__ >= 3 || (__GNUC__ == 2 && __GNUC_MINOR__ >= 7)
# define _GL_UNUSED __attribute__ ((__unused__))
#else
# define _GL_UNUSED
#endif
/* The name _UNUSED_PARAMETER_ is an earlier spelling, although the name
   is a misnomer outside of parameter lists.  */
#define _UNUSED_PARAMETER_ _GL_UNUSED

/* The __pure__ attribute was added in gcc 2.96.  */
#if __GNUC__ > 2 || (__GNUC__ == 2 && __GNUC_MINOR__ >= 96)
# define _GL_ATTRIBUTE_PURE __attribute__ ((__pure__))
#else
# define _GL_ATTRIBUTE_PURE /* empty */
#endif

/* The __const__ attribute was added in gcc 2.95.  */
#if __GNUC__ > 2 || (__GNUC__ == 2 && __GNUC_MINOR__ >= 95)
# define _GL_ATTRIBUTE_CONST __attribute__ ((__const__))
#else
# define _GL_ATTRIBUTE_CONST /* empty */
#endif


/* Define to an unsigned 32-bit type if <sys/types.h> lacks this type. */
#undef useconds_t

/* Define as a macro for copying va_list variables. */
#undef va_copy
