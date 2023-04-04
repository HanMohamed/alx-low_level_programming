#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 * @head: head of the linked list.
 * @idx: he index of the list where the new node should be added.
 * @n: value of n
 *
 * if it is not possible to add the new node at index idx
 * do not add the new node and return NULL
 *
 * Return: the address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *current;
	listint_t *new_node;
	unsigned int i = 0;

	if (!*head)
		return (NULL);

	current = *head;
	while (i < idx)
	{
		if (!current)
			return (NULL);
		current = current->next;
		i++;
	}

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = current->next;
	current->next = new_node;

	return (new_node);
}
