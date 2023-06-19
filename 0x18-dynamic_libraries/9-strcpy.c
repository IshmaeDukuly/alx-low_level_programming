#include "main.h"
#include <stdio.h>

/**
 * _strcpy - this function copies string
 * @dest: the destination string
 * @src: the source
 * Return: Always success
 */

char *_strcpy(char *dest, char *src)
{

	int total = 0;

	while (total >= 0)
	{
	*(dest + total) = *(src + total);
	if (*(src + total) == '\0')
	break;
	total++;
	}
	return (dest);
}
