#include "main.h"
/*betty*/ void puts_half(char *str) /*style*/
{
int i = 0, n;
while (str[i] != '\0')
{
i++;
}
n = i / 2;
if ((i % 2) == 1)
{
n = (n - 1) / 2;
}
i = n;
while (str[i] != '\0')
{
_putchar(str[i]);
i++;
}
_putchar('\n');
}
