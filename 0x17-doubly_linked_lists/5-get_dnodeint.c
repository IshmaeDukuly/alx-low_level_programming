#include "lists.h"

/**
 * get_dnodeint_at_index - return the node
 * dlistint
 * @head: the list head
 * @index: the node index
 * Return: something
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int n;

	if (head == NULL)
		return (NULL);

	n = 0;

	while (head != NULL)
	{
		if (n == index)
			break;
		head = head->next;
		n++;
	}

	return (head);
}
