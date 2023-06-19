#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - search for a string
 * @s: the input string
 * @accept: string to be located
 * Return: Always a pointer
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int index, counter;

	for (index = 0; s[index] != '\0'; index++)
	{
		for (counter = 0; accept[counter] != '\0'; counter)
		{
			if (accept[counter] == s[index])
			{
			return (&s[index]);
			}
		}
	}
	return (NULL);
}
