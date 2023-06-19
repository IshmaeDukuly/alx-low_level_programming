#include "main.h"
/**
 * _islower - only the lowercase keys
 * are to be printed
 * @c: this use for argument
 * Return: 1 or 0
 */

int _islower(int c)
{
	if (c > 96 && c < 123)
	return (1);
	else
	return (0);
}
