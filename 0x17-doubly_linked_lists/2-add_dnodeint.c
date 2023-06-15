#include "lists.h"

/**
 * add_dnodeint - adds the new node right
 * at the start of dlistint_t list
 * @head: the head of the of list
 * @n: the value of the elements
 * Return: Always the address of the new element
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{

	dlistint_t *item;
	dlistint_t *h;

	item = malloc(sizeof(dlistint_t));
	if (item == NULL)
		return (NULL);

	item->n = n;
	item->prev = NULL;
		h = *head;

	if (h != NULL)
	{

		while (h->prev != NULL)
			h = h->prev;
	}
	item->next = h;

	if (h != NULL)
		h->prev = item;

	*head = item;

	return (item);
}
