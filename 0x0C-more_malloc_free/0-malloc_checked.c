#include <stdlib.h>

/**
 * malloc_checked - Memory alllocation using malloc
 * @b: bytes amount
 * Return: Point to the new allocated memory
 */






void *malloc_checked(unsigned int b)
{
	void *new_m;

	new_m = malloc(b);
	if (new_m == NULL)
		exit(98);
	return (new_m);
}
