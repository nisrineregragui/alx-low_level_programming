#include "main.h"
/*c*/ int _isalpha(int c) /*s*/
{
if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
{
return (1);
}
else
return (0);
}
