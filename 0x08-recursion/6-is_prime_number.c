#include "main.h"

/**
 * is_prime - Checks if a given number is a prime number.
 * @n: input number.
 * @i: iterator.
 * Return: 1 if @n is a prime number,
 * Otherwise, 0 is returned.
 */
int is_prime(unsigned int n, unsigned int i)
{
	if (n % i == 0)
	{
		if (n == i)
			return (1);
		else
			return (0);
	}
	return (is_prime(n, i + 1));
}

/**
 * is_prime_number - Checks if a given number is a prime number.
 * @n: The number to check
 *
 * Return: 1 if @n is a prime number,
 * Otherwise, 0 is returned.
 */
int is_prime_number(int n)
{
	if (n <= 0 || n == 1)
		return (0);

	return (is_prime(n, 2));
}
