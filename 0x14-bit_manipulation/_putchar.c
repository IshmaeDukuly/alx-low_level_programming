#include <unistd.h>

/**
 * _putchar - writes the character to standout
 * @c: The character to print
 * Return: Always return(Success)
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
