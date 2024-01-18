#include "search_algos.h"
#include <math.h>

/**
 * jump_search - Searches for a value in a sorted array of integers
 * using the Jump search algorithm
 * @array: a pointer to the first element of the array to search in,
 * @size: the number of elements in array,
 * @value: the value to search for,
 *
 * Return: In success: the first index where value is located,
 * Otherwise -1.
 */
int jump_search(int *array, size_t size, int value)
{
	size_t i, start, end;

	if (!array)
		return (-1);

	start = 0;
	end = 0;
	while (end < size && array[end] < value)
	{
		start = end;
		end += sqrt(size);
		printf("Value checked array[%ld] = [%d]\n", start, array[start]);
	}

	printf("Value found between indexes [%ld] and [%ld]\n", start, end);
	for (i = start; i <= (end < size ? end : size - 1); i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}

	return (-1);
}
