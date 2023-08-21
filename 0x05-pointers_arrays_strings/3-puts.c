#include "main.h"
/*betty*/ void _puts(char *str) /*style*/
{
while (*str != '\0')
{
_putchar(*str);
str++;
}
_putchar('\n');
}
