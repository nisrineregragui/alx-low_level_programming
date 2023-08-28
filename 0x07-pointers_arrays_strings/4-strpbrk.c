#include "main.h"
/*betty*/ char *_strpbrk(char *s, char *accept) /*style*/
{
int i = 0, j, found = 0;
char a, *p;
while (s[i] != '\0' && found == 0)
{
a = s[i];
for (j = 0; accept[j] != '\0'; j++)
{
if (accept[j] == a)
{
found = 1;
p = &s[i];
return (p);
}
}
i++;
}
return (NULL);
}

