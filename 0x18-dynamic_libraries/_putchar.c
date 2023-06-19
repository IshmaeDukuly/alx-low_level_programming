#include <unistd.h>

/**
 * _putchar - the character c to stand out
 * @c: the char to print
 * Return: On success one
 */

int _putchar(char c)
{

	return (write(1, &c, 1));
}
