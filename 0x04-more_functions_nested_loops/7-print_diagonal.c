#include "main.h"
/*betty*/ void print_diagonal(int n) /*style*/
{
int i, space, k = 0, l = 0;
if (n > 0)
{
for (i = 0; i < n; i++)
{
k = l;
for (space = 0; space < k; space++)
{
_putchar(' ');
}
l++;
_putchar('\\');
_putchar('\n');
}
}
else
{
_putchar('\n');
}}
