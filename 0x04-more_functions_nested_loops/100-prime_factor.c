#include "main.h"
/*betty*/ int main(void) /*style*/
{
int max = 1, p, i, k = 0, n = 1231952;
float l;
while (k == 1)
{
i = 2;
while (n % i != 0 && i < n / 2)
{
i++;
}
p = i;
k = n % i;
l 
n = n / i;
printf("p=%d\n", p);
if (max < p && k != 0)
{
max = p;
}
}
max = max / 2;
printf("%d\n", max);
return (0);
}
