#include <stdio.h>
/*comment*/ int main(void) /*comment*/
{
int i;
int num  = 0;

for (i = 0; i < 10 ; i++)
{
putchar(num + '0');
num++;
}
putchar('\n');
return (0);
}
