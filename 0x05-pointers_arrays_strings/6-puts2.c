#include "main.h"

/**
 * puts2 - Prints every other character of a string,
 * starting with the first character.
 * @str: The string to print
 *
 * Return: void
 */
void puts2(char *str)
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

	while (i <= len)
	{
		_putchar(str[i]);
		i += 2;
	}

	_putchar('\n');
}
