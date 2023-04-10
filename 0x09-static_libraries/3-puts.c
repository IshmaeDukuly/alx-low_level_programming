#include "main.h"


/**
 * _puts - this is the function declares
 * @char: character
 * @str: strin
 * Return: Always 0 Success
 */














void _puts(char *str)
{
	int x;

	for (x = 0; *(str + x) != '\0'; x++)
	{
		_putchar(*(str + x));
	}
	_putchar('\n');
}
