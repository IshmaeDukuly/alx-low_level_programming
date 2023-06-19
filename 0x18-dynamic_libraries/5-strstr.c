#include "main.h"

/**
 * _strstr - first occurence to be found
 * @haystack: the entire string
 * @needle: the substring
 * Return: Alwyas pointer at the beginning of the
 * subtrsing
 */

char *_strstr(char *haystack, char *needle)
{

	char *bhaystack;
	char *pneedle;

	while (*haystack != '\0')
	{
	bhaystack = haystack;
	pneedle = needle;
	while (*haystack != '\0' && *pneedle != '\0' && *haystack == *pneedle)
	{
	haystack++;
	pneedle++;
	}
	if (!*pneedle)
	return (bhaystack);
	haystack = bhaystack + 1;
	}
	return (0);
}
