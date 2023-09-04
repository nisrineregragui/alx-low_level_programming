#include "main.h"
#include <string.h>
#include <stdlib.h>
/*comment*/char *_strdup(char *str) /*style*/
{
char *duplicate = (char *)malloc((strlen(str) + 1) * sizeof(char));
if (str == NULL)
{
return (NULL);
}
if (duplicate == NULL)
{
return (NULL);
}
strcpy(duplicate, str);
return (duplicate);
}

