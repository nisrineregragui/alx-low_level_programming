#include "main.h"
/*betty*/ void reverse_array(int *a, int n) /*style*/
{
int i = 0, j = n - 1, tmp;
while (i < j)
{
tmp = a[i];
a[i] = a[j];
a[j] = tmp;
j--;
i++;
}
}
