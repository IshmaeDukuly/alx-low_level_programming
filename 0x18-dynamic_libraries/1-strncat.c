#include "main.h"

/**
 * *_strncat - the function
 * @dest: the string destination
 * @src: the souce
 * @n: this is the integer
 * Return: 0
 */

char *_strncat(char *dest, char *src, int n)
{
	int y = 0;
	char *end = dest;

	while (*end != '\0')
	{
		end++;
	}
	while (y < n && *src != '\0')
	{

		*end = *src;
		end++;
		src++;
		y++;
	}
	*end = '\0';
	return (dest);
}
