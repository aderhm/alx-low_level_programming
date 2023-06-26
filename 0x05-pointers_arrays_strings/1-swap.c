#include <unistd.h>

/**
 * swap_int - swaps the values of two integers.
 * @a: The pointer to the first integer
 * @b: The pointer to the second integer
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
