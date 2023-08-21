#include "main.h"
/*betty*/ void puts2(char *str) /*style*/
{
while (*str != '\0')
{
_putchar(*str);
str += 2;
}
_putchar('\n');
}
