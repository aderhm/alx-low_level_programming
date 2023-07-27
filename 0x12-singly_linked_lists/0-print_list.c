#include <stdio.h>
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

	counter = 1;
	while (h->next != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		counter++;
	}
	return (counter);
}
