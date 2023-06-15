#include "lists.h"
/**
 * dlistint_len - this return the number of
 * items in doubly linked list
 * @h: pointer
 * Return: Always return items
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *temp;
	size_t counter;
	temp = h;
	counter = 0;
	while (temp != NULL)
	{
	temp = temp->next;
	counter++;
	}
	return (counter);
}
