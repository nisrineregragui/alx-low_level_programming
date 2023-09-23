#include "lists.h"
#include <stdlib.h>
/*b*/size_t list_len(const list_t *h)/*style*/
{
	size_t i = 0;

	while (h)
	{
		i++;
		h = h->next;
	}
	return (i);
}

