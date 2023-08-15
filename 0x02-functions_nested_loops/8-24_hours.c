#include "main.h"
/*comment*/ void jack_bauer(void); /*comment*/
/*comment*/ void jack_bauer(void) /*comment*/
{
int h, s;
for (h = 0;  h < 24; h++)
{
for (s = 0; s < 60; s++)
{
if (h < 10)
{
_putchar(0 + '0');
}
_putchar(h + '0');
_putchar(':');
if (s < 10)
{
_putchar(0 + '0');
}
_putchar(s + '0');
}
_putchar('\n');
}
}
