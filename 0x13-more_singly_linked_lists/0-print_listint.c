#include "lists.h"
/*comment*/size_t print_listint(const listint_t *h)/*comment*/
{
size_t i = 0;
while (h)
{
printf("%d\n", h->n);
i++;
h = h->next;
}
return (i);
}

