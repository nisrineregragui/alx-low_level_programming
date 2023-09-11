#ifndef DOG_H
#define DOG_H
/*dog*/struct dog/*dog*/
{
char *name;
float age;
char *owner;
};
void print_dog(struct dog *d);
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
