#include <stdio.h>
/*comment*/ int main(void) /*comment*/
{
int i;
char lettre = 'a', maj = 'A';

for (i = 0; i < 26 ; i++)
{
putchar(lettre);
lettre++;
}
for (i = 0; i < 26 ; i++)
{
putchar(maj);
maj++;
}
putchar('\n');
return (0);
}
