#include "main.h"

/**
 * print_times_table - Prints the n times table, starting with 0.
 * @n: The n times.
 *
 * Return: void.
 **/
void print_times_table(int n)
{
	int i = 0, j, prod;

	if (n < 0 || n > 15)
		return;

	while (i <= n)
	{
		j = 0;
		while (j <= n)
		{
			prod = i * j;
			if (prod < 10)
			{
				if (j != 0)
				{
					_putchar(' ');
					_putchar(' ');
				}
				_putchar(prod + '0');
			}
			else if (prod < 100)
			{
				_putchar(' ');
				_putchar((prod / 10) + '0');
				_putchar((prod % 10) + '0');
			}
			else
			{
				_putchar((prod / 100) + '0');
				_putchar(((prod / 10) % 10) + '0');
				_putchar((prod % 10) + '0');
			}

			if (j != n)
			{
				_putchar(',');
				_putchar(' ');
			}
			j++;
		}
		_putchar('\n');
		i++;
	}
}
