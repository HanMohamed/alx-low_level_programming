#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index
 * of a listint_t linked list.
 * @head: head of the linked list.
 * @index: index of the node that should be deleted. Index starts at 0
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current = *head;
	listint_t *prev;
	unsigned int i = 0;

	if (!(*head))
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(current);
		return (1);
	}

	while (i < index)
	{
		prev = current;
		current = current->next;
		if (current == NULL)
			return (-1);
		i++;
	}
	prev->next = current->next;
	free(current);

	return (1);
}
