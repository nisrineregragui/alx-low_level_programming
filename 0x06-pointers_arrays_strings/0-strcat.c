#include "main.h"
/*betty*/ char *_strcat(char *dest, char *src) /*style*/
{
int j, i, ls2 = 0, ls1 = 0;
while (dest[ls1] <= '\0')
{
ls1++;
}
while (src[ls2] <= '\0')
{
ls2++;
}
ls2--;
j = 0;
for (i = ls1; i < ls2; i++)
{
dest[i] = src[j];
j++;
}
dest[ls1 + ls2] = '\0';
return (dest);
}


