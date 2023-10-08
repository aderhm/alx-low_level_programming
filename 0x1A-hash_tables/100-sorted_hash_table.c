#include "hash_tables.h"

/**
 * shash_table_create - creates a hash table.
 * @size: the size of the array.
 *
 * Return: A pointer to the newly created hash table,
 * or NULL If something went wrong.
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *table;
	shash_node_t **array;
	unsigned long int i;

	table = malloc(sizeof(shash_table_t));
	if (!table)
		return (NULL);

	array = malloc(size * sizeof(shash_node_t *));
	if (!array)
		return (NULL);

	i = 0;
	while (i < size)
	{
		array[i] = NULL;
		i++;
	}

	table->size = size;
	table->array = array;
	table->shead = NULL;
	table->stail = NULL;

	return (table);
}

/**
 * add_node_shash - adds a node at the beginning of a shash.
 * @h: head of the shash linked list.
 * @key: key of the shash.
 * @value: value to store.
 *
 * Return: the created node.
 */
shash_node_t *add_node_shash(shash_node_t **h, const char *key,
	const char *value)
{
	shash_node_t *item;

	item = *h;

	while (item != NULL)
	{
		if (strcmp(key, item->key) == 0)
		{
			free(item->value);
			item->value = strdup(value);
			return (item);
		}
		item = item->next;
	}

	item = malloc(sizeof(shash_node_t));

	if (item == NULL)
		return (NULL);

	item->key = strdup(key);
	item->value = strdup(value);
	item->next = *h;

	*h = item;

	return (item);
}

/**
 * create_s_item - adds a node on the DLL of the shash table
 *
 * @ht: pointer to the table
 * @new: new node to add
 * Return: no return
 */
void create_s_item(shash_table_t *ht, shash_node_t *new)
{
	shash_node_t *item1, *item2;
	int ret;

	item1 = item2 = ht->shead;

	while (item1 != NULL)
	{
		ret = strcmp(new->key, item1->key);
		if (ret == 0)
		{
			return;
		}
		else if (ret < 0)
		{
			new->sprev = item1->sprev;

			if (item1->sprev)
				item1->sprev->snext = new;
			else
				ht->shead = new;

			item1->sprev = new;
			new->snext = item1;

			return;
		}
		item2 = item1;
		item1 = item1->snext;
	}

	new->sprev = item2;
	new->snext = NULL;

	if (ht->shead)
		item2->snext = new;
	else
		ht->shead = new;

	ht->stail = new;
}

/**
 * shash_table_set - adds an element to the hash table.
 * @ht: the hash table we want to add or update the key/value to.
 * @key: the key.
 * @value: the value associated with the key.
 *
 * Return: 1 if it succeeded, 0 otherwise.
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	shash_node_t *new;

	if (ht == NULL)
		return (0);

	if (key == NULL || *key == '\0')
		return (0);

	index = key_index((unsigned char *)key, ht->size);

	new = add_node_shash(&(ht->array[index]), key, value);

	if (new == NULL)
		return (0);

	create_s_item(ht, new);

	return (1);
}

/**
 * shash_table_get - gets an element from the hash table.
 * @ht: the hash table we want to look into.
 * @key: the key we're looking for.
 *
 * Return: the value associated with the element,
 * or NULL if key couldn’t be found.
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int index;
	shash_node_t *item;

	if (!ht || !key || !(*key))
		return (NULL);

	index = key_index((unsigned char *)key, ht->size);
	item = ht->array[index];

	while (item)
	{
		if (strcmp(item->key, key) == 0)
			return (item->value);
		item = item->next;
	}

	return (NULL);
}

/**
 * shash_table_print - prints a hash table.
 * @ht: the hash table.
 *
 * Return: void
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *item;
	char *separator;

	if (!ht)
		return;

	separator = "";

	printf("{");

	item = ht->shead;
	while (item)
	{
		printf("%s'%s': '%s'", separator, item->key, item->value);
		separator = ", ";
		item = item->next;
	}

	printf("}\n");
}

/**
 * shash_table_print_rev - prints a hash table.
 * @ht: the hash table.
 *
 * Return: void
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *item;
	char *separator;

	if (ht == NULL)
		return;

	separator = "";

	printf("{");

	item = ht->stail;
	while (item)
	{
		printf("%s'%s': '%s'", separator, item->key, item->value);
		separator = ", ";
		item = item->next;
	}

	printf("}\n");
}

/**
 * shash_table_delete - deletes a hash table.
 * @ht: the hash table.
 *
 * Return: void
 */
void shash_table_delete(shash_table_t *ht)
{
	unsigned long int i;
	shash_node_t *item1, *item2;

	if (!ht)
		return;

	i = 0;
	while (i < ht->size)
	{
		item1 = ht->array[i];

		while ((item2 = item1) != NULL)
		{
			item1 = item1->next;
			free(item2->key);
			free(item2->value);
			free(item2);
		}
		i++;
	}

	free(ht->array);

	free(ht);
}
