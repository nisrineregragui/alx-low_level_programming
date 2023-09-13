#include "function_pointers.h"
/*m*/void array_iterator(int *array, size_t size, void (*action)(int))/*mm*/
{
unsigned int i;
if (array == NULL || action == NULL)
{
return;
}
for (i = 0; i < size; i++)
{
action(array[i]);
}
}
