#include "lists.h"
/*b*/listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)/*s*/
{
listint_t *tmp = head;
unsigned int i;
i = 0;
while (tmp && i < index)
{
tmp = tmp->next;
i++;
}
return (tmp ? tmp : NULL);
}

