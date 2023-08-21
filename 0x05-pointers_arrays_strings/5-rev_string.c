#include "main.h"
/*betty*/ void rev_string(char *s) /*style*/
{
char i = s[0];
int c, j;
c = 0;
while (s[c] != '\0')
{
c++;
}
for (j = 0; j < c; j++)
{
c--;
i = s[j];
s[j] = s[c];
s[c] = i;
}
}
