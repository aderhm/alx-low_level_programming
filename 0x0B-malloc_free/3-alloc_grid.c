#include <stdlib.h>

/**
 * alloc_grid - Returns a pointer to a 2 dimensional array of integers.
 * @width: number of columns
 * @height: number of lines
 *
 * Return: A pointer, and NULL on failure.
 */
int **alloc_grid(int width, int height)
{
	int **array;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	array = (int **)malloc(height * sizeof(int *));
	if (array == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		array[i] = (int *)malloc(width * sizeof(int));
		if (array[i] == NULL)
		{
			for (j = 0; j < i; j++)
				free(array[j]);
			free(array);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			array[i][j] = 0;
		}
	}

	return (array);
}
