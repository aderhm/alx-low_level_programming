#include <stdlib.h>

/**
 * _calloc - Allocates memory for an array, using malloc.
 * @nmemb: Elements of the array,
 * @size: Size if each element,
 *
 * Return: a pointer to the allocated memory.
 * Or NULL in case of failure.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *arr;

	if (nmemb <= 0 || size <= 0)
		return (NULL);

	arr = malloc(size * nmemb);
	if (arr == NULL)
		return (NULL);

	i = size * nmemb;
	while (i--)
		arr[i] = 0;

	return (arr);
}
