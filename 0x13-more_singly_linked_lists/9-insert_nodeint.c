#include "lists.h"

/**
 * create_node - create a new node
 * @n: value
 *
 * Return: address of new node
 */
listint_t *create_node(int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	return (new_node);
}

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

	if (!*head && idx == 0)
	{
		*head = create_node(n);
		return (*head);
	}

	current = *head;

	new_node = create_node(n);
	if (idx == 0)
	{
		*head = new_node;
		(*head)->next = current;
		return (*head);
	}

	while (i < idx && current->next != NULL)
	{
		current = current->next;
		i++;
	}

	if (i == idx)
	{
		if (current->next == NULL)
		{
			current->next = new_node;
			return (new_node);
		}
		new_node->next = current->next;
		current->next = new_node;
		return (new_node);
	}
	return (NULL);

}
