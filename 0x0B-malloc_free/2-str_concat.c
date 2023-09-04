#include "main.h"
#include <stdlib.h>
#include <string.h>
/*comment*/ char *str_concat(char *s1, char *s2) /*comment*/
{
char *concat = (char *)malloc(((strlen(s1)) + strlen(s2) + 1));
if (concat == NULL)
{
return (NULL);
}
strcpy(concat, s1);
strcat(concat, s2);
return (concat);
}
