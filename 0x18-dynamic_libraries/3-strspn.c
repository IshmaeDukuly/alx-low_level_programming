#include "main.h"
/**
 * _strspn - gets the length of a substring
 * @s: string literal
 * @accept: the second string
 * Return: the segment of s which
 * consist only bytes
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int index, m, counts;

	counts = 0;
	for (index = 0; s[index] != '\0'; index++)
	{

		for (m = 0; accept[m] != '\0'; m++)
		{

			if (accept[m] == s[index])
			{
				counts++;
				break;
			}
		}
		if (accept[m] != s[index])
		{
			break;
		}
	}
	return (counts);
}
