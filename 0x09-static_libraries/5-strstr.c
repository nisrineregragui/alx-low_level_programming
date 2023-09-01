#include "main.h"
/*betty*/ char *_strstr(char *haystack, char *needle) /*style*/
{
int n = 0, j = 0, cmpt, k;
char *p;
while (needle[n] != '\0')
{
n++;
}
while (haystack[j] != '\0')
{
cmpt = 0;
k = 0;
while (haystack[j + k] == needle[k])
{
cmpt++;
k++;
if (cmpt == n)
{
p = &haystack[j];
return (p);
}
}
j++;
}
return (NULL);
}
