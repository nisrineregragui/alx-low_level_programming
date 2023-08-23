#include "main.h"
/*betty*/ char *leet(char *); /*style*/
/*betty*/ char *leet(char *a) /*style*/
{
int i = 0;
while (a[i] != '\0')
{
if (a[i] == 'a' || a[i] == 'A')
{
a[i] = '4';
}
else if (a[i] == 'e' || a[i] == 'E')
{
a[i] = '3';
}
else if (a[i] == 'o' || a[i] == 'O')
{
a[i] = '0';
}
else if (a[i] == 't' || a[i] == 'T')
{
a[i] = '7';
}
else if (a[i] == 'l' || a[i] == 'L')
{
a[i] = '0';
}
i++;
}
return (a);
}
