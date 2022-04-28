#include "lists.h"

/**
 * find_listint_loop - finds the first member of a linked list
 * @head: pointer to the head
 * Return: number of nodes
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *slow = head;
	listint_t *fast = head;

	while (slow && fast && fast->next)
	{
		slow = slow->next;
		fast = fast->next->next;
		if (slow == fast)
		{
		       	slow = head;
			while (slow->next != fast->next)
			{
				/* slow = slow->next; */
				/* fast = fast->next; */
			}
			return (slow);
		}
	}

	return (NULL);
}
