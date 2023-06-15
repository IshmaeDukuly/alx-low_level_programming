#include "lists.h"

/**
 * sum_dlistint - the summ of the data
 * of a doubly link lst
 * @head: head of the lst
 * Return: all the sum of data
 */

int sum_dlistint(dlistint_t *head)
{

	int sum;

	sum = 0;

	if (head != NULL)
	{
		while (head->prev != NULL)
			head = head->prev;

		while (head != NULL)
		{
			sum += head->n;
			head = head->next;
		}

	}

	return (sum);
}
