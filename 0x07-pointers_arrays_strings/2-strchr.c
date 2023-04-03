#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 *_strchr - Locates a character in a string
 *@s: Pointer to the char
 *@c: char
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
