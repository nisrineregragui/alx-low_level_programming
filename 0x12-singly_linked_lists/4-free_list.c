#include "lists.h"
#include <stdlib.h>
/*b*/void free_list(list_t *head)/*s*/
{
	list_t *temp;

	while (head)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}


