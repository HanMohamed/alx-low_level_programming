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
	const listint_t *p;

	if (head == NULL)
		return (n);

	p = head;
	while (p != NULL)
	{
		printf("[%p] %d\n", (void *)p, p->n);
		n++;

		if (p > p->next)
		{
			p = p->next;
		}
		else
		{
			printf("-> [%p] %d\n", (void *)p->next, p->next->n);
			break;
		}
	}
	return (n);
}
