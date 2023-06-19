#include "main.h"

/**
 * _memset - the function
 * @s: a pointer to the memory
 * @b: this will fill memory area
 * @n: the number of bytes
 * Return: Always success
 */

char *_memset(char *s, char b, unsigned int n)
{

	unsigned int m;

	for (m = 0; m < n; m++)
	{
	*(s + m) = b;
	}
	return (s);
}
