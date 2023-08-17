#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list.
 *
 * @head: doubly linked list
 * @index: is the index of the node, starting from 0
 *
 * Return: returns the nth node or if the node does not exist, return NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int len, i;
	dlistint_t *current;

	if (!head)
		return (NULL);

	len = 0;
	current = head;
	while (current)
	{
		len++;
		current = current->next;
	}

	if (index > len)
		return (NULL);

	current = head;
	for (i = 0; i < index; i++)
		current = current->next;

	return (current);
}
