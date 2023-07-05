#include "main.h"

/**
 * _puts_recursion - Prints a string, followed by a new line.
 * @s: The string to print
 *
 * Return: void.
 */
void _puts_recursion(char *s)
{
	while (*s)
	{
		_putchar(s[0]);
		s++;
	}
	_putchar('\n');
}
