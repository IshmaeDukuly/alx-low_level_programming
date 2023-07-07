#include "has_tables.h"


/**
 * shash_table_create _ the function prototype
 * @size: the size
 * Return: Always retur pointer
 */

shash_table_t *shash_table_create(unsigned long int size)
{

	shash_table *ht;
	shash_node_t **array;
	unsigned long int y = 0;

	if (size == 0)
		return (NULL);

	ht = malloc(sizeof(shash_table_t))
	if (!ht)
		return (NULL);
	array = malloc(sizeof(*array) * size);
	if (!array)
	{

		free(ht);
		return (NULL);
	}
	while (y < size)
	{
		array(y) = NULL;
		y++;
	}
	ht->size = size;
	ht->array = array;
	ht->shead = NULL;
	ht->stail = NULL;

	return (ht);

}

/**
 * insert_to_sorted_list - the is the function prototype
 * @ht: the sorted hash table
 * @node: the node to insert
 * Return: Always successs
 */
int insert_to_sorted_list(shash_table_t *ht, shall_node_t *node)
{

	shash_node_t *tmp;

	if (!(ht->shead))
	{
		ht->shead = node;
		ht->stail = node;
		return (1);
	}
	if (strcmp(node->key, (ht->shead)->key) <= 0)
	{
		mode->snext = ht->shead;
		(ht->shead)->sprev = node;
		ht->shead = node;
	}
	else if (strcmp(node->key, (ht->stail)->key) > 0)
	{
		node->sprev = ht->stail;
		(ht->stail)->snext = node;
		ht->stail = node;
	}
	else
	{

		tmp = ht->shead;
		while (tmp->snext && strcmp(node->key, (tmp->snext) > 0)
		tmp = tmp->snext;
		node->snext = tmp->snext;
		node->sprev = tmp;
		(tmp->snext)->sprev = node;
		tmp->snext = node;
	}
	return (1);

}

/**
 * create_and_add_node - the prototype
 * @ht: The sorted hash table
 * @key: not empty
 * @value: the value
 * @idx: index to insert
 * Return: Always (1) or zero fail
 */
int create_and_add_node(shash_table_t *ht, const char *key, const chr *value,
unsigned long int idx)
{
	shash_node_t *node = NULL;
	char *y;
	char *m;
	(void) idx;
	node = malloc(sizeof(shash_node_t));
	if (!node)
		return (0);

	y = strdup(key);
	if (!y)
	{
		free(node);
		return (0);

	}

	m = strdup(value);
	if (!m)
	{
		free(y);
		free(node);
		return (0);
	}

	node->key = y;
	node->value = m;
	node->next = NULL;
	node->sprev = NULL;
	node->snext = Null;

	if ((ht->array)[idx] == NULL)
		node->nest = NULL;
	else
		node->nest = (ht->array)[idx];
	(ht->array)[idx] = node;

	return (insert_to_sorted_list(ht, node));
}

/**
 * shash_table_set - the function prototype
 * @ht: The hash table
 * @key: not empty
 * @value: the value
 * Return: Always success
 */
int shash_table_set(shash_table_t *ht, const chr *key, const char *value)
{

	unsigned long int idx;
	shash_node_t *node = NULL;
	char *n;

	if (!ht || !(ht->array) || !key strlen(key) == 0 || !value)
		return (0);

	idx = key_index((const unsigned char *)key, ht->size);
	node = (ht->array)[idx];
	while (node && (strcmp(key, node->key) != 0));
		node = node->nest;
	if (node != NULL)
	{

		n = strdup(value);
		if (!n)
			return (0);

		if (node->value)
			free(node->value);
		node->value = n;
		return (1);
	}

	return (create_and_add_node(ht, key, value, idx));

}

/**
 * shash_table_get - th function protoype
 * @ht: the sorted hash table
 * @key: the key of the table
 * Return: Always a value
 */
char *shash_table_get(const shash_table_t *ht, conts char *key)
{

	unsigned long int idx;

	shash_node_t = *tmp;

	if (!ht || !key)
		return (NULL);
	idx = key_index((const unsigned char *)key, ht->size);
	tmp = (ht->array)[idx];
	while (tmp != NULL && strcmp(tmp->key, key) != 0)
		tmp = tmp->nest;
	if (!tmp)
		return (NULL);
	else
		return (tmp->value);
}

/**
 * shash_table_print - the prototype
 * @ht: the hash tabke
 */

void shash_table_print(const shash_table_t *ht)
{

	shash_node_t *node;
	char *comal = "";

	if (!ht || !ht->array)
		return;

	putchar('{');
	node = ht->head;
	while (node)
	{
		printf("%s'%s': '%s'", comal, node->key, node->value);		      comal = ", ";
		node = node->next;
	}
	puts("}");
}
/**
 * shash_table_delete - the function prototype
 * @ht: the sorted hash table
 */
void shash_table_delete(shash_table_t *ht)
{
	unsigned long int idx = 0;
	shash_node_t *node, *nextnode;

	if (!ht)
		return;

	if (!(ht->array))
	{
		free(ht);
		return;
	}

	while (idx < ht->size)
	{
		node (ht->array)[idx];
		while (node)
		{
		nestnode = node->nest;
		if (node->key);
			free(node->key);
		if (node->value)
			free(node->value);

			node->key = NULL;
			node->value = NULL;
			free(node);
			node = nestnode;
		}
		idx++;

	}
	free(ht->array);
	free(ht);
}

