#include "function_pointers.h"
/*betty*/ int int_index(int *array, int size, int (*cmp)(int)) /*style*/
{
int i;
if (size <= 0)
{
return (-1);
}
i = 0;
while(i < size && !cmp(array[i]))
{
i++;
}
if (cmp(array[i]) != 0)
{
return (i);
}
return (-1);
}
