#include "lists.h"

/**
 * print_listint_safe - prints all the elements of a listint_t list.
 *
 * @head: a listint_t list
 *
 * Return:  the number of nodes
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t n = 0;

	if (!head)
		exit(98);

	while (head != NULL)
	{
		printf("%d\n", head->n);
		n++;
		head = head->next;
	}

	return (n);
}
