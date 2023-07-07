#include "hash_tables.h"

/**
 * create_and_node - the function prtotype
 * @ht: hash table
 * @key: Not empty
 * @value: the value
 * @idx: index to insert the hash table
 * Return: Always 1 success
 */
int create_and_add_node(hash_table_t *ht, const char *key, const char *value,
		unsigned long int idx)
{
	hash_node_t * node1 = NULL;
	char *m;
	char *n;

	node1 = malloc(sizeof(hash_node_t));
	if (!node1)
		return (0);

	m = strdup(key);
	if (!m)
	{

		free(node1);
		return (0);
	}

	n = strdup(value);
	if (!n)
	{

		free(m);
		free(node1);
		return (0);

	}

	node1->key = m;
	node1->value = n;


	if ((ht->array)[idx] == NULL)
		node1-> = NULL;
	else
		node1->next = (ht->array)[idx];
	(ht->array)[idx] = node1;

	return (1);
}

/**
 * hash_table_set - the function prootype
 * @ht: the hash table
 * @key: not empty
 * @value: the value
