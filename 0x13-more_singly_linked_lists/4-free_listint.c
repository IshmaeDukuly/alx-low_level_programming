#include <stdlib.h>
#include "lists.h"


/**
 * free_listint - function
 * @head: The pointer of head of the linked_list
 * Return: Always return (void or Zero)
 */


void free_listint(listint_t *head)
{
	listint_t *node, *before_node;

	node = head;

	while (node != NULL)
	{
		before_node = node->next;
		free(node);
		node = before_node;
	}
}
