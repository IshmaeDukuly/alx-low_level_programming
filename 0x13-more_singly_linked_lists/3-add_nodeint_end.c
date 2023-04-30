#include <stdio.h>
#include "lists.h"


/**
 * add_nodeint_end - function
 * @head: points to the pointer of
 * the linked_list
 * @n: An integer
 * Return: Always return the (address)
 */


listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node, *endnode;

	node = malloc(sizeof(listint_t));

	if (node == NULL)
	{
		return (NULL);
	}
	node->n = n;
	node->next = NULL;
	if (*head == NULL)
	{
		*head = node;
	}
	else
	{
		endnode = *head;
		while (endnode->next != NULL)
		{
			endnode = endnode->next;
		}
		endnode->next = node;
	}
	return (node);
}
