#include "main.h"
/*betty*/ int _sqrt_recursion(int n) /*k*/
{
if (n < 0)
{
return (-1);
}
else
{
return (_sqrt_recursion1(n, 0));
}
/*s*/int _sqrt_recursion1(int n, int i)/*s*/
{
if (i * i > n)
{
return (-1);
}
if (i * i == n)
{
return (i);
}
return (_sqrt_recursion1(n, i + 1));
}
