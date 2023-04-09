#include <unistd.h>

/**
 * _putchar - Write c as the standard output
 * @c: Character
 *
 * Return: Always 1 (Success)
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
