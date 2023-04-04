#include "lists.h"

/**
 * reverse_listint - reverses a listint_t linked list.
 * @head: a pointer to the first node
 * Return: a pointer to the first node of the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
listint_t *previo = NULL, *nuevo = NULL;

while (*head != NULL)
{
	nuevo = (*head)->next;
	(*head)->next = previo;
	previo = *head;
	*head = nuevo;
}

*head = previo;

return (*head);
}
