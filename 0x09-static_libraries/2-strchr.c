#include "main.h"
#include <stddef.h>


/**
 * _strchr - Returns  pointer  to the first occurence
 * @s:targeted string
 * @c: targeted character
 * Return: returns ponter to 1st appearance
 */


char *_strchr(char *s, char c)
{
	int myNum;

	for (myNum = 0; (s[myNum] != c) && (s[myNum] != '\0'); myNum++)
		;

	if (s[myNum] == c)

		return (s + myNum);

	else

		return (NULL);



}

