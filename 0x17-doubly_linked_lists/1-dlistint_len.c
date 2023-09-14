#include "lists.h"

/**
 * dlistint_len - returns the number elements of a dlistint_t list.
 * @h: list
 *
 * Return: The number of nodes.
 */
size_t dlistint_len(const dlistint_t *h)
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
