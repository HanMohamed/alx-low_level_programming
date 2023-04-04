#include "lists.h"

/**
 * free_list - frees a list
 * @head: head of the linked list.
 */
void free_listint(listint_t *head)
{
	listint_t *p = head;

	while (head)
	{
		head = head->next;
		free(p);
		p = head;
	}
	free(head);
	free(p);
}
