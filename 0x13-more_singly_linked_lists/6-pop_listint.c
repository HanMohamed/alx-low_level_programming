#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: head of the linked list.
 *
 * Return: head node’s data (n).
 */
int pop_listint(listint_t **head)
{
	int n = 0;
	listint_t *p;

	if (!*head)
		return (n);

	p = *head;
	n = (*head)->n;
	*head = (*head)->next;
	free(p);

	return (n);
}
