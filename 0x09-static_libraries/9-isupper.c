#include "main.h"

/**
 * _isupper - This checks if a character is
 * uppercase or not
 * @c: test character
 * Return: character
 */

int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
		return (1);

	return (0);
}
