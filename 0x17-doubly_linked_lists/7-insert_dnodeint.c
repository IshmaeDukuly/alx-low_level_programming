#include "lists.h"

/**
 * insert_dnodeint_at_index - new node at the
 * given position
 * @h: the list head
 * @idx: the new index
 * @n: Node value
 * Return: THE ADDRESS
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *next, *current;
	unsigned int y;

	if (h == NULL)
		return (NULL);
	if (idx != 0)
	{

		current = *h;
		for (y = 0; y < idx - 1 && current != NULL; y++)
			current = current->next;
		if (current == NULL)
			return (NULL);
	}
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (idx == 0)
	{
		next = *h;
		*h = new;
		new->prev = NULL;
	}
	else
	{
		new->prev = current;
		next = current->next;
		current->next = new;
	}
	new->next = next;
	if (new->next != NULL)
		next->next->prev = new;
	return (new);
}
