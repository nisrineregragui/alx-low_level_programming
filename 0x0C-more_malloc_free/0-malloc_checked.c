#include <stdlib.h>
#include "main.h"
/*betty*/ void *malloc_checked(unsigned int b) /*style*/
{
void *ptr;
ptr = malloc(b);
if (ptr == NULL)
{
exit(98);
}
return (ptr);
}
