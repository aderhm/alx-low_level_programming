#include <stdlib.h>

/**
 * array_range - creates an array of integers.
 * @min: first val
 * @max: last val
 *
 * Return: a pointer to the newly created array
 * Or NULL in case of failure.
 */
int *array_range(int min, int max)
{
	int i, len;
	int *arr;

	if (min > max)
		return (NULL);

	arr = malloc(sizeof(*arr) * (max - min + 1));
	if (arr == NULL)
		return (NULL);

	len = max - min;
	for (i = 0; i <= len; i++)
		arr[i] = min++;

	return (arr);
}
