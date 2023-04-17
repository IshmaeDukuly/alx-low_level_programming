#include <unistd.h>

/**
 * _putchar - writes the C  character  to stdout
 * @c: The character to be print in the function
 *
 * Return: Always success 1.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
