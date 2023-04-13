#include "main.h"
#include <stdlib.h>

/**
 * _realloc - memory block using malloc and free
 * @ptr: point to passed memory
 * @old_size: size of an array
 * @new_size: new memor array size
 * Return: Success 1
 */
















void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *new_ptr, *temp_ptr;
	unsigned int num;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		new_ptr = malloc(new_size);
		if (new_ptr == NULL)
			return (NULL);
		free(ptr);
		return (new_ptr);
	}

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	new_ptr = malloc(new_size);
	if (new_ptr == NULL)
		return (NULL);

	temp_ptr = ptr;

	for (num = 0; num < old_size; num++)
		new_ptr[num] = temp_ptr[num];

	free(ptr);
	return (new_ptr);
}

