#include <stdlib.h>

/**
 * array_iterator - executes a function given as a parameter
 * on each element of an array.
 * @array: an array,
 * @size: the size of the array,
 * @action: the function to execute on the @array's elements.
 *
 * Return: void.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	if (!array || !size || !action)
		return;

	i = 0;
	while (i < (int)size)
	{
		action(array[i]);
		i++;
	}
}
