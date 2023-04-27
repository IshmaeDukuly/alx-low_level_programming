#include "lists.h"

/**
 * add_node_end - function adds to the node
 * @head: points at the 1st node
 * @str: Adds string
 * Return: NULL or nothing
*/

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *temp;
	size_t str_len = 0;

	/*allocate the string length*/
	if (str == NULL)
		str_len = 0;

	/*Know the amount of the length of atring*/
	while (str[str_len] != '\0')
		str_len++;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	new_node->len = str_len;
	new_node->next = NULL;

	temp = *head;

	if (temp == NULL)
		*head = new_node;
	else
	{

		while (temp->next != NULL)
			temp = temp->next;
		temp->next = new_node;
	}

	return (*head);
}
