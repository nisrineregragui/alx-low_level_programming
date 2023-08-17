#include "main.h"
/*betty*/ void print_numbers(void) /*style*/
{
int i;
int a = 0;
for (i = 0; i < 10; i++)
{
_putchar(a + '0');
a++;
}
_putchar('\n');
}
