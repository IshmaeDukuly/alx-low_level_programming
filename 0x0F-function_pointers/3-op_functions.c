#include "3-calc.h"


/**
 * op_add - rseult the sum of two the integers
 * @a: The 1st integer
 * @b: The 2nd integer
 *
 * Return: sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - give or calculates the difference of two the integers
 * @a: 1st integer
 * @b: 2nd integer
 *
 * Return: both the difference of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - give the result product of two integers
 * @a: The 1st integer
 * @b: The 2nd integer
 *
 * Return: Return  product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - This funvtion calculates the division of two integers
 * @a: The 1st integer
 * @b: The 2nd integer
 *
 * Return: Always return the remainder of b
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod -  the function that divides remainder of the division of integers
 * @a: The 1st integer
 * @b: 2nd integer
 *
 * Return: remainder of b
 */
int op_mod(int a, int b)
{
	return (a % b);
}
