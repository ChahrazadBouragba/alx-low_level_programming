#include "lists.h"

/**
 * free_listint_safe - frees a listint_t list.
 * @h: pointer to the first node.
 *
 * Return: the size of the list that was free’d
 */

size_t free_listint_safe(listint_t **h)
{
int dispar;
listint_t *node;
size_t largo = 0;

if (h == NULL || *h == NULL)
return (0);

while (*h != NULL)
{
dispar = *h - (*h)->next;
if (dispar > 0)
{
node = (*h)->next;
free(*h);
*h = node;
largo++;
}
else
{
free(*h);
*h = NULL;
largo++;
break;
}
}
*h = NULL;
return (largo);
}
