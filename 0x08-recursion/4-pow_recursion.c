#include "main.h"
/*betty*/ int _pow_recursion(int x, int y) /*style*/
{
if (y < 0)
{
return (-1);
}
else if (y == 0)
{
return (1);
}
else
{
return (x * _pow_recursion(x, y - 1));
}
}
