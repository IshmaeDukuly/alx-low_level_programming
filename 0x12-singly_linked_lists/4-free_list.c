#include "lists.h"

/**
 * free_list - single list link
 *
 * @head: This  points the to 1st node
 * Return: Always return 0 (Success)
*/

void free_list(list_t *head)
{
	list_t *current;

	while ((current = head) != NULL)
	{
		head = head->next;
		free(current->str);
		free(current);
	}
}
