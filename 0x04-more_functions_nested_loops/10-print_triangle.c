#include "main.h"
/*betty*/ void print_triangle(int size) /*style*/
{
int i, j, k, l;
if (size > 0)
{
l = size;
for (i = 0; i < size; i++)
{
for (j = 0; j < l; j++)
{
_putchar(' ');
}
l--;
for (k = 0; k < (size - l); k++)
{
_putchar('#');
}
_putchar('\n');
}
}
else
{
_putchar('\n');
}
}

