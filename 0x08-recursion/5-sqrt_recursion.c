#include "main.h"



/**_sqrt _recursion
 * @n: integer
 * @i: integer
 * Return: sqrt
 */


int _sqrt(int n, int i)
{
	if (n < 0)
		return (-1);
	if ((i * i) > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (_sqrt(n, i + 1));
}
