#include "main.h"

/**
 * _strlen_recursion - Length of string recursively
 *@s: Point to the string
 * Return: Recursion
 */


int _strlen_recursion(char *s)
{
	if (!*s)
	{
		return (0);
	}
	return (1 + _strlen_recursion(++s));
}

