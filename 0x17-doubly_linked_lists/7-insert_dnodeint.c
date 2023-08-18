#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position.
 * @h: doubly linked list
 * @idx: The index of the list where the new node should be added starts at 0
 * @n: integer
 *
 * Return:  the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int len, i;
	dlistint_t *new_node;
	dlistint_t *current, *prev;

	if (!h && idx != 0)
		return (NULL);

	len = 0;
	current = *h;
	while (current)
	{
		len++;
		current = current->next;
	}

	if (idx > (len + 1))
		return (NULL);

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;
	new_node->prev = NULL;

	if (!*h)
	{
		*h = new_node;
		return (new_node);
	}

	if (idx == 0)
	{
		new_node->next = *h;
		(*h)->prev = new_node;
		*h = new_node;
		return (new_node);
	}

	current = *h;
	prev = NULL;

	for (i = 0; i < idx; i++)
	{
		prev = current;
		current = current->next;
	}

	new_node->next = current;
	new_node->prev = prev;
	current->prev = new_node;
	prev->next = new_node;

	return (current);
}
