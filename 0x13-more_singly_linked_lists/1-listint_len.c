#include "lists.h"
/*b*/ size_t listint_len(const listint_t *h) /*s*/
{
size_t i = 0;
while (h)
{
i++;
h = h->next;
}
return (i);
}
