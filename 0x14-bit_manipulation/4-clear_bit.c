#include "main.h"
#include <stdio.h>

/**
 * clear_bit -The function  value
 * @n: this points to the decimal
 * @index: index
 * Return: Either return 1 as successs
 * or -1 as error
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int x;
	unsigned int mask;

	if (index > 64)
		return (-1);
	mask = index;
	for (x = 1; mask > 0; x *= 2, mask--)
		;

	if ((*n >> index) & 1)
		*n -= x;

	return (1);
}
