#include "lists.h"
/*b*/void free_listint(listint_t *head)/*s*/
{
listint_t *temp;
while (head)
{
temp = head->next;
free(head);
head = temp;
}
}
