#include <stdio.h>
#include "lists.h"


/**
 * print_listint - function
 * @h: Header ponter
 * Return: Always rertun number of nodes
 */


size_t print_listint(const listint_t *h)
{
	size_t node = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		node++;
	}
	return (node);
}
