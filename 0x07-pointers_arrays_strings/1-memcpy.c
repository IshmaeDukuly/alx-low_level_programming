#include "main.h"
#include <stdlib.h>
#include <string.h>

/**_memcpy - Copies memory area
 *
 * Return: Always 1 (Success)
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
