#include "main.h"
/*betty*/ void more_numbers(void) /*style*/
{
int i, j, num = 0;
for (i = 0; i < 10; i++)
{
num = 0;
for (j = 0; j < 15; j++)
{
if (num > 9)
{
_putchar((num / 10) + '0');
}
_putchar((num % 10) + '0');
num++;
}
_putchar('\n');
}
}
