#include "lists.h"

/**
 * reverse_listint - the prototype
 * @head: Points to the head
 * Return: reverse
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prenode = NULL, *node = NULL;

	if (head == NULL || *head == NULL || (*head)->next == NULL)
	{
		return (*head);
	}
	while (*head != NULL)
	{
		node = (*head)->next;
		(*head)->next = prenode;
		prenode = *head;
		*head = node;
	}
	return (prenode);
}
