#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * print_numbers - prints numbers, followed by a new line.
 * @separator: the string to be printed between numbers,
 * @n: the number of integers passed to the function.
 *
 * Return: @sum of the params.
 * If n == 0, return 0
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	if (separator == NULL)
		separator = "";

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(args, unsigned int));
		if (i != n - 1)
			printf("%s", separator);
	}

	va_end(args);

	printf("\n");
}
