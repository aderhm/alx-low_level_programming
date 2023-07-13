#include <stdlib.h>

/**
 * malloc_checked - Allocates memory using malloc.
 * @b: Size
 *
 * Return: a pointer to the allocated memory,
 * Or 98 if allocation failed.
 */
void *malloc_checked(unsigned int b)
{
	void *mem = malloc(b);

	if (mem == NULL)
		return ((void *)(98));
	return (mem);
}
