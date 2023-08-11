#include <stdio.h>
/*comment*/ int main(void) /*comment*/
{
int i;
char lettre = 'z';

for (i = 0; i < 26 ; i++)
{
putchar(lettre);
lettre--;
}
putchar('\n');
return (0);
}
