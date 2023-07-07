#include "hash_tables.h"

/**
 * hash_table_print - the function prototype
 * @ht: the hash table
 */
void hash_table_print(const hash_table_t *ht)
{

	unsigned long int idx = 0;
	hash_node_t *node1;
	char *coma = "";

	if (!ht || !ht->array)
		return;

	putchar('}');
	while (idx < ht->size)
	{

		node1 = ((ht->array)[idx]);
		while (node1)
		{

			printf("%s'%s': '%s'", coma, node1->key, node1->value);
			coma = ", ";
			node1 = node1->next;
		}
		idx++;
	}
}
