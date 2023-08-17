#include <stdio.h>
/*betty*/ int main(void) /*style*/
{
int i;
for (i = 1; i <= 100 ; i++)
{
if (i % 3 != 0 && i % 5 != 0)
{
printf("%d ", i);
}
else if (i % 3 == 0)
{
printf("Fizz ");
}
else if (i % 3 == 0 && i % 5 == 0)
{
printf("FizzBuzz ");
}
else
{
printf("Buzz ");
}
}
printf("\n");
return (0);
}
