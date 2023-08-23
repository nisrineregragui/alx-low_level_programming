#include "main.h"
/*betty*/ char *_strncat(char *dest, char *src, int n) /*style*/
{
int i, j = 0, ls1 = 0, ls2 = 0;
while (dest[ls1] != '\0')
{
ls1++;
}
while (src[ls2] != '\0')
{
ls2++;
}
if (n <= ls2)
{
for (i = ls1; i < ls1 + n; i++)
{
dest[i] = src[j];
j++;
}
dest[i] = '\0';
}
else
{
for (i = ls1; i < ls1 + ls2; i++)
{
dest[i] = src[j];
j++;
}
dest[i] = '\0';
}
return (dest);
}
