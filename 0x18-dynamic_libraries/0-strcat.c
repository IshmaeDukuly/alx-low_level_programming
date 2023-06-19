#include "main.h"
/**
 * _strcat - this is the function
 * @dest: the string destination
 * @src: string
 * Return: success
 */

char *_strcat(char *dest, char *src)
{
	char *dest_end = dest;

	while (*dest_end != '\0')
	{

		dest_end++;
	}
	while (*src != '\0')
	{
		*dest_end = '\0';
		dest_end++;
		src++;
	}
	*dest_end = '\0';
	return (dest);
}

