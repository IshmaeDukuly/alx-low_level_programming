#include "lists.h"
#include <stddef.h>


/**
 *listint_len - function
 *@h: This pointer points the head of
 *the linked_list
 *Return: Always return the number of nodes
 */


size_t listint_len(const listint_t *h)
{
	size_t lenght = 0;

	while (h != NULL)
	{
		lenght++;
		h = h->next;
	}
	return (lenght);
}
