#include <stdarg.h>
#include "variadic_functions.h"
/*y*/void print_numbers(const char *separator, const unsigned int n, ...)/*e*/
{
va_list args;
unsigned int i;
va_start(args, n);
if (separator == NULL)
{
for (i = 0; i < n; i++)
{
printf("%d", va_arg(args, int));
}
printf("\n");
return;
}
for (i = 0; i < n; i++)
{
printf("%d", va_arg(args, int));
if (i < (n - 1))
{
printf("%s", separator);
}
}
printf("\n");
}
