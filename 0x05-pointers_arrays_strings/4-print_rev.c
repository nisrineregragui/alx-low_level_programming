#include "main.h"
/*betty*/ void print_rev(char *s) /*style*/
{
int *p;
p = s;
while (*s != '\0')
{
s++;
}
s--;
do {
_putchar(*s);
s--;
}
while (s != p)
_putchar('\n');
}


