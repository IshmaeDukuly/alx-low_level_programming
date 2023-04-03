#include "main.h"

/**_memcpy - Copies memory area
 *@n: size
 * Return: *dest
 */

char * _memcpy(char* dest, char* src, unsigned int  n)
{
	char* p = dest;
	
	const char* q = src;
	while (n-- > 0)
	{
		*p++ = *q++;
	}

	return (dest);
}
