#include "main.h"


/**
 * 0-create_array.c - creates an array of chars,
 * and initializes with a specific char
 * @c: the char
 * @size: an unsigned character
 * Return: Always 0 Success
 */


char *create_array(unsigned int size, char c)
{
	unsigned int n;
	char *array = (char *) malloc(size * sizeof(char));

	if (size == 0)
	{
		return (NULL);
	}
	if (array == NULL)
	{
		return (NULL);
	}
	for (n = 0; n < size; n++)
	{
		array[n] = c;
	}
	return (array);
}
