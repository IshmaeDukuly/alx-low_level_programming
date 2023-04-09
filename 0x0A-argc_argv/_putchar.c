#include <unistd.h>


/**
 * _putchar - Writes character C
 * @c: print the charcter
 * Return: Success
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
