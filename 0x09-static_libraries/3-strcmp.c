#include "main.h"


/**
 * _strcmp - strcmp() this functions compare two strngs
 * @s1: first string
 * @s2: the second string
 * Return: Success
 */


int _strcmp(char *s1, char *s2)
{
	int n  = 0, dif = 0;

	while (1)
	{
		if (s1[n] == '\0' && s2[n] == '\0')
			break;
		else if (s1[n] == '\0')
		{
			dif = s2[n];
			break;
		}
		else if (s2[n] == '\0')
		{
			dif = s1[n];
			break;
		}
		else if (s1[n] != s2[n])
		{
			dif = s1[n] - s2[n];
			break;
		}
		else
			n++;

	}
	return (dif);
}
