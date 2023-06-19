#include "main.h"

/**
 * _isalpha - lowercase and uppercase
 * @c: int of both lowercase and uppercase
 * Return: either one or zero
 */
int _isalpha(int c)
{
	if ((c > 96 && c < 123) || (c > 64 && c < 91))
	return (1);
	else
	return (0);
}
