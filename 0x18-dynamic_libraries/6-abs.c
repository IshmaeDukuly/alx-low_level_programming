#include "main.h"
#include <stdio.h>

/**
 * _abs - this computes the abosulet value
 * @c: integer for the function
 * Return: 0
 */

int _abs(int c)
{

	if (c > 0 || c == 0)
	{
	return (c);
	}
	else
	return (c * -1);
}
