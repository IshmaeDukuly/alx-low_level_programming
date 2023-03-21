#include <unistd.h>
/**
 * _putchar - Writes the character c to standout
 * @c: The character to print 
 * Return: On success 1.
 * On error, -1 is returned, and error not is set appropraitely
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
