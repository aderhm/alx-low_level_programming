#include "main.h"

/**
 * puts_half - Prints half of a string, followed by a new line.
 * @str: The string to print
 *
 * Return: void
 */
void puts_half(char *str)
{
	int i, len = 0;

	i = 0;
	while (str[i] != '\0')
	{
		len++;
		i++;
	}

	len -= 1;

	i = 0;

	while (i <= len / 2)
	{
		_putchar(str[i]);
		i++;
	}

	_putchar('\n');
}
