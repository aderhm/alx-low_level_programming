#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 * @head: The list to check,
 * @idx: The index where the new node should be added,
 * @n: The data to insert.
 *
 * Return: the address of the new node,
 * or NULL if it failed.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int count;
	listint_t *newNode, *temp;

	newNode = malloc(sizeof(listint_t));
	if (!newNode)
		return (NULL);

	newNode->n = n;

	temp = (*head);

	if (idx == 0)
	{
		newNode->next = *head;
		*head = newNode;
		return (newNode);
	}

	count = 1;
	while (temp)
	{
		if (count == idx)
		{
			newNode->next = temp->next;
			temp->next = newNode;
			return (newNode);
		}
		count++;
		temp = temp->next;
	}

	return (NULL);
}
