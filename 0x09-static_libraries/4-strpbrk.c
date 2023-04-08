#include "main.h"

/**
 * _strbrk - the strbrk() function loactes the first string
 * occurence in any of the bytes
 * @s: string 
 * @accept: Search bytes location
 * Return: Pointer 
 */


char *_strbrk(char *s, char *accept)
{
	int y;

	while(*s)
	{
		for (y = 0; accept[y]; y++)
		{
			if (accept[y] == *s)

				return (s);
		}
	}
	
	return ('\0');
}
