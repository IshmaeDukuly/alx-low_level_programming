#include "main.h"

/**
 *_print_rev_recursion  - Prints a string in reverse
 *@s: String
 *Return: string
 */

void _print_rev_recursion(char *s)
{
	if (*s)
	{
	print_rev_recursion(s + 1);
		_putchar(*s);
	}
	return (0);
}

