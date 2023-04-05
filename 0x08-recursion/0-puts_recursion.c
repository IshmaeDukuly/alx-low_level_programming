#include "main.h"


/**
 *_puts_reursion - Output a string
 *
 * Return: String
 */

void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		putchar(*s);
		_puts_recursion(s + 1);
	}
	else
	{
		putchar('\n');
	}
}
