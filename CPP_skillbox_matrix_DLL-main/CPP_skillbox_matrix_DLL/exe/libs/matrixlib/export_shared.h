
#ifndef MATRIX1IB_EXPORT_H
#define MATRIX1IB_EXPORT_H

#ifdef MATRIX1IB_STATIC_DEFINE
#  define MATRIX1IB_EXPORT
#  define MATRIX1IB_NO_EXPORT
#else
#  ifndef MATRIX1IB_EXPORT
#    ifdef shared_matrixlib_EXPORTS
        /* We are building this library */
#      define MATRIX1IB_EXPORT __declspec(dllexport)
#    else
        /* We are using this library */
#      define MATRIX1IB_EXPORT __declspec(dllimport)
#    endif
#  endif

#  ifndef MATRIX1IB_NO_EXPORT
#    define MATRIX1IB_NO_EXPORT 
#  endif
#endif

#ifndef MATRIX1IB_DEPRECATED
#  define MATRIX1IB_DEPRECATED __declspec(deprecated)
#endif

#ifndef MATRIX1IB_DEPRECATED_EXPORT
#  define MATRIX1IB_DEPRECATED_EXPORT MATRIX1IB_EXPORT MATRIX1IB_DEPRECATED
#endif

#ifndef MATRIX1IB_DEPRECATED_NO_EXPORT
#  define MATRIX1IB_DEPRECATED_NO_EXPORT MATRIX1IB_NO_EXPORT MATRIX1IB_DEPRECATED
#endif

#if 0 /* DEFINE_NO_DEPRECATED */
#  ifndef MATRIX1IB_NO_DEPRECATED
#    define MATRIX1IB_NO_DEPRECATED
#  endif
#endif

#endif /* MATRIX1IB_EXPORT_H */
