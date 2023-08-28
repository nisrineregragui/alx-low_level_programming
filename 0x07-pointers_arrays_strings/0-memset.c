#include "main.h"
/*betty*/ char *_memset(char *s, char b, unsigned int n) /*style*/
{
int i;
char *ptr;
ptr = s;
for (i = 0; i < n; i++)
{
*s = b;
s++;
}
return (ptr);
}
