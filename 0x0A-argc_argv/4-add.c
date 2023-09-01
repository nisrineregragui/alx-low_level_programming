#include "main.h"
#include <ctype.h>
#include <stdlib.h>
/*betty*/ int main(int argc, char *argv[]) /*styme*/
{
int i, s, a, j;
if (argc == 1)
{
printf("0\n");
return (0);
}
s = 0;
i = 1;
while (i < argc)
{
for (j = 0; argv[i][j] != '\0'; j++)
{
if (isdigit(argv[i][j]))
{
a = atoi(&argv[i][j]);
s += a;
}
else
{
printf("Error\n");
return (1);
}
}
i++;
}
printf("%d\n", s);
return (0);
}
