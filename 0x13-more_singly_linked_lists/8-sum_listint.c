#include "lists.h"

/**
 * sum_listint - sums all data of a given linked list
 * @head: a pointer to the head
 * Return: the sum of data part of the linked list
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
