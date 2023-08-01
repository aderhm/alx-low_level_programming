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
	unsigned int trav;
	listint_t *temp, *head_cpy;

	if (*head == NULL)
		return (-1);

	head_cpy = *head;

	if (index == 0)
	{
		*head = (*head)->next;
		free(head_cpy);
		return (1);
	}

	trav = 0;
	while (trav < index - 1)
	{
		if (head_cpy->next == NULL)
			return (-1);

		head_cpy = head_cpy->next;
		trav++;
	}

	temp = head_cpy->next;
	head_cpy->next = temp->next;

	free(temp);

	return (1);
}
