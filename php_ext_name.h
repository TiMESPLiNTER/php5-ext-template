#ifndef PHP_EXT_NAME_H
#define PHP_EXT_NAME_H 1

#define PHP_EXT_NAME_VERSION "1.0"
#define PHP_EXT_NAME_EXTNAME "ext_name"

// Define optional init und shutdown functions (to set up or clean up stuff)
//PHP_MINIT_FUNCTION(ext_name);
//PHP_MSHUTDOWN_FUNCTION(ext_name);

// Define all the functions of the extensions here
PHP_FUNCTION(func_name);
//PHP_FUNCTION(func_name_2);
// ...

extern zend_module_entry ext_name_module_entry;
#define phpext_ext_name_ptr &ext_name_module_entry

#endif