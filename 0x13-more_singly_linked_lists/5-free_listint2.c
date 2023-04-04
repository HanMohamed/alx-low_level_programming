#include "lists.h"

/**
 * free_listint2 - frees a list
 * @head: head of the linked list.
 */
void free_listint2(listint_t **head)
{
	listint_t *p = *head;

	while (head)
	{
		*head = (*head)->next;
		free(p);
		p = *head;
	}
	free(head);
	free(p);
}
