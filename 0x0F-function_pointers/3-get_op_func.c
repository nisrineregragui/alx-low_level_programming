#include <stdio.h>
int (*get_op_func(char *s))(int, int)
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
for (i = 0; i < 5; i++) 
{
if (s[0] == ops[i].op && s[1] == '\0')
{
return (ops[i].func);
}
}
return (NULL);
}
