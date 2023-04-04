#include "lists.h"

/**
 * free_listint2 - frees a list
 * @head: head of the linked list.
 */
void free_listint2(listint_t **head)
{
	listint_t *p;

	if (head == NULL || *head == NULL)
		return;

	p = *head;
	while (p)
	{
		*head = (*head)->next;
		free(p);
		p = *head;
	}
	(*head)->next = NULL;
	*head = NULL;
}
