#include "main.h"

/**
 * _puts - Prints out a string
 * @strc: Strings to be printed out
 * Return: Return a string
 */

void _puts(char *str)
{
	while (*str)
	{
		_putchar(*str++);

		_putchar('\n');
	}

}

