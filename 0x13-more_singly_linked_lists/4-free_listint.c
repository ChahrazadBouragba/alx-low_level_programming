#include "lists.h"

/**
 * free_listint - a function that frees a linked list
 *
 * @head: pointer to to the first node
 */

void free_listint(listint_t *head)
{
listint_t *liberated;

while (head)
{
	liberated = head;
	head = head->next;
	free(liberated);
}
}
