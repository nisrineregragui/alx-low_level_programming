#include "lists.h"
#include <string.h>
#include <stdlib.h>
/*b*/list_t *add_node(list_t **head, const char *str)/*b*/
{
	list_t *n;
	unsigned int l = 0;

	while (str[l])
		l++;

	n = malloc(sizeof(list_t));
	if (!n)
	{
		return (NULL);
	}
	n->str = strdup(str);
	n->l = l;
	n->next = (*head);
	(*head) = n;

	return (*head);
}

