#include "function_pointers.h"
/*comment*/void print_name(char *name, void (*f)(char *))/*comment*/
{
char *p;
(void)f;
if (name == NULL || f == NULL)
{
return;
}
p = name;
f(p);
}
