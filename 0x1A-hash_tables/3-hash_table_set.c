#include "hash_tables.h"

hash_node_t *create_item(hash_node_t **h, char const *key, char const *value);

/**
 * hash_table_set - adds an element to the hash table.
 * @ht: the hash table we want to add or update the key/value to.
 * @key: the key.
 * @value: the value associated with the key.
 *
 * Return: 1 if it succeeded, 0 otherwise.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;

	if (!ht || !key)
		return (0);

	index = key_index((unsigned char *)key, ht->size);

	if (!create_item(&ht->array[index], key, value))
		return (0);

	return (1);
}

/**
 * create_item - creates a new item.
 * @h: the head of the linked list.
 * @key: the key.
 * @value: the value associated with the key.
 *
 * Return: the head of the hash
 */
hash_node_t *create_item(hash_node_t **h, char const *key, char const *value)
{
	hash_node_t *item;

	item = *h;
	while (item)
	{
		if (strcmp(key, item->key) == 0)
		{
			free(item->value);
			item->value = strdup(value);
			return (*h);
		}
		item = item->next;
	}

	item = malloc(sizeof(hash_node_t));
	if (!item)
		return (NULL);

	item->key = strdup(key);
	item->value = strdup(value);
	item->next = *h;
	*h = item;

	return (*h);
}
