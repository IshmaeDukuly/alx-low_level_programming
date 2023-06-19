#include "main.h"

/**
 * _atoi - string to an integer
 * @s: parameter
 * Return: Always return something
 */

int _atoi(char *s)
{

	unsigned int count = 0, size = 0, y = 0, n = 1, t = 1, w;

	while (*(s + count) != '\0')
	{
	if (size > 0 && (*(s + count) < '0' || *(s + count) > '9'))
	break;
	if (*(s + count) == '-')
	n *= -1;
	if ((*(s + count) >= '0') && (*(s + count) <= '9'))
	{
	if (size > 0)
	n *= 10;
	size++;
	}
	count++;
	}
	for (w = count - size; w < count; w++)
	{
	y = y + ((*(s + w) - 48) * n);
	n /= 10;
	}
	return (y * n);
}
