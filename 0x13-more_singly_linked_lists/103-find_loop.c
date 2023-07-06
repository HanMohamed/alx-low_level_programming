#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list.
 * @head: head of list
 *
 * You can only declare a maximum of two variables in your function
 *
 * Return:  The address of the node where the loop starts,
 * or NULL if there is no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *fast, *slow;

	if (!head || !head->next)
	return (NULL);

	slow = head;
	fast = head->next->next;

	while (fast != slow && fast && slow)
	{
		slow = slow->next;
		if (!fast->next)
			return (NULL);
		fast = fast->next->next;
	}

	fast = head;
	while (fast != slow)
	{
		slow = slow->next;
		fast = head->next;
	}
	return (fast);
}
