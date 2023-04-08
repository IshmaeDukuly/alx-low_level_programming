#include "main.h"

/**
 * _strncat - Concatenates two strings
 * @dest: Append the String
 * @src: complete String at the end of the dest
 * @n: integer value to index
 * Return: string
 */

char *_strncat(char *dest, char *src, int n)
{
	int num = 0, dest_len = 0;

	while (dest[num++])
		dest_len++;

	for (num = 0; src[num]&& num < n; num++)
		dest[dest_len++] = src[num];

	return (dest);
}
