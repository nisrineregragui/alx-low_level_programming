#include "main.h"
#include <stdlib.h>
/*create an aaray*/ char *create_array(unsigned int size, char c) /*comment*/
{
unsigned int i;
char *array = (char *)malloc(size * sizeof(char));
if (size == 0)
{
return (NULL);
}
if (array == NULL)
{
return (NULL);
}
else
{
for (i = 0; i < size; i++)
{
array[i] = c;
}
}
return (array);
}
