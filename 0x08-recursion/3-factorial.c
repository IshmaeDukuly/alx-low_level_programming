#include "main.h"

/**
 *int factorial(int n) - Factorial of a given number
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

	return (n * factorial(n -1 ));

}

