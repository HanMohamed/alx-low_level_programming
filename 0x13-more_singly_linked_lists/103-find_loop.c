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
	int is_circle;

	if (!head || !head->next)
	return (NULL);

	slow = head;
	fast = head->next->next;

	is_circle = 0;
	while (fast && slow && fast->next)
	{
		slow = slow->next;
		fast = fast->next->next;
		if (slow == fast)
		{
			is_circle = 1;
			break;
		}
	}
	if (is_circle == 0)
		return (NULL);

	fast = head;
	while (fast != slow)
	{
		slow = slow->next;
		fast = head->next;
	}
	return (fast);
}
