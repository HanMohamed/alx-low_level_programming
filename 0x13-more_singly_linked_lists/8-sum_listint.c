#include "lists.h"

/**
 * sum_listint - returns the sum of all the data (n)
 * of a listint_t linked list.
 * @head: head of the linked list.
 *
 * Return: sum of all elements
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *p;

	if (!head)
		return (0);

	p = head;
	while (p != NULL)
	{
		sum += p->n;
		p = p->next;
	}

	return (sum);
}

