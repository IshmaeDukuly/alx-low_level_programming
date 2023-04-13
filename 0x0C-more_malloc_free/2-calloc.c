#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * _calloc - the function
 * @nmemb: the unsigned int
 * @size: usigned int
 * Return: Success
 */




void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *output;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	output = malloc(nmemb * size);

	if (result == NULL)
	{
		return (NULL);
	}
	memset(output, 0, nmemb * size);
	return (output);
}
