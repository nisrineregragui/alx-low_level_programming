#include "main.h"
/*betty*/ int _strcmp(char *s1, char *s2) /*style*/
{
int ls1 = 0, ls2 = 0;
while (s1[ls1] != '\0')
{
ls1++;
}
while (s2[ls2] != '\0')
{
ls2++;
}
if (ls1 > ls2)
{
return (15);
}
else if (ls1 < ls2)
{
return (-15);
}
else
{
return (0);
}
}
