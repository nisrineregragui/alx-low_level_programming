#include "lists.h"
/*b*/listint_t *add_nodeint_end(listint_t **head, const int n)/*s*/
{
listint_t *new;
listint_t *tmp = *head;
new = malloc(sizeof(listint_t));
if (!new)
{
return (NULL);
}
new->n = n;
new->next = NULL;
if (*head == NULL)
{
*head = new;
return (new);
}
while (tmp->next)
{
tmp = tmp->next;
}
tmp->next = new;
return (new);
}

