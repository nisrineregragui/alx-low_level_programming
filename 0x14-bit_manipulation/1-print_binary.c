#include "main.h"
/*f*/void print_binary(unsigned long int n)/*l*/
{
int i = 0, j = 0;
unsigned long int now;
for (i = 63; i >= 0; i--)
{
now = n >> i;
if (now & 1)
{
_putchar('1');
j++;
}
else if (j)
{
_putchar('0');
}
}
if (!j)
{
_putchar('0');
}
}
