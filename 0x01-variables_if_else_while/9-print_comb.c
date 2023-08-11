#include <stdio.h>
/*betty*/ int main(void) /*style*/
{
int i, num = 0;
for (i = 0; i < 10 ; i++)
{
putchar(num + '0');
putchar(',');
putchar(' ');
num++;
}
putchar('\n');
return (0);
}
