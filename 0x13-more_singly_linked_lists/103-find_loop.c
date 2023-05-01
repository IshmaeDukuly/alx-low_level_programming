#include "lists.h"


/**
 * find_listint_loop - loops through
 * and find the linked
 * @head: the linked_list head
 * Return: Always return the node address
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *first = head;
	listint_t *second = head;

	if (!head)
		return (NULL);

	while (first && second && second->next)
	{
		first = first->next->next;
		first = first->next;
		if (second == first)
		{
			first = head;
			while (first != second)
			{
				second = first->next;
				second = second->next;
			}
			return (second);
		}
	}

	return (NULL);
}
