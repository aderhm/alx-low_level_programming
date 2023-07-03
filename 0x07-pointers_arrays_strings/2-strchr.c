#include <stdlib.h>
#include <stdio.h>

/**
 * _strchr - Locates a character in a string.
 * @s: The string.
 * @c: The character to locate in the string @s.
 *
 * Return: A pointer to @c if it is found,
 * Otherwise, return NULL
 */
char *_strchr(char *s, char c)
{
	int i;
	char *ss = "";

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			break;

		i++;
	}

	if (s[i] == '\0')
		return (NULL);

	ss = &s[i];

	return (ss);
}
