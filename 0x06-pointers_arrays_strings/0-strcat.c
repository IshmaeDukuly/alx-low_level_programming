#include "main.h"
#include <string.h>

/**
 *_strcat - Functions to concatenate two strings,
 *@str: String
 *Return: Pointer to the dest.
 */

int main(void)
{
	char name[20] = "Ishmael";
	char country[20] = "Liberia";

	strcat(name, country);
	_putchar("%s\n", name);

	return (0);
}
