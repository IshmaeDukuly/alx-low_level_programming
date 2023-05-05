#include "main.h"

/**
 * flip_bits - Counts the number of bits flips
 * @n: This the number
 * @m: The number
 * Return: Always return success
 */


unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int aox = n ^ m, bits = 0;

	while (aox > 0)
	{
		bits += (aox & 1);
		aox >>= 1;
	}

	return (bits);
}
