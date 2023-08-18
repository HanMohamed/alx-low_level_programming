#include "lists.h"

/**
 * create_node - create a new node
 * @n: integer
 *
 * Return: the address of the new node, or NULL if it failed
 */
dlistint_t *create_node(int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;
	new_node->prev = NULL;

	return (new_node);
}

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
 * insert_dnodeint_at_index - inserts a new node at a given position.
 * @h: doubly linked list
 * @idx: The index of the list where the new node should be added starts at 0
 * @n: integer
 *
 * Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int len, i;
	dlistint_t *new_node, *current, *prev = NULL;

	if (!h && idx != 0)
		return (NULL);

	len = dlistint_len(*h);
	if (idx > (len + 1))
		return (NULL);

	new_node = create_node(n);
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
	prev->next = new_node;
	if (current)
		current->prev = new_node;

	return (new_node);
}
