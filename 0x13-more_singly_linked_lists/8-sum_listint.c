#include "lists.h"

/**
 * sum_listint - returns the sum of all the data (n) of a linked list
 * @head: a pointer to the first node in the linked list
 *
 * Return: the calculated sum
 */

int sum_listint(listint_t *head)
{
int calc = 0;
listint_t *node = head;

while (node != NULL)
{
	calc += node->n;
	node = node->next;
}

return (calc);
}
