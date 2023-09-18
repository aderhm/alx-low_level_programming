#include "main.h"

/**
 * _isdigit - Checks for digit character.
 * @c: The character to check
 *
 * Return: 1 if @c is a digit.
 * Otherwise, 0 is returned.
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);

	return (0);
}
