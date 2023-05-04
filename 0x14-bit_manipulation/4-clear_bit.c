#include "main.h"
#include <stdio.h>

/**
 * clear_bit -  value of the function
 * @n: this is the pointer to decimal
 * @index: index
 * Return: Either 1 as success or error
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int x;
	unsigned int value;

	if (index > 64)
		return (-1);
	value = index;
	for (x = 1; value > 0; x *= 2, value--)
		;

	if ((*n >> index) & 1)
		*n -= value;

	return (1);
}
