#include "main.h"
/*betty*/ char *_memcpy(char *dest, char *src, unsigned int n) /*style*/
{
unsigned int i;
for (i = 0; i < n; i++)
{
*dest = *src;
dest++;
src++;
}
return (dest);
}
