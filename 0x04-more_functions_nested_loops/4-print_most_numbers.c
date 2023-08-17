#include "main.h"
/*betty*/ void print_most_numbers(void) /*style*/
{
int i, n = 0;
for (i = 0 ; i < 10 ; i++)
{
if (n != 2 && n != 4)
{
_putchar(n + '0');
}
n++;
}
_putchar('\n');
}
