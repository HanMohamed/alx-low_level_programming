#include "lists.h"

/**
 * add_node - adds a new node
 * @head: Pointer to head
 * @str: String element to be added
 *
 * A function that adds a new node at the beginning of a list_t list.
 *
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	int str_len;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);

	for (str_len = 0; str[str_len]; str_len++)
		;

	new_node->len = str_len;
	new_node->next = *head;
	*head = new_node;

	return (*head);
}
