#include "search_algos.h"

/**
 * binary_search - Searches for a value in an array of integers
 * using the Binary search algorithm.
 * @array: a pointer to the first element of the array to search in,
 * @size: the number of elements in array,
 * @value: the value to search for,
 *
 * Return: In success: the index where value is located,
 * Otherwise -1.
 */
int binary_search(int *array, size_t size, int value)
{
	int l, r, m, i;

	if (!array)
		return (-1);

	l = 0;
	r = size - 1;
	while (l <= r)
	{
		m = l + (r - l) / 2;

		printf("Searching in array: ");
		for (i = l; i <= r; i++)
		{
			printf("%d", array[i]);
			if (i != r)
				printf(", ");
		}
		printf("\n");

		if (array[m] == value)
			return (m);

		if (value < array[m])
			r = m - 1;
		else
			l = m + 1;
	}

	return (-1);
}
