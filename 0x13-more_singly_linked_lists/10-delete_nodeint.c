# include "lists.h"


/**
 * delete_nodeint_at_index - the prototype of
 * the function
 * @head: Points to the head
 * @index: Index of the node
 * Return: Alwyay 1 or -1
 */


int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int node_count = 0;
	listint_t *node, *prenode;

	if (head == NULL || *head == NULL)
	{
		return (-1);
	}
	if (index == 0)
	{
		node = *head;
		*head = (*head)->next;
		free(node);
		return (1);
	}
	prenode = *head;
	node = (*head)->next;
	while (node != NULL && node_count < (index - 1))
	{
		prenode = node;
		node = node->next;
		node_count++;
	}
	if (node_count == (index - 1) && node != NULL)
	{
		prenode->next = node->next;
		free(node);
		return (1);
	}
	else
	{
		return (-1);
	}
}
