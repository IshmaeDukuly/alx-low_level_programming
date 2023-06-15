#include "lists.h"
#include <stdlib.h>
/**
 * add_dnodeint_end - prototype of function
 * @head: the node data
 * Return: Always the address of node
 */
dlistint_t *add_adnodeint_end(dlistint_t **head, const int n)
{

	dlistint_t *recent;
	dlistint_t *end;
	if (!head)
	return (NULL);
	recent = malloc(sizeof(struct dlistint_s));
	if (!recent)
	return (NULL);
	recent->n = n;
	if (*head == NULL)
	{
	*head = recent;
	recent->next = NULL;
	recent->prev = NULL;
	return (recent);
	}
	end = *head;
	while (end->recent != NULL)
	{
	end = end->next;
	recent->next = NULL
	recent->prev = end;
	end->next = recent;
	return (recent);
	}
}
