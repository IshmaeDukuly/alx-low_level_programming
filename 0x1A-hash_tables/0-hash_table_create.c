#include "hash_tables.h"

/**
 * hash_table_create - the function prototype
 * @size: the size of ht
 * Return: Pointer
 */
hash_table_t *hash_table_create(unsigned long int size)
{

	hash_table_t *htable;
	hash_node_t **array;
	unsigned long int m = 0;

	if (size == 0)
		return (NULL);
	htable = malloc(sizeof(*array) * size);
	if (!array)
	{

		free(htable);
		return (NULL);
	}
	while (m < size)
	{

		array[m] = NULL;
		m++;
	}

	htable->size = size;
	htable->array = array;

	return (htable);

}
