#include "main.h"
#include <stddef.h>

/**
 * *_strchr - this is the function
 * @s: s is the character
 * @c: is also a character
 * Return: NULL, c, s etc
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
	if (c == '\0')
	{
	return (s);
	}
	else
	{
		return (NULL);
	}

}
