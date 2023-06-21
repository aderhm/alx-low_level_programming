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

	printf("%d, %d, ", a, b);

	while (i < 96)
	{
		fib = a + b;
		printf("%d", fib);
		a = b;
		b = fib;

		if (i != 95)
			printf(", ");

		i++;
	}

	printf("\n");

	return (0);
}
