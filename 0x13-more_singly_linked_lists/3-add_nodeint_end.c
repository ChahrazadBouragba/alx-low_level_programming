#include "lists.h"

/**
 * add_nodeint_end - add a node at the end of the list
 * @head: pointer to the first node
 * @n: value to store in new element
 * Return: address of the new element, NULL if it failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *node;
listint_t *lastNode = *head;

node = malloc(sizeof(listint_t));
if (node == NULL)
	return (NULL);

node->n = n;
node->next = NULL;

if (*head == NULL)
{
	*head = node;
	return (node);
}

while (lastNode->next != NULL)
	lastNode = lastNode->next;

lastNode->next = node;

return (node);
}
