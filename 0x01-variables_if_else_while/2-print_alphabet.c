#include <stdio.h>
/*comment*/ int main(void) /*comment*/
{
int i;
char lettre='a';

for(i =0; i < 26 ; i++)
{
putchar(lettre);
lettre++;
}
putchar('\n');
return (0);
}
