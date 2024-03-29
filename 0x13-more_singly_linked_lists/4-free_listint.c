#include "lists.h"

/**
 * free_listint - frees a list
 * @head: head of the linked list.
 */
void free_listint(listint_t *head)
{
	listint_t *p = head;

	if (head == NULL)
		return;
	while (head)
	{
		head = head->next;
		free(p);
		p = head;
	}
	free(head);
	free(p);
}
