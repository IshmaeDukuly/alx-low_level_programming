#include "lists.h"

/**
 * free_dlistint - this frees the dlistint
 * @head: the head of the lst
 * Return: return nothing
 */
void free_dlistint(dlistint_t *head)
{

	dlistint_t *tempe;

	if (head != NULL)
		while (head->prev != NULL)
			head = head->prev;

	while ((tempe = head) != NULL)
	{
		head = head->next;
		free(tempe);
	}
}
