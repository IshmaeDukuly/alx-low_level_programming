#include "lists.h"
#include <stdlib.h>
/** Author: Ishamel Dukuly */
/**
 * add_dnodeint_end - prototype of function
 * @head: the node data
 * @n: elemetsvalue
 * Return: Always the address of node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{

	dlistint_t *h;
	dlistint_t  *my_new;

	my_new = malloc(sizeof(dlistint_t));
	if (my_new == NULL)
		return (NULL);

	my_new->n = n;
	my_new->next = NULL;

	h = *head;

	if (h != NULL)
	{

		while (h->next != NULL)
			h = h->next;
		h->next = my_new;
	}
	else
	{
		*head = my_new;
	}
	my_new->prev = h;

	return (my_new);
}
