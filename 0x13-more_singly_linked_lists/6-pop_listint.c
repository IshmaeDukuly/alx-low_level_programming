#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * pop_listint -  this is the prototype of
 * function
 * @head: the pointer to the head
 * Return: Always return (0 Sucess)
 */

int pop_listint(listint_t **head)
{
	int output;
	listint_t *node;

	if (*head == NULL)
	{
		return (0);
	}
	output = (*head)->n;
	node = (*head)->next;
	free(*head);
	*head = node;
	return (output);
}
