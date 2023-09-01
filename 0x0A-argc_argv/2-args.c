#include "main.h"
/*betty*/ int main(int argc, char *argv[]) /*style*/
{
int i;
for (i = 0; i < argc; i++)
{
printf("%s\n", argv[i]);
}
return (0);
}
