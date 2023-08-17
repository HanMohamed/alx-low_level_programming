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
