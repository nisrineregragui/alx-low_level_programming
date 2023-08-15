#include "main.h"
/*comment*/ int print_last_digit(int); /*comment*/
/*comment*/ int print_last_digit(int k) /*comment*/
{
int n;
n = k % 10;
if (k < 0)
{
_putchar(-n + 48);
return (-n);
}
else
{
_putchar(n + 48);
return (n);
}
}
