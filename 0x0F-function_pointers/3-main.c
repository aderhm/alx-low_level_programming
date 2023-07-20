#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "3-calc.h"

/**
 * main - check the code
 * @ac: arguments count,
 * @av: arguents victor.
 *
 * Return: 0 in success,
 * 98, 99, or 100 in fail.
 */
int main(int ac, char **av)
{
	int (*func)(int, int);
	int res, a, b;

	if (ac != 4)
	{
		printf("Error\n");
		exit(98);
	}

	a = atoi(av[1]);
	b = atoi(av[3]);
	func = get_op_func(av[2]);

	if (!func)
	{
		printf("Error\n");
		exit(99);
	}

	res = func(a, b);

	if (res == 100)
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", res);

	exit(0);
}
