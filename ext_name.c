#ifdef HAVE_CONFIG_H
#include "config.h"
#endif

#include "php.h"
// #include "php_ini.h"
#include "php_hello.h"

static zend_function_entry ext_name_functions[] = {
    PHP_FE(func_name, NULL)
    //PHP_FE(func_name_2, NULL)
    // ...
    {NULL, NULL, NULL}
};

zend_module_entry ext_name_module_entry = {
#if ZEND_MODULE_API_NO >= 20010901
    STANDARD_MODULE_HEADER,
#endif
    PHP_EXT_NAME_EXTNAME,
    ext_name_functions,
    NULL, //PHP_MINIT(ext_name),
    NULL, //PHP_MSHUTDOWN(ext_name),
    NULL,
    NULL,
    NULL,
#if ZEND_MODULE_API_NO >= 20010901
    PHP_HELLO_WORLD_VERSION,
#endif
    STANDARD_MODULE_PROPERTIES
};

#ifdef COMPILE_DL_EXT_NAME
ZEND_GET_MODULE(ext_name)
#endif

// Optional if the extension needs some settings via php.ini (also uncomment #include php_ini.h then)
//PHP_INI_BEGIN()
//PHP_INI_ENTRY("hello.greeting", "stranger", PHP_INI_ALL, NULL)
//PHP_INI_END()

// Optional if there is need to prepare something
//PHP_MINIT_FUNCTION(ext_name)
//{
//    REGISTER_INI_ENTRIES();
//
//    return SUCCESS;
//}

// Optional if there is need to clean up something
//PHP_MSHUTDOWN_FUNCTION(ext_name)
//{
//    UNREGISTER_INI_ENTRIES();
//
//    return SUCCESS;
//}

PHP_FUNCTION(func_name)
{
	// Optional if the function should take any arguments
    //long *res;
	//
    //if (zend_parse_parameters(ZEND_NUM_ARGS(), "l", &res) == FAILURE) {
    //        RETURN_FALSE;
    //}
    
    RETURN_TRUE;
}