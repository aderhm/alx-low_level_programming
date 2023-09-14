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

	new = NULL;
	if (idx == 0)
		new = add_dnodeint(h, n);
	else
	{
		current = *h;
		count = 1;
		if (current != NULL)
			while (current->prev != NULL)
				current = current->prev;

		while (current != NULL)
		{
			if (count == idx)
			{
				if (current->next == NULL)
					new = add_dnodeint_end(h, n);
				else
				{
					new = malloc(sizeof(dlistint_t));
					if (new != NULL)
					{
						new->n = n;
						new->next = current->next;
						new->prev = current;
						current->next->prev = new;
						current->next = new;
					}
				}
				break;
			}
			current = current->next;
			count++;
		}
	}

	return (new);
}
