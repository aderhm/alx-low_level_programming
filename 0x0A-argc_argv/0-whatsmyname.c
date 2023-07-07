#include <stdio.h>

/**
 * main - Prints the name of the program
 * @argc: Argument count.
 * @argv: Argument vector.
 *
 * Return: Always 0.
 */
int main(int argc, char **argv)
{
	(void)(argc);
	printf("%s\n", *argv);
	return (0);
}
