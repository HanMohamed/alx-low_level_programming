#include "lists.h"

/**
 * add_nodeint_end - add a new node at the end of a listint_t list.
 *
 * @head: head of the linked list.
 * @n: value
 *
 * Return: address of the head.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node, *p;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	p = *head;

	if (p == NULL)
		*head = new_node;
	else
	{
		while (p->next != NULL)
			p = p->next;
		p->next = new_node;
	}

	return (*head);
}
