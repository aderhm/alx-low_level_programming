#include "hash_tables.h"

/**
 * hash_table_get - gets an element from the hash table.
 * @ht: the hash table we want to look into.
 * @key: the key we're looking for.
 *
 * Return: the value associated with the element,
 * or NULL if key couldn’t be found.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *item;

	if (!ht || !key)
		return (NULL);

	index = key_index((unsigned char *)key, ht->size);
	item = ht->array[index];

	if (item)
	{
		if (strcmp(item->key, key) == 0)
			return (item->value);
	}

	return (NULL);
}
