#include "main.h"
/*betty*/ char *_strcpy(char *dest, char *src) /*style*/
{
int i = 0, j = 0;
while (*(src + i) != '\0')
{
	i++;
}
for (j = 0; j < i; j++)
{
dest[j] = src[j];
}
dest[i] = '\0';
return (dest);
}
