#include "main.h"

/**
 * _strncpy - This is the function that copies a string
 * @dest: storing the string copy
 * @src: This is the source of the sting
 * @n: theis shows the maximum number to be copied
 * Return: returns dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int number;

	for (number = 0; number < n  && src[number] != '\0'; number++)
		dest[number] = src[number];

	for ( ; number < n; number++)
		dest[number] = '0';


	return (dest);
}
