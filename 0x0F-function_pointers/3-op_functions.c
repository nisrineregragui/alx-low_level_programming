#include <stdio.h>
#include "3-calc.h"
int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);
/*add*/int op_add(int a, int b)/*+*/
{
return (a + b);
}
/*-*/int op_sub(int a, int b)/*s*/
{
return (a - b);
}
/*mul*/ int op_mul(int a, int b) /*d*/
{
return (a * b);
}
/*div*/ int op_div(int a, int b) /*s*/
{
return (a / b);
}
/*op*/int op_mod(int a, int b); /*op*/
int op_mod(int a, int b)
{
return (a % b);
}
