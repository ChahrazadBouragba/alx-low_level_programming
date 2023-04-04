#include "lists.h"

/**
 * find_listint_loop - this function finds the loop in a linked list.
 * @head: a pointer
 * Return: address of the node, or NULL if there is no loop
 */

listint_t *find_listint_loop(listint_t *head)
{
listint_t *lento = head, *rapido = head;

if (head == NULL)
return (NULL);

while (lento && rapido && rapido->next)
{
rapido = rapido->next->next;
lento = lento->next;
if (rapido == lento)
{
lento = head;
while (lento != rapido)
{
lento = lento->next;
rapido = rapido->next;
}
return (rapido);
}
}
return (NULL);
}
