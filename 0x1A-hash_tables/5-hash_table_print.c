#include "hash_tables.h"

/**
 * hash_table_print - rints a hash table.
 * @ht: the hash table.
 *
 * Return: void
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *item;
	unsigned long int i;
	char *separator;

	if (ht == NULL)
		return;

	separator = "";

	printf("{");

	i = 0;
	while (i < ht->size)
	{
		item = ht->array[i];
		while (item)
		{
			printf("%s'%s': '%s'", separator, item->key, item->value);
			separator = ", ";
			item = item->next;
		}
		i++;
	}

	printf("}\n");

}
