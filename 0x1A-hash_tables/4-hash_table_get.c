#include "hash_tables.h"

/**
 * hash_table_get - the prototype
 * @ht: the has table
 * @key: the key of the function
 * Return: Always the value
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{

	unsigned long int idx;
	hash_node_t *temp;


	if (!ht || !key)
		return (NULL);
	idx = key_index((const unsigned char *)key, ht->size);

	temp = (ht->array)[idx];

	while (temp != NULL && strcmp(temp->key, key) != 0)
		temp = temp->next;
	if (!temp)
		return (NULL);
	else
		return (temp->value);
}
