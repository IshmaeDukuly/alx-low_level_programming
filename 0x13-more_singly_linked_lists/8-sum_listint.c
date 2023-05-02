#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * sum_listint - the prototype
 * @head: pointer to linked_list
 * Return: Always return Success)
 */

int sum_listint(listint_t *head)
{
	int amount = 0;
	listint_t *node = head;

	while (node != NULL)
	{
		amount += node->n;
		node = node->next;
	}
	return (amount);
}
