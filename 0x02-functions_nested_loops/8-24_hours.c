#include "main.h"
/*comment*/ void jack_bauer(void); /*comment*/
/*comment*/ void jack_bauer(void) /*comment*/
{
int h, s, j, k;
for (h = 0;  h < 24; h++)
{
j = 0;
k = 0;
for (s = 0; s < 60; s++)
{
if (h < 10 && j == 0)
{
_putchar(0 + '0');
j++;
}
_putchar(h + '0');
_putchar(':');
if (s < 10 && k == 0)
{
_putchar(0 + '0');
k++;
}
_putchar(s + '0');
}
_putchar('\n');
}
}
