#include "lists.h"

/**
 * free_list - frees a list_t list
 * @head: head to a linked list
 *
 * a function that frees a list_t list.
 */
void free_list(list_t *head)
{
	list_t *p;

	while (head != NULL)
	{
		p = head;
		head = head->next;
		free(p->str);
		free(p);
	}
}
