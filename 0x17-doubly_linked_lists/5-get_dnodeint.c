#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list.
 * @head: list
 * @index: the index to be returned.
 *
 * Return: the node at index @index,
 * or NULL, if it does not exist.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *node;
	unsigned int count;

	node = NULL;
	count = 0;
	while (head)
	{
		if (count == index)
		{
			node = head;
			break;
		}
		head = head->next;
		count += 1;
	}

	if (!node)
		return (NULL);

	return (node);
}
