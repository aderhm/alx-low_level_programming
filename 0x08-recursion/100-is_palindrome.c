#include "main.h"
#include <string.h>

/**
 * is_palindrome_helper - writes the character c to stdout
 * @s: The string
 * @len: String size
 * @half: Half of the size
 *
 * Return: On success 1.
 * Otherwise, 0 is returned.
 */
int is_palindrome_helper(char *s, int len, int half)
{
	if (*s != *(s + len - 1))
		return (0);

	if (len < half)
		return (1);

	s++;
	len -= 2;

	return (is_palindrome_helper(s, len, half));
}

/**
 * is_palindrome - writes the character c to stdout
 * @s: The string
 *
 * Return: On success 1.
 * Otherwise, 0 is returned.
 */
int is_palindrome(char *s)
{
	int len = strlen(s);
	int half = len / 2;

	return (is_palindrome_helper(s, len, half));
}
