#include "search_algos.h"

/**
 * interpolation_search - Searches for a value in a sorted array of integers
 * using the Interpolation search algorithm
 * @array: a pointer to the first element of the array to search in,
 * @size: the number of elements in array,
 * @value: the value to search for,
 *
 * Return: In success: the first index where value is located,
 * Otherwise -1.
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t low, high, pos;

	if (!array)
		return (-1);

	low = 0;
	high = size - 1;
	while ((value >= array[low])
		&& (value <= array[high])
		&& (low < high))
	{
		pos = low + (
			((double)(high - low) / (array[high] - array[low])) * (
				value - array[low]
				)
			);

		printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);

		if (value < array[pos])
			high = pos - 1;
		else if (value > array[pos])
			low = pos + 1;
		else
			return (pos);
	}

	pos = low + (
		((double)(high - low) / (array[high] - array[low])) * (
			value - array[low]
			)
		);
	printf("Value checked array[%ld] is out of range\n", pos);

	return (-1);
}
