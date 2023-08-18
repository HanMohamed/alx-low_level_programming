#include "lists.h"

/**
 * dlistint_len - List length
 * @h: doubly linked list
 *
 * Return: the number of elements in a linked dlistint_t list.
 */

size_t dlistint_len(const dlistint_t *h)
{
	int size = 0;

	if (!h)
		return (size);

	while (h)
	{
		size++;
		h = h->next;
	}
	return (size);
}

/**
 * delete_dnodeint_at_index - deletes the node at index of a dlistint_t list.
 *
 * @head: doubly linked list
 * @index: index of the list where the new node should be deleted, starts at 0
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{

	unsigned int len, i;
	dlistint_t *prev, *current, *next;

	if (!head || !*head)
		return (-1);

	len = dlistint_len(*head);
	if (index > len)
		return (-1);

	current = *head;
	if (index == 0)
	{
		*head = (*head)->next;
		if (*head)
			(*head)->prev = NULL;
		free(current);
		return (1);
	}

	for (i = 0; i < index; i++)
	{
		prev = current;
		current = current->next;
	}

	if (index == len)
	{
		prev->next = NULL;
		free(current);
		return (1);
	}

	next = current->next;
	prev->next = next;
	if (next)
		next->prev = prev;
	free(current);
	return (1);
}
