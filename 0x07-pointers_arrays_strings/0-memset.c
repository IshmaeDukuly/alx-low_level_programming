#include "main.h"
#include <string.h>

/**
 *_memset -  Function that fills memory with a constant byte
 *@n: fills first n
 *@s: pointed
 *@b: constant byte b
 *Return: *S
 */


char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}

