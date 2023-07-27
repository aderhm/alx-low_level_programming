#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_list - prints all the elements of the list_t @h
 * @h: A list
 *
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	int counter;
        const list_t *temp;

        if (h == NULL)
                return (0);

	counter = 0;
        temp = h;
	while (temp->next != NULL)
	{
		if (temp->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", temp->len, temp->str);

		temp = temp->next;
		counter++;
	}
	return (counter);
}
