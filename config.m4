PHP_ARG_ENABLE(ext_name, whether to enable ext_name support,
[ --enable-ext_name   Enable ext_name support])

if test "$PHP_EXT_NAME" = "yes"; then
  AC_DEFINE(HAVE_EXT_NAME, 1, [Whether you have ext_name])
  PHP_NEW_EXTENSION(ext_name, ext_name.c, $ext_shared)
fi