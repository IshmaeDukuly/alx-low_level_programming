#include "main.h"

/**
 * set_bit - This sets the bit
 * @n: The Decimal num
 * @index: index position
 * Return: Either return success or error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int x;

	if (index > 64)
		return (-1);

	for (x = 1; index > 0; index--, x *= 2)
		;
	*n += x;

	return (1);
}
