#include "main.h"
/*betty*/ unsigned int _strspn(char *s, char *accept) /*style*/
{
int i = 0, f, k;
char a;
f = 0;
while (accept[i] != '\0' && f == 0)
{
a = accept[i];
for (k = 0; s[k] != '\0'; k++)
{
if (s[k] == a)
{
f = 1;
break;
}
}
i++;
}
return (k);
}

