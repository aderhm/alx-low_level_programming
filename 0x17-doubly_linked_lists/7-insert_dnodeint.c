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
	dlistint_t *new, *current;
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
		return (new);
	}

	current = *h;
	count = 0;
	while (current->next && count < idx)
	{
		current = current->next;
		count++;
	}
	if (current == NULL)
	{
		free(new);
		return (NULL);
	}
	if (current->next == NULL)
		return (add_dnodeint_end(h, n));

	new->prev = current->prev;
	new->next = current;
	if (current->prev != NULL)
		current->prev->next = new;
	else
		*h = new;
	current->prev = new;
	return (new);
}
