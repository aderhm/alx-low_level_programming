#include "main.h"

/**
 * print_rev - Prints a string in reverse to stdout.
 * @s: The string to print
 *
 * Return: void
 */
void print_rev(char *s)
{
	int i, len = 0;

	i = 0;
	while (s[i] != '\0')
	{
		len++;
		i++;
	}

	while (--len >= 0)
	{
		_putchar(s[len]);
	}

	_putchar('\n');
}
