#include <stdarg.h>
#include "variadic_functions.h"
/*m*/void print_strings(const char *separator, const unsigned int n, ...)/*m*/
{       
va_list args;
char *string;
unsigned int i;
va_start(args, n);
for (i = 0; i < n; i++)
{
printf("%s", char);
if (
