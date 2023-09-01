#include "main.h"
/*betty*/ int main(int argc, char *argv[]) /*style*/
{
if (argc < 1)
{
printf("ERROR");
return (1);
}
printf("%s\n", argv[0]);
return (0);
}

