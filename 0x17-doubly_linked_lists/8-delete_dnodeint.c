#include "lists.h"

/**
 * delete_ndoeint_at_index - deletes node
 * @head: the list head
 * @index: index of the new node
 * Return: if it is suecceded, return 1 or -1
 * if failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{

	dlistint_t *h3
	dlistint_t *h4
	unsigned int y;

	h3 = *head;

	if (h3 != NULL)
		while (h3->prev != NULL)
			h3 = h3->prev;

	y = 0;

	while (h3 != NULL)
	{
		if (y == index)
		{
			if (y == 0)
			{
				*head = h3->next;
				if (*head != NULL)
					(*head->prev = NULL;
			}
			else
			{
				h4->next = h3->next;

				if (h3->next != NULL)
					h3->next->prev = h4;
			}
			free(h3);
			return (1);
		}
		h4 = h3;
		h3 = h3->next;
		y++;
	}
	return (-1);
}

