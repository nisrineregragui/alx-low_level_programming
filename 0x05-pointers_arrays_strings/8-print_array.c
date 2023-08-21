#include "main.h"
/*betty*/ void print_array(int *a, int n) /*style*/
{
int i = 0;
for (i = 0; i < (n - 1); i++)
{
printf("%d", a[i]);
}
if (i == (n - 1))
{
printf("%d", a[n - 1]);
}
printf('\n');
}

