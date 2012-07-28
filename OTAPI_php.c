// include PHP API
#include <php.h>

// header file we'll create below
#include "OTAPI_php.h"

// define the function(s) we want to add
zend_function_entry otapi_functions[] = {
  PHP_FE(otapi_GetTime, NULL)
  { NULL, NULL, NULL }
};

// "otapi_functions" refers to the struct defined above
// we'll be filling in more of this later: you can use this to specify
// globals, php.ini info, startup and teardown functions, etc.
zend_module_entry otapi_module_entry = {
  STANDARD_MODULE_HEADER,
  OTAPI_PHP_EXTNAME,
  otapi_functions,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  OTAPI_PHP_VERSION,
  STANDARD_MODULE_PROPERTIES
};

// install module
ZEND_GET_MODULE(ot_api_php)

// actual non-template code!  This is where the work gets done.
PHP_FUNCTION(otapi_GetTime) {
    // boolean type
    zend_bool english = 0;
 
    if (zend_parse_parameters(ZEND_NUM_ARGS() TSRMLS_CC, "b", &english) == FAILURE) {
        return;
    }
 
    if (english) {
        cthulhu();
    }
    else {
        php_printf("Ph'nglui mglw'nafh Cthulhu R'lyeh wgah'nagl fhtagn.\n");
    }
}
