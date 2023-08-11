#include <stdio.h>
/*comment*/ int main(void) /*comment*/
{
int i;
char lettre = 'a';

for (i = 0; i < 26 ; i++)
{
if (lettre != 'q' && lettre != 'e')
{
putchar(lettre);
}
lettre++;
}
putchar('\n');
return (0);
}
