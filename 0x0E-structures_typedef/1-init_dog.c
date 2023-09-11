#include "dog.h"
/*s*/void init_dog(struct dog *d, char *name, float age, char *owner);/*s*/
/*s*/void init_dog(struct dog *d, char *name, float age, char *owner)/*l*/
{
d->name = name;
d->age = age;
d->owner = owner;
}
