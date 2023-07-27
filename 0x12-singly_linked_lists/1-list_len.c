#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list.
 * @h: A list
 *
 * Return: the number of nodes
 */
size_t list_len(const list_t *h)
{
	int count;

	count = 0;
	while (h)
	{
		h = h->next;
		count++;
	}
	return (count);
}
