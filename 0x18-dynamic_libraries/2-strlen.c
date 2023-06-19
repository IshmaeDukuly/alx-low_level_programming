#include "main.h"
#include <stdio.h>

/**
 * _strlen - string function
 * @s: the parametre
 * Return: The Success
 */
int _strlen(char *s)
{
	int new_count = 0;

	while (s[new_count])
	{

		new_count++;
	}
	return (new_count);
}
