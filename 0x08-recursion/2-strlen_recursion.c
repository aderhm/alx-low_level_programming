#include "main.h"

/**
 * _strlen_recursion - Returns the length of a string.
 * @s: The string to check
 *
 * Return: The length of @s.
 */
int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s == '\0')
		return (len);

	len += 1 + _strlen_recursion(s + 1);

	return (len);
}
