#include "lists.h"

/**
 * free_dlistint -  frees a dlistint_t list.
 * @head: doubly linked list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current;

	if (!head)
		return;

	current = head;
	while (current)
	{
		head = head->next;
		free(current);
		current = head;
	}
	free(head);
}
