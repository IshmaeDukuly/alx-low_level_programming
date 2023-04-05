#include "main.h"

/**
 *_int factorial - Factorize  of a given number
 *@n: is lower than
 *Return: Factorial
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	} else if (n == 1)
	{
		return (1);
	}

	return (n * factorial(n - 1));

}

