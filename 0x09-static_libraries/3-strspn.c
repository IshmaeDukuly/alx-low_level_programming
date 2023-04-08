#include "main.h"

/**
 * _strspn - The number of bytes
 * @s: Target the section
 * @accept: Reference the bytes container
 * Return: returns the amount of bytes
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int bytes = 0;
	int x;

	while (*s)
	{
		for (x = 0; accept[x]; x++)
		{
			if (accept[x] == *s)
			{
				bytes++;
				break;
			}
			else if ((accept[x + 1]) == '\0')
				return (bytes);
		}
		s++;
	}
	return (bytes);
}
