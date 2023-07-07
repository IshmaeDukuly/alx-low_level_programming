#include "hash_tables.h"
/**
 * key_index - the function protorype
 * @key: the key
 * @size: the hash table size
 * Return: Always where the value pair is stored in the hash tabble
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{

	unsigned long int idix;

	if (size == 0)
		return (0);

	idix = hash_djb2(key);
	return (idix % size);
}
