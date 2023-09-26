#include "lists.h"
/**
 * delete_nodeint_at_index - deletes a node in a linked list at a certain index
 * @head: pointer to the first element in the list
 * @index: index of the node to delete
 *
 * Return: 1 (Success), or -1 (Fail)
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *temp = *head, *new;
unsigned int i;
new = malloc(sizeof(listint_t));
if (!new || !head)
{
return (NULL);
}
new->n = n;
new->next = NULL;
if (idx == 0)
{
new->next = *head;
*head = new;
return (new);
}
for (i = 0; temp && i < idx; i++)
{
if (i == idx - 1)
{
new->next = temp->next;
temp->next = new;
return (new);
}
else
{
temp = temp->next;
}
}
return (NULL);
}
