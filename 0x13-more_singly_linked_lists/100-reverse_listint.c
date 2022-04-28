#include "lists.h"
/**
 * reverse_listint - reverses linked list
 * @head: pointer to the head
 * Return: Returns the address of the first node
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *result = NULL;
	listint_t *nt;

	while (*head)
	{
		nt = (*head)->next;
		(*head)->next = result;
		result = *head;
		*head = nt;
	}
	*head = result;
	return (*head);
}
