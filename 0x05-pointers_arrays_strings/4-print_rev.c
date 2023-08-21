#include "main.h"
/*betty*/ void print_rev(char *s) /*style*/
{
char *p;
p = s;
while (*s != '\0')
{
s++;
}
s--;
do {
_putchar(*s);
s--;
if (s == p)
{
_putchar(*s);
}
}
while (s != p);

_putchar('\n');
}


