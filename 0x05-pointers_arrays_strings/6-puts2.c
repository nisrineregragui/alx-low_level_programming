#include "main.h"
/*betty*/ void puts2(char *str) /*style*/
{
while (*str !='\' && *(str + 1) != '0')
{
_putchar(*str);
str += 2;
}
_putchar('\n');
}
