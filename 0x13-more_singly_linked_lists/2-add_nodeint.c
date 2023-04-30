#include <stdlib.h>
#include "lists.h"


/**
 * add_nodeint - function
 * @head: pointer of the first node
 * @n: An integer
 * Return: Always return (Addreess)
 */


listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node;

	node = malloc(sizeof(listint_t));

	if (node == NULL)
	{
		return (NULL);
	}
	node->n = n;
	node->next = *head;
	*head = node;
	return (node);
}
