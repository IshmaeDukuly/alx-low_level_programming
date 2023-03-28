#include "main.h"

/**
 * 3-puts.c - A function that prints string in reverse, follow by a new line
 * @str: String
 * Return: Always 0.
 */

void _put(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}

	_putchar('\n');

	return (0);
}

