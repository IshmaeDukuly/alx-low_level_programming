#include "main.h"
/**
 * _strcpy - paste the copy string
 * @dest: The destination
 * @src: The source
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int n = 0;

	while (*(src + n) != '\0')
	{
	
		*(dest + n) = *(src + n);
		n++;
	}

	*(dest + n) = '\0';

	return (dest);
}
