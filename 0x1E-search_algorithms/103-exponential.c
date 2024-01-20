#include "search_algos.h"

int _binary_search(int *array, size_t low, size_t high, int value);

/**
 * exponential_search - Searches for a value in a sorted array of integers
 * using the Exponential search algorithm
 * @array: a pointer to the first element of the array to search in,
 * @size: the number of elements in array,
 * @value: the value to search for,
 *
 * Return: In success: the first index where value is located,
 * Otherwise -1.
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t bound = 1, min = 0;
	int result;

	if (!array)
		return (-1);

	while (bound < size && array[bound] < value)
	{
		printf("Value checked array[%ld] = [%d]\n", bound, array[bound]);
		bound *= 2;
	}

	if (bound + 1 < size)
		min = bound + 1;
	else
		min = size;

	printf("Value found between indexes [%lu] and [%lu]\n", bound / 2, min - 1);
	result = _binary_search(array, bound / 2,  min, value);
	if (result != -1)
		return (result);

	return (-1);
}

/**
 * _binary_search - Searches for a value in an array of integers
 * using the Binary search algorithm.
 * @array: a pointer to the first element of the array to search in,
 * @low: the first index of the array
 * @high: the last index of the array
 * @value: the value to search for,
 *
 * Return: In success: the first index where value is located,
 * Otherwise -1.
 */
int _binary_search(int *array, size_t low, size_t high, int value)
{
	size_t l, r, m, i;

	if (!array)
		return (-1);

	l = low;
	r = high - 1;
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
