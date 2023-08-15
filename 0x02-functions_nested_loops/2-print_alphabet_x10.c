#include "main.h"
/*somrthing*/ void print_alphabet_x10(void) /*k*/
{
int i, j;
char alpha = 'a';
for (i = 0; i < 10; i++)
{
alpha = 'a';
for (j = 0; j < 26; j++)
{
_putchar(alpha);
alpha++;
}
_putchar('\n');
}
}
