#include "main.h"

/**
 * _strstr - The _strstr() this finds the appearence of the substring
 * @haystack: string
 * @needle: The appearance of string search in haystack
 * *Return: substring
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int bytes = 0;
	int y;

	while (*s)
	{
		for (y = 0; accept[y]; y++)
		{
			if (accept[y] == *s)
			{
				bytes++;
				break;
			}
			else if ((accept[y + 1]) == '\0')
				return (bytes);
		}
		s++;
	}
	return (bytes);
}
