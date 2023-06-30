#include "lists.h"

void free_list(list_t *head)
{
	list_t *p;

	if (head == NULL)
		return;

	p = head;
	while (p)
	{
		head = head->next;
		free(p->str);
		free(p);
		p = head;
	}
}
