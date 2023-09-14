#include <stdarg.h>
#include "variadic_functions.h"
/*m*/void print_strings(const char *separator, const unsigned int n, ...)/*m*/
{
va_list args;
char *st;
unsigned int i;
va_start(args, n);
for (i = 0; i < n; i++)
{
st = va_arg(args, char *);
if (st != NULL)
{
printf("%s", st);
}
else 
{
printf("(nil)");
}
if (i < (n - 1) && separator != NULL)
{
printf("%s", separator);
}
}
printf("\n");
}
	
