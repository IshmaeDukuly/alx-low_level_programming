#include "main.h"
#include <stdio.h>

/**
 * wordnos - word counts in a string
 * @s: poinet to the string
 * Return: Always 0 (Succces)
 */



int wordnos(char *s)
{
	int flag, c, w;

	flag = 0;
	w = 0;

	for (c = 0; s[c] != '\0'; c++)
	{
		if (s[c] == ' ')
			flag = 0;
		else if (flag == 0)
		{
			flag = 1;
			w++;
		}
	}

	return (w);
}


/**
 * strtow - splits the string
 * @str: split string
 * Return: Point to any array
 */

char **strtow(char *str)
{
	char **matrix, *tmp;
	int n, m = 0, len = 0, words, c = 0, start, end;

	while (*(str + len))
		len++;
	words = wordnos(str);
	if (words == 0)
		return (NULL);

	matrix = (char **) malloc(sizeof(char *) * (words + 1));
	if (matrix == NULL)
		return (NULL);

	for (n = 0; n <= len; n++)
	{
		if (str[n] == ' ' || str[n] == '\0')
		{
			if (c)
			{
				end = n;
				tmp = (char *) malloc(sizeof(char) * (c + 1));
				if (tmp == NULL)
					return (NULL);
				while (start < end)
					*tmp++ = str[start++];
				*tmp = '\0';
				matrix[m] = tmp - c;
				m++;
				c = 0;
			}
		}
		else if (c++ == 0)
			start = n;
	}

	matrix[m] = NULL;

	return (matrix);
}
