#                                               -*- Autoconf -*-
# Process this file with autoconf to produce a configure script.

AC_PREREQ([2.69])
AC_INIT([autotools-hello], [1.0.0], [alvaro.gamez@hazent.com])
AC_CONFIG_SRCDIR([libs/libHello.c])
AC_CONFIG_HEADERS([config.h])
AM_INIT_AUTOMAKE([foreign])

# Checks for programs.
AC_PROG_CC

# Checks for libraries.
AC_CHECK_LIB([m], [fmod])

# Checks for header files.

# Checks for typedefs, structures, and compiler characteristics.

# Checks for library functions.

AC_CONFIG_FILES([
                 Makefile
                 apps/Makefile
                 libs/Makefile
                 libs/libHello.pc
                 ])
AC_OUTPUT
