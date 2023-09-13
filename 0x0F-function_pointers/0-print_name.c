#include "function_pointers.h"
/*comment*/void print_name(char *name, void (*f)(char *))/*comment*/
{
char *p;
(void)f;
p = name;
f(p);
}
