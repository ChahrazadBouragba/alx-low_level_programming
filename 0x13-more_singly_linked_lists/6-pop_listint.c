#include "lists.h"

/**
 * pop_listint - deletes the head node
 * @head: pointer to the first node
 *
 * Return: the head node’s data (n), 0 if the list is empty
 */

int pop_listint(listint_t **head)
{
listint_t *wipe;
int n;

if (head == NULL || *head == NULL)
	return (0);

n = (*head)->n;

wipe = *head;
*head = (*head)->next;

free(wipe);

return (n);
}
