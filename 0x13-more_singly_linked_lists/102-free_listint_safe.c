#include "lists.h"

/**
 * free_list_safe - frees a list
 * @head: head of the linked list.
 */
size_t free_listint_safe(listint_t **head)
{
	listint_t *p = *head;
	size_t n = 0;

	if (*head == NULL)
		return (0);
	while (*head)
	{
		*head = (*head)->next;
		free(p);
		p = *head;
		n++;
	}
	free(*head);
	free(p);
	return (n);
}
