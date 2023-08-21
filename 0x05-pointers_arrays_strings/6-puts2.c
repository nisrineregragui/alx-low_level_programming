#include "main.h"
/*betty*/ void puts2(char *str) /*style*/
{
int l = 0, t, i;
char *p = str;
while (*p != '\0')
{
p++;
l++;
}
t = l - 1;
i = 0;
while (i <= t)
{
if (i % 2 == 0)
{
_putchar(*str);
}
i++;
str++;
}
_putchar('\n');
}
