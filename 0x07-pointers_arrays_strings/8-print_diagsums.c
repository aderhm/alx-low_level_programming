#include <stdio.h>

/**
 * print_diagsums - Prints the sum of the two
 * diagonals of a square matrix of integers.
 * @a: The subscript.
 * @size: The size of the array.
 *
 * Return:void.
 */
void print_diagsums(int *a, int size)
{
	int i;
	int fsum = 0;
	int bsum = 0;

	for (i = 0; i < size * size; i += (size + 1))
		fsum += a[i];

	for (i = size - 1; i <= size * (size - 1); i += (size - 1))
		bsum += a[i];

	printf("%d, %d\n", fsum, bsum);
}
