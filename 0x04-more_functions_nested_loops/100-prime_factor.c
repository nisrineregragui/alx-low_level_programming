#include "main.h"
/*betty*/ int main(void) /*style*/
{
long int n = 612852475143, i, p = -1;
while (n % 2 == 0)
{
p = 2;
n = n / 2;
}
for (i = 3; i <= i / 2; i = i + 2)
{
while (n % i == 0)
{
p = i;
n = n / i;
}
}
if (n > 2)
{
p = n;
}
printf("%ld\n", p);
return (0);
}

