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
	int *fsum = a;
	int *bsum = a;

	for (i = 0; i < size; i++)
	{
        a = a + ( i * size + i) * 4;
        printf("%d, ", *a);
		fsum += *a;
	}

    a = bsum;
	for (i = size; i > 0; i--)
	{
        a = a + ( i * size + i) * 4;
        printf("%d, ", *a);
		bsum += *a;
	}

	/* printf("%d, %d\n", *fsum, *bsum); */
}
