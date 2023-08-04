#include "main.h"

/**
 * flip_bits - returns the number of bits you would need
 * to flip to get from one number to another.
 * @n: first number,
 * @m: second number.
 *
 * Return: number of bits to flip.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int bits = 0, i = n ^ m;

	while (i > 0)
	{
		bits += (i & 1);
		i >>= 1;
	}

	return (bits);
}
