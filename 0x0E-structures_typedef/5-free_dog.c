#include <stdlib.h>
#include "dog.h"
#include <stdio.h>
/*betty*/void free_dog(dog_t *d)/*style*/
{
if (d)
{
free(d->name);
free(d->owner);
free(d->age);
}
}
