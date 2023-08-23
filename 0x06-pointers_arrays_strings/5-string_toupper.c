#include "main.h"
/*betty*/ char *string_toupper(char *a) /*style*/
{
int i = 0;
while (a[i] != '\0')
{
if (a[i] >= 'a' && a[i] <= 'z')
{
a[i] = a[i] - 32;
}
i++;
}
return (a);
}
