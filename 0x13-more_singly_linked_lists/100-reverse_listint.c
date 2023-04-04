#include "lists.h"

/**
 * reverse_listint - reverses a listint_t linked list.
 * @head: head of the linked list.
 *
 * Return: a pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *curr;
	listint_t *prev;

	if (!(*head))
		return (NULL);

	curr = *head;
	prev = NULL;

	if ((*head)->next == NULL)
		return (*head);

	while ((*head)->next != NULL)
	{
		*head = (*head)->next;
		curr->next = prev;
		prev = curr;
		curr = *head;
	}
	(*head)->next = prev;
	return (*head);
}
