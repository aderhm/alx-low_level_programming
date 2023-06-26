#include "main.h"

/**
 * print_rev - Prints a string in reverse to stdout.
 * @s: The string to print
 *
 * Return: void
 */
void print_rev(char *s)
{
	int i;

	i = _strlen(s);
	while (i > 0)
	{
		_putchar(s[i]);
		i--;
	}

	_putchar('\n');
}
