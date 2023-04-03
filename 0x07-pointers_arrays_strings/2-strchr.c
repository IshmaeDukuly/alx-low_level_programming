#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 *strch - Locates a character in a string
 *
 *Return: String
 */

char *_strchr(char *S, char c)
{
	char name[]= "Moisema";
	
		if (strchr(name, 's'))
		{
			printf("character is there\n");
		}else {
	
			printf("there is no character\n");	
		}	
	return (0);
}
