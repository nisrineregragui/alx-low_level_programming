#include "3-calc.h"
#include <stdio.h>
/*m*/int (*get_op_func(char *s))(int, int)/*m*/
{
int i;
op_t ops[] = {
{"+", op_add},
{"-", op_sub},
{"*", op_mul},
{"/", op_div},
{"%", op_mod},
{NULL, NULL}
};
i = 0;
while (ops[i].op != NULL && *(ops[i].op) != *s)
{
i++;
}
return (ops[i].f);
}

