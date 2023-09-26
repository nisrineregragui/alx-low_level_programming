#include "lists.h"
/*b*/ void free_listint2(listint_t **head) /*s*/
{
listint_t *tmp;
if (head == NULL)
{
return (NULL);
}
while (*head)
{
tmp = (*head)->next;
free(*head);
*head = tmmp;
}
*head = NULL;
}

