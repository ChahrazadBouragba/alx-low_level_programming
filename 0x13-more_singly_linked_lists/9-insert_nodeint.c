#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: a pointer to the first node
 * @idx: the index of the list where the new node should be added
 * @n: data to be added to the new node
 *
 * Return: the address of the new node, or NULL if it failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *node;
listint_t *curso = *head;
unsigned int count;

if (head == NULL)
	return (NULL);

node = malloc(sizeof(listint_t));
if (node == NULL)
	return (NULL);

node->n = n;
node->next = NULL;

if (idx == 0)
{
	node->next = *head;
	*head = node;
	return (node);
}

for (count = 0; curso != NULL && count < idx - 1; count++)
	curso = curso->next;

if (curso == NULL)
{
	free(node);
	return (NULL);
}

node->next = curso->next;
curso->next = node;
return (node);
}
