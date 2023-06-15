#include "lists.h"

/**
 * print_dlistint - print all the items
 * of a doubl linked list
 * @h: This is the pointer to the list
 * Return: Always the # of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{

	const dlistint_t *temp;
	size_t m = 0;
	temp = h;
	while (temp != NULL)
	{

		printf("%d\n", temp->n);
		temp = temp->next;
		m++;
	}
	return (m);
}
