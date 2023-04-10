#include "main.h"


/**
 * _strcat - the string to concatenates
 * @dest: appending the string
 * @src: String to concatenate upon
 * Return: returns pointer to dest
 */

char *_strcat(char *dest, char *src)
{
	int dest_num;
	int src_num;

	for (dest_num = 0; dest[dest_num] != '\0'; dest_num)


	for (src_num = 0; src[src_num] != '\0'; src_num++)
	{
		dest[dest_num + src_num] = src[src_num];
	}
	dest[dest_num + src_num] = '\0';

	return (dest);
}
