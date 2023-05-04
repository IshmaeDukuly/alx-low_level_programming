#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - convert a binary number
 * @b: char the string
 * Return: the converted number, or 0 if b is
 * NULL or contains non-binary digits
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int total = 0, power = 1;
	int len;

	if (b == NULL)
		return (0);

	for (len = 0; b[len]; len++)
	{
		if (b[len] != '0' && b[len] != '1')
			return (0);
	}

	for (len--; len >= 0; len--, power *= 2)
	{
		if (b[len] == '1')
			total += power;
	}

	return (total);
}

