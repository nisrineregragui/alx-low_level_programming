#include "lists.h"
/*b*/ int pop_listint(listint_t **head) /*h*/
{
int i;
listint_t *tmp;
if (!head || !*head)
{
return (0);
}
i = (*head)->n;
tmp = (*head)->next;
free(*head);
*head = tmp;
return (i);
}
