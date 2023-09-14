#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position.
 * @h: list,
 * @idx: the index of the list where the new node should be added,
 * @n: data to be added.
 *
 * Return: the address of the new node, or NULL if it failed.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *prevv, *current;
	unsigned int count;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	if (idx == 0)
		return (add_dnodeint(h, n));

	new->n = n;

	if ((*h) == NULL)
	{
		new->prev = NULL;
		new->next = NULL;
		*h = new;
	}
	else
	{
		current = *h;
		count = 0;
		while (current->next)
		{
			if (count == idx - 1)
				prevv = current;
			if (count == idx)
				break;
			current = current->next;
			count++;
		}
		new->prev = prevv;
		new->next = current;
		prevv->next = new;
		current->prev = new;
	}

	return (new);
}
