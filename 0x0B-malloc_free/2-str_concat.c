#include "main.h"
#include <stdlib.h>
#include <string.h>
/*comment*/ char *str_concat(char *s1, char *s2) /*comment*/
{
char *concat = (char *)malloc(((strlen(s1)) + strlen(s2) + 1));
char *empty = (char *)malloc(1);
if (empty == NULL)
{
return (NULL);
}
else
{
empty[0] = '\0';
return (empty);
}
if (concat == NULL)
{
return (NULL);
}
if (s1 != NULL)
{
strcpy(concat, s1);
}
else
{
concat[0] = '\0';
}
if (s2 != NULL)
{
strcat(concat, s2);
}
return (concat);
}
