#include <stdlib.h>

/**
 * create_array - Creates an array of chars,
 * and initializes it with a specific char.
 * @size: size of the array
 * @c: initializes the array
 *
 * Return: A pointer to the array, or NULL if it fails,
 * And NULL if @size = 0.
 */
char *create_array(unsigned int size, char c)
{
	char *a;

	if (size == 0)
		return (NULL);

	a = (char *)malloc(sizeof(char) * size);

	if (a == NULL)
		return (NULL);

	*a = c;

	return (a);
}
