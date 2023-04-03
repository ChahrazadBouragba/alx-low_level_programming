#include "lists.h"

/**
 * get_nodeint_at_index -  returns the nth node of a linked list
 * @head: pointer to the first node
 * @index: the node index
 *
 * Return: pointer to the index, or NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int i = 0;
listint_t *node = head;

for (i = 0; node != NULL && i < index; i++)
{
	node = node->next;
}
if (node != NULL)
{
	return (node);
}
else
{
	return (NULL);
}

}
