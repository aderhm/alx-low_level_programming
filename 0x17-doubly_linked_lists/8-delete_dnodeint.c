#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index index of
 * a dlistint_t linked list.
 * @head: list,
 * @index: the index of the list where the new node should be deleted,
 *
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *head1, *head2;
	unsigned int count;

	head1 = *head;
	if (head1)
		while (head1->prev)
			head1 = head1->prev;

	count = 0;
	while (head1)
	{
		if (count == index)
		{
			if (count)
			{
				head2->next = head1->next;
				if (head1->next)
					head1->next->prev = head2;
			}
			else
			{
				*head = head1->next;
				if (*head)
					(*head)->prev = NULL;
			}
			free(head1);
			return (1);
		}

		head2 = head1;
		head1 = head1->next;
		count++;
	}

	return (-1);
}
