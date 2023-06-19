#include "main.h"
#include <stdio.h>
/**
 * _puts - string followed by a new line
 * @str: the string to print
 * Return: void
 */

void _puts(char *str)
{
	int n1;

	for (n1 = 0; str[n1] != '\0'; n1++)
	{

		putchar(str[n1]);
	}
	putchar('\n');
}
