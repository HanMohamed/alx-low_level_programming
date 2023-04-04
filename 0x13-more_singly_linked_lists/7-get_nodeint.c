#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list.
 * @head: head of the linked list.
 * @index: nth node
 *
 * Return: node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	unsigned int n = 0;
	listint_t *p;

	if (!head)
		return (NULL);

	p = head;
	while (p != NULL)
	{
		n++;
		p = p->next;
	}

	if (index >= n)
		return (NULL);

	p = head;
	for (i = 0; i < index; i++)
		p = p->next;

	return (p);
}
