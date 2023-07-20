#include <stdarg.h>

/**
 * sum_them_all - returns the sum of all its parameters.
 * @n: The first param.
 *
 * Return: @sum of the params.
 * If n == 0, return 0
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, sum = 0;
	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(args, unsigned int);
	}

	return (sum);
}
