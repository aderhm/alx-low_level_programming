#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table.
 * @ht: the hash table.
 *
 * Return: void
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *current, *next;

	if (!ht)
		return;

	i = 0;
	while (i < ht->size)
	{
		current = ht->array[i];

		while (current)
		{
			next = current->next;

			free(current->key);
			free(current->value);
			free(current);

			current = next;
		}
		i++;
	}

	free(ht->array);

	free(ht);
}
