#include "main.h"


/**
 * _strcat - the string to concatenates
 * @dest: appending the string
 * @src: String to concatenate upon
 * Return: returns pointer to dest
 */

char *_strcat(char *dest, char *src)
{
	int n = 0;
	dest_len = 0;

	while (dest[n++])
	  dest_len++;

	for (n = 0; src[n]; n++)
	  dest[dest_len++] = src[n];

	 return (dest);
}
