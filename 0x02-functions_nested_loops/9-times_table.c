#include "main.h"
/*g*/void times_table(void)/*s*/
{
int r, i, j, spaces;
for (i = 0; i < 10; i++)
{
for (j = 0; j < 10; j++)
{
r = i * j;
spaces = (j == 0) ? 0 : 3 - (r < 10) - (r >= 100);
while (numSpaces > 0)
{
_putchar(' ');
spaces--;
}
_putchar(r + '0');
if (j < 9)
{
_putchar(',');
_putchar(' ');
}
}
_putchar('\n');
}
}
