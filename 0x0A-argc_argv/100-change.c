#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the minimum number of
 * coins to make change for an amount of money.
 * @argc: Argument count.
 * @argv: Argument vector.
 *
 * Return: Always 0.
 */
int main(int argc, char **argv)
{
	int cents = 0;
	int quarter = 0;
	int ten = 0;
	int five = 0;
	int two = 0;
	int one = 0;
	int coins = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	if (atoi(argv[1]) < 0)
	{
		printf("0\n");
		return (1);
	}

	cents	= atoi(argv[1]);

	quarter	= cents / 25;
	ten		= (cents % 25) / 10;
	five	= ((cents % 25) % 10) / 5;
	two		= (((cents % 25) % 10) % 5) / 2;
	one		= (((cents % 25) % 10) % 5) % 2;

	coins	= quarter + ten + five + two + one;

	printf("%d\n", coins);

	return (0);
}
