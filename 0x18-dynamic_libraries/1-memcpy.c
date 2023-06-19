#include "main.h"

/**
 * * _memcpy - this the function
 * @dest: the string destination
 * @src: the string source
 * @n: the # of bytes
 * Return: Always success
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *h = dest;

	while (n--)

	{
		*h++ = *src++;

	}
	return (dest);
}
