#include "main.h"
/*betty*/ char *cap_string(char *);/*style*/
/*betty*/ char *cap_string(char *a)/*style*/
{
int i = 0, cp = 1;
if (a == NULL)
{
return (NULL);
}
while (a[i] != '\0')
{
if ((a[i] >= 'a' && a[i] <= 'z') || (a[i] >= 'A' && a[i] <= 'Z'))
{
if (cp)
{
if (a[i] >= 'a' && a[i] <= 'z')
{
a[i] = a[i] - ('a' - 'A');
}
cp = 0;
}
else if (a[i] == ' ' || a[i] == '\t' || a[i] == '\n' || a[i] == ',' || a[i] == ';'
|| a[i] == '.' || a[i] == '!' || a[i] == '?' || a[i] == '"' ||
a[i] == '(' || a[i] == ')' || a[i] == '{' || a[i] == '}')
{
cp = 1;
}
}
else
{
cp = 0;
}
i++;
}
return (a);
}
