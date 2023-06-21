#include <stdio.h>

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
	int i = 0;
	int a = 1, b = 2, fib;

	printf("%i, ", a);
	printf("%i, ", b);

	while (i < 48)
	{
		fib = a + b;
		printf("%i", fib);
		a = b;
		b = fib;

		if (i != 47)
			printf(", ");

		i++;
	}

	printf("\n");

	return (0);
}
