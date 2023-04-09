#include "main.h"

/**
 * _strlen -  Output length of string
 * @s: A string
 * Return: length
 */

int _strlen(char *s)
{
	int counter, count;

	 count =  0;

	for (counter = 0; s[counter] != '\0'; counter++)

		count++;


	return (count);


}
