#include "main.h"
#include <stdio.h>

/**
 * is_prime_number - Checks if a given number is a prime number.
 * @n: The number to check
 *
 * Return: 1 if @n is a prime number,
 * Otherwise, 0 is returned.
 */
int is_prime_number(int n)
{
	int i = 2;

	if (n == 0 || n == 1)
		return (0);

	if (n == i)
		return (1);

	if (n % i == 0)
		return (0);

	i++;

	return (is_prime_number(n));
}
