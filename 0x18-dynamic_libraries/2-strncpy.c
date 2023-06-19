#include "main.h"
/**
 * *_strncpy - this the function
 * @dest: string destination
 * @src: string souce
 * @n: the integer
 * Return: the destination
 */
char *_strncpy(char *dest, char *src, int n)
{
	int y;

	for (y = 0; y < n && src[y] != '\0'; y++)
	{

		dest[y] = src[y];
	}
	while (y < n)
	{

		dest[y] = '\0';
		y++;
	}
	return (dest);
}
