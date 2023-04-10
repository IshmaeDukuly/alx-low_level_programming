#include "main.h"

/**
 * _strstr - The _strstr() this finds the appearence of the substring
 * @haystack: string
 * @needle: The appearance of string search in haystack
 * Return: Always Success
 */

char *_strstr(char *haystack, char *needle)
{
	int x;

	if (*needle == 0)
		return (haystack);

	while (*haystack)
	{
		x = 0;

		if (haystack[x] == needle[x])
		{
			do {
				if (needle[x + 1] == '\0')
					return (haystack);
				x++;
			} while (haystack[x] == needle[x]);
		}
		haystack++;
	}
	return ('\0');
}
