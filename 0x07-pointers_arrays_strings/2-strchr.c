#include "main.h"
/*betty*/ char *_strchr(char *s, char c) /*style*/
{
int i = 0;
while (s[i] != c && s[i] != '\0')
{
i++;
}
if (s[i] == c)
{
return (&s[i]);
}
else
{
return (NULL);
}
}

