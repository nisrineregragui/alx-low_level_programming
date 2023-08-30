#include "main.h"
/*betty*/ void _puts_recursion(char *s) /*comment*/
{
char *p;
p = s;
if (*p == '\0')
{
_putchar ('\n');
return;
}
else
{
_putchar (*p);
p++;
_puts_recursion(p);
}
}
