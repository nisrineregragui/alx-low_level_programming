#include "main.h"
/*betty*/ int _strlen(char *s) /*style*/
{
int c = 0;
while (*s != '\0')
{
s++;
c++;
}
return (c);
}
