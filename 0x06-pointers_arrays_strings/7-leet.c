#include "main.h"
/*betty*/ char *leet(char *); /*style*/
/*betty*/ char *leet(char *a) /*style*/
{
int i, j;
char let[] = "aAeEoOtTlL";
char num[] = "4433007711";
for (i = 0; a[i] != '\0'; i++)
{
for (j = 0; j < '\0'; j++)
{
if (a[i] == let[j])
{
a[i] = num[j];
}
}
}
return (a);
}

