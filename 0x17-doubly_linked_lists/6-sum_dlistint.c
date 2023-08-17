#include "lists.h"

/**
 * sum_dlistint -  sum of all the data (n) of a dlistint_t linked lis
 * @head:
 * if the list is empty, return 0
 * Return: returns the sum of all the data (n) of a dlistint_t linked list.
 */
int sum_dlistint(dlistint_t *head)
{

	int sum = 0;
	dlistint_t *current;

	if (!head)
		return (sum);

	current = head;
	while (current)
	{
		sum += current->n;
		current = current->next;
	}
	return (sum);
}
