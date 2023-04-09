#include "main.h"

/**
 * _isdigit -verifeis if the char
 * @c: test result
 * Return: Return a value
 */

int _isdigit(int c)
{
	if ((c >= 48) && (c <= 57))
	{
		return (1);

	}

	return (0);
}
