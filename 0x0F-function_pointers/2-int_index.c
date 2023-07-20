#include <stdlib.h>

/**
 * int_index - searches for an integer.
 * @array: an array,
 * @size: the size of the array,
 * @cmp: a pointer to the function to be used to compare values.
 *
 * Return: the index of the first element
 * for which the cmp function does not return 0,
 * If no element matches or @size <= 0, return -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i, cmp_val;

	if (!array || !size || !cmp)
		return (-1);

	if (size <= 0)
		return (-1);

	i = 0;
	while (i < size)
	{
		cmp_val = cmp(array[i]);
		if (cmp_val != 0)
			return (i);

		i++;
	}

	return (-1);
}
