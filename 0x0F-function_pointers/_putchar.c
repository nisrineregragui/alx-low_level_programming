#include "function_pointers.h"
#include <unistd.h>
/*putchar*/ int _putchar(char c) /*putchar*/
{
return write(1, &c, 1);
}
