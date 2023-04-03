#include "lists.h"

/**
 * listint_len - returns the number of elements of the list
 * @h: linked list
 * Return: The elements of the linked list
 */

size_t listint_len(const listint_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
