#include "main.h"

/**
 * power - Returns the natural square root of a number.
 * @n: input number.
 * @i: iterator.
 * Return: square root of @n or -1.
 */
int power(int n, int i)
{
	if (i % (n / i) == 0)
	{
		if (i * (n / i) == n)
			return (i);
		else
			return (-1);
	}
	return (0 + power(n, i + 1));
}

/**
 * _sqrt_recursion - Returns the natural square root of a number.
 * @n: The number
 *
 * Return: The square root of @n.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	if (n == 0)
		return (0);

	if (n == 1)
		return (1);

	return (power(n, 2));
}
