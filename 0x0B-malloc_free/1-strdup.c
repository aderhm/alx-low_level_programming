#include <stdlib.h>
#include <string.h>

/**
 * _strdup - returns a pointer to a newly allocated
 * space in memory, which contains a copy of the
 * string given as a parameter.
 * @str: the given string
 *
 * Return: A pointer to the string, or NULL if it fails,
 * And NULL if @str is so.
 */
char *_strdup(char *str)
{
	unsigned int i;
	char *string;

	if (str == NULL)
		return (NULL);

	string = (char *)malloc(sizeof(char) * strlen(str) + 1);

	if (string == NULL)
		return (NULL);

	for (i = 0; i < strlen(str); i++)
	{
		string[i] = str[i];
	}

	return (string);
}
