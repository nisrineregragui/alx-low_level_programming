#include "lists.h"
/*b*/listint_t *add_nodeint(listint_t **head, const int n)/*s*/
{
listint_t *new;
new = malloc(sizeof(listint_t));
if (!new)
{
return(NULL);
}
new->n = n;
new->next = *head;
*head = new;
return (new);
}

