#include "main.h"
/*l*/int clear_bit(unsigned long int *n, unsigned int index)/*m*/
{
if (index > 63)
{
return (-1);
}
*n = (~(1UL << index) & *n);
return (1);
}
