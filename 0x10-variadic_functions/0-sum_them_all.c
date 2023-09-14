#include <stdarg.h>
#include "variadic_functions.h"
/*betty*/int sum_them_all(const unsigned int n, ...)/*s*/
{
unsigned int s = 0, i = 0;
va_list args;
va_start(args, n);
if (n == 0)
{
va_end(args);
return (0);
}
for (i = 0; i < n; i++)
{
s += va_arg(args, const unsigned int);
}
va_end(args);
return (s);
}
