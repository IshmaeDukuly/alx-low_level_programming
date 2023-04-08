#include "main.h"

/**
 * _memcpy - Function to copy
 * @dest: A place where the bytes are been copied
 * @src: The source byte area
 * @n: number of bytes to be copied
 * Return: Returns a pointer
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i  = 0;

	for (; i < n; i++)
	{
		dest[i] = src[i];


	}
	
	return (dest);
}
