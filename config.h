#define HAVE_MEMORY_H 1
#define HAVE_STDINT_H 1
#define HAVE_STDLIB_H 1
#define HAVE_STRDUP 1
#define HAVE_STRINGS_H 1
#define HAVE_STRING_H 1
#define HAVE_SYS_STAT_H 1
#define HAVE_SYS_TYPES_H 1
#define PACKAGE "libqrencode"
#define inline _inline
#define MAJOR_VERSION 3
#define MINOR_VERSION 4
#define MICRO_VERSION 4
#define VERSION "3.4.4"

#define __STATIC static

#if defined(_WIN32) || defined(_WIN64)
  #define strcasecmp _stricmp
  #define strncasecmp _strnicmp
  #if _MSC_VER < 1900
    #define snprintf _snprintf
    #define vsnprintf _vsnprintf
  #endif
#endif
