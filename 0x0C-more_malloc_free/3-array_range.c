#include "main.h"
#include <stdlib.h>
/*zz*/int *array_range(int min, int max)/*ss*/
{
int *ptr;
int i, size;
if (min > max)
{
return (NULL);
}
size = max - min + 1;
ptr = malloc(sizeof(int) * size);
if (ptr == NULL)
{
return (NULL);
}
for (i = 0; min <= max; i++)
{
ptr[i] = min++;
}
return (ptr);
}

