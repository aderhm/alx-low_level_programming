#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - deletes the node at index index of
 * a listint_t linked list.
 * @head: The list to check,
 * @index: The index where the new node should be deleted,
 *
 * Return: 1 in success, or -1 otherwise.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int count;
	listint_t *temp;

	if ((*head) == NULL)
		return (-1);

	temp = (*head);

	if (index == 0)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
		return (1);
	}

	count = 1;
	while (temp)
	{
		if (count == index)
		{
			temp = (*head)->next;
			free(*head);
			*head = temp;
			return (1);
		}
		count++;
		temp = temp->next;
	}

	return (-1);
}
