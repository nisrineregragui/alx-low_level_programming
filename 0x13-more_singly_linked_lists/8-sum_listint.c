#include "lists.h"
/*h*/int sum_listint(listint_t *head) /*m*/
{
listint_t *temp = head;
int sum = 0;
while (temp)
{
sum += temp->n;
temp = temp->next;
}
return (sum);
}
