#include "main.h"

/**
 * rev_string - Rreverses a string.
 * @s: The string to reverse
 *
 * Return: void
 */
void rev_string(char *s)
{
	int i, len = 0;
	char tmp;

	i = 0;
	while (s[i] != '\0')
	{
		len++;
		i++;
	}

	len-=1;

	i = 0;
	while (i <= len / 2)
	{
		tmp = s[i];
		s[i] = s[len - i];
		s[len - i] = tmp;
		i++;
	}
}
