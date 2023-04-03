#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 *strch - Locates a character in a string
 *
 *Return: String
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (*s == c)
	{
		return (s);
	}
return (0);
}
