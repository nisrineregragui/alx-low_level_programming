#include "main.h"
/*betty*/ char *rot13(char *); /*style*/
/*betty*/ char *rot13(char *a) /*dtyle*/
{
int i, j;
char data[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
char datarot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
for (i = 0; a[i] != '\0'; i++)
{
for (j = 0; j < 52; j++)
{
if (a[i] == data[j])
{
a[i] = datarot[j];
break;
}
}
}
return (a);
}
