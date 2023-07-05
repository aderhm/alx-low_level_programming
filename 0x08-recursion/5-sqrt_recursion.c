#include "main.h"
#include <stdio.h>

/**
 * _sqrt_recursion - Returns the natural square root of a number.
 * @n: The number
 *
 * Return: The square root of @n.
 */
int _sqrt_recursion(int n)
{
	int x = n;

	if (n < 0)
		return (-1);

	if (x * x == n)
		return (x);

	x = (x + (n / x)) / 2;

	return (_sqrt_recursion(x));
}
