#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - function to print it's  name
 *
 * @name: the name to be printed out
 * @f: pointer that doesn't return anything
 *
 * Return: Always 0 (Success)
*/

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
