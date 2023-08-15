#include "main.h"
/*comment*/ int print_last_digit(int); /*comment*/
/*comment*/ int print_last_digit(int k) /*comment*/
{
int n;
if (k < 0)
{
n = -k;
n = n % 10;
}
else
{
n = k % 10;
}
return (n);
}
