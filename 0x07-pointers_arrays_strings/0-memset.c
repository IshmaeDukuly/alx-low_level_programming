#include "main.h"
#include <string.h>

/** _memset - Function that fills memory with a constant byte
 *
 *@memset: Memory byte
 */


char *_memset(char *s, char b, unsigned int in)
{
	char buffer[10];
	memset(buffer, 'c, sizeof(char)* 10);

	for (int i = 0; i < 10; i++)
	{
		printf("%c", buffer[i]);
	}



	
	return (0);
}	
