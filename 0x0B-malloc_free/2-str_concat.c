#include <stdlib.h>
#include <string.h>

/**
 * str_concat - Concatenates two strings.
 * @s1: the 1st string,
 * @s2: the 2nd string,
 *
 * Return: A pointer to newly allocated space in memory which
 * contains the contents of s1, followed by the contents of s2,
 * And NULL on failure.
 */
char *str_concat(char *s1, char *s2)
{
	int i, j;
	int size = strlen(s1) + strlen(s2) + 2;
	char *str;

	str = (char *)malloc(sizeof(char) * size);

	if (str == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		if (s1[i] == '\0')
			break;

		str[i] = s1[i];
	}

	for (j = 0; j < size; j++)
	{
		if (i >= size)
			break;

		str[i] = s2[j];
		i++;
	}

	return (str);
}
