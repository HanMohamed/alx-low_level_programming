#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list.
 * @head: doubly linked list
 * @n: integer
 *
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *current;

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;
	new_node->prev = NULL;

	if (!head || !*head)
	{
		*head = new_node;
		return (new_node);
	}

	current = *head;
	while (current->next)
		current = current->next;

	new_node->prev = current;
	current->next = new_node;
	return (new_node);
}
