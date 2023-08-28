#include "main.h"
/*betty*/ unsigned int _strspn(char *s, char *accept) /*style*/
{
int i = 0, f, k;
char a;
f = 0;
while (s[i] != '\0')
{
a = s[i];
f = 0;
if (accept[i] == a)
{
f = 1;
}
for (k = 0; accept[k] != '\0'; k++)
{
if (accept[k] == a)
{
f = 1;
break;
}
}
i++;
}
return (i);
}

