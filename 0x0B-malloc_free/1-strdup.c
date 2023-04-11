#include "main.h"
#include <stdlib.h>


/**
 * _strdup - functions that return a pointer to a
 * newly allocated space in memory
 * @str: pointer to string
 * Return: Always NULL str
 */


char *_strdup(char *str)
{
	char *nstr;
	unsigned int len, x;

	if (str == NULL)
	{
		return (NULL);
	}

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}

	nstr = malloc(sizeof(char) * (len + 1));

	if (nstr == NULL)
	{
		return (NULL);
	}

	for (x = 0; x < len; x++)
	{
		nstr[x] = str[x];
	}
	nstr[len] = '\0';
	return (nstr);

}

