#include "lists.h"

/**
 * free_listint2 - function that frees a list
 *
 * @head: pointer to the first node
 */

void free_listint2(listint_t **head)
{
listint_t *liberated;

if (head == NULL)
	return;

while (*head != NULL)
{
	liberated = *head;
	*head = (*head)->next;
	free(liberated);
}
*head = NULL;
}
