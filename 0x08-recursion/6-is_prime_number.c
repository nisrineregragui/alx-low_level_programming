#include "main.h"
/*betty*/ int prime(int n, int i)/*style*/
{
if (i == 1)
{
return (1);
}
if (n % i == 0 && i > 0)
{
return (0);
}
return (prime(n, i - 1));
}
/*betty*/int is_prime_number(int n)/*style*/
{
if (n <= 1)
{
return (0);
}
return (prime(n, n - 1));
}

