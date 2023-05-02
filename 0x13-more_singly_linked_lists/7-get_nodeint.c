#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * get_nodeint_at_index -  prototype
 * @head: pointer to the Likned_list
 * @index: index
 * Return: return 0 Success
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int node_count = 0;
	listint_t *node = head;

	while (node != NULL && node_count < index)
	{
		node = node->next;
		node_count++;
	}
	if (node_count == index && node != NULL)
	{
		return (node);
	}
	else
	{
		return (NULL);
	}
}
