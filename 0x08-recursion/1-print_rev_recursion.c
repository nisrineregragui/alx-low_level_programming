#include "main.h"
/*betty*/ void _print_rev_recursion(char *s) /*styyle*/
{
char *p = s;
int j = 0;
if (*p != '\0')
{
p++;
j++  ;
_print_rev_recursion(p);
}
else if (j != 0)
{
p--;
j--;
_putchar(*p);
_print_rev_recursion(p);
}
return;
}
