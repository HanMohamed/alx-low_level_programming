#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: head to a linked list
 * @str: string element to store
 *
 * str needs to be duplicated
 *
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *p;
	int str_len;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);

	for (str_len = 0; str[str_len]; str_len++)
		;

	new_node->len = str_len;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (*head);
	}

	p = *head;
	while (p->next != NULL)
		p = p->next;
	p->next = new_node;

	return (new_node);
}
