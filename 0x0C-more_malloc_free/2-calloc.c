#include "main.h"
#include <stdlib.h>
/*s*/ char *_memset(char *s, char b, unsigned int n)/*s*/
{
unsigned int i;
for (i = 0; i < n; i++)
{
s[i] = b;
}
return (s);
}
/*d*/void *_calloc(unsigned int nmemb, unsigned int size)/*d*/
{
char *ptr;
if (nmemb == 0 || size == 0)
{
return (NULL);
}
ptr = malloc(size * nmemb);
if (ptr == NULL)
{
return (NULL);
}
_memset(ptr, 0, nmemb * size);
return (ptr);
}
