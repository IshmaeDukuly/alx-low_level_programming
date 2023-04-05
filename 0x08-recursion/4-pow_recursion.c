#include "main.h"

/**
 * int _pow_recursion(int x, int y) - Return the of x
 * @x: value of x
 * @y: Power of y
 * Reurn: Always 1 (success)
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
