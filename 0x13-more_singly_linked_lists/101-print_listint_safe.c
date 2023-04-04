#include "lists.h"
/**
 * print_listint_safe - prints a listint_t linked list
 * @head: pointer to the first node
 *
 * Return: the number of nodes in the list
 */

size_t print_listint_safe(const listint_t *head)
{
	const listint_t *lento;
	const listint_t	*rapido;
	size_t conta = 0;

	lento = rapido = head;
	while (lento != NULL && rapido != NULL && rapido->next != NULL)
	{
		conta++;
		printf("[%p] %d\n", (void *)lento, lento->n);
		lento = lento->next;
		rapido = rapido->next->next;
		if (lento == rapido)
		{
			printf("[%p] %d\n", (void *)lento, lento->n);
			exit(98);
		}
	}
	if (lento)
	{
		conta++;
		printf("[%p] %d\n", (void *)lento, lento->n);
	}
	return (conta);
}
