#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index index of a linked list
 * @head: pointer to the first node
 * @index: the index of the node that should be deleted
 *
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *node = *head;
listint_t *curso = NULL;

if (*head == NULL)
	return (-1);

if (index == 0)
{
	*head = node->next;
	free(node);
	return (1);
}
unsigned int i;

for (i = 0; i < index - 1 && node != NULL; i++)
{
node = node->next;
}

if (!node || !(node->next))
	return (-1);


curso = node->next;
node->next = curso->next;
free(curso);

return (1);
}
