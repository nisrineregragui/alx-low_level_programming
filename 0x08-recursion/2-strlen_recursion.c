#include "main.h"
/*bettyy*/ int _strlen_recursion(char *s) /*style*/
{
if (*s == '\0')
{
return (0);
}
else
{
return (1 + _strlen_recursion(s + 1));
}
}
