#include "main.h"
/*betty*/ void rev_string(char *s) /*style*/
{
char *p = s,*k = s;
while (*s != '\0')
{
s++;
}
s--;
while (s !=k)
{
*s = *p;
p++;
s--;
}
}
