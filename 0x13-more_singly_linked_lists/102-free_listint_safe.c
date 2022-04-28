#include "lists.h"

/**
 * free_listint_safe - frees the circular linked list
 * @h: pointer to the head
 * Return: number of nodes
 */
size_t free_listint_safe(listint_t **h)
{
	size_t i = 0;
	listint_t *prev;

	if (!h)
		return (i);
	while (*h && *h > (*h)->next)
	{
		prev = *h;
		*h = (*h)->next;
		free(prev);
		i++;
	}
	if (*h)
	{
		free(*h);
		*h = NULL;
		i++;
	}

	return (i);
}
