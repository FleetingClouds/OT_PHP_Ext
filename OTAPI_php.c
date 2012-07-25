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
ZEND_GET_MODULE(otapi)

// actual non-template code!
PHP_FUNCTION(otapi_GetTime) {
  // php_printf is PHP's version of printf, it's essentially "echo" from C
  php_printf("We will call Open Transactions otapi_GetTime() at this point.\n");
  return "Success";
}
