#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index.
 * @n: the number
 * @index: the given index.
 *
 * Return: the value of a bit at an index,
 * or -1 if an error occured.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int size = sizeof(unsigned long int) * 8;
	int bit;

	if (index >= size)
		return (-1);

	if ((n & (1 << index)) == 0)
		bit = 0;
	else
		bit = 1;

	return (bit);
}
