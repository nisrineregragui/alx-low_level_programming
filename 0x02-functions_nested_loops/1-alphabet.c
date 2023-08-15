#include "main.h"
/*comment*/ void print_alphabet(void) /*c*/
{
char a = 'a';
int i;
for (i = 0; i < 26; i++)
{
putchar(a);
a++;
}
putchar('\n');
}
