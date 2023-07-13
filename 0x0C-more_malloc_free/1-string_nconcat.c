#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - Concatenates two strings.
 * @s1: The first string,
 * @s2: The second string,
 * @n: N bytes from @s2 to concatenates with s1.
 *
 * Return: a pointer to a newly allocated space in memory,
 * which contains @s1 + @n first bytes from @s2.
 * Or NULL in case of failure.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int i, j, size;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	size = strlen(s1) + n + 1;
	str = malloc(sizeof(*str) * size);
	if (str == NULL)
		return (NULL);

	for (i = 0; i < strlen(s1); i++)
		str[i] = s1[i];

	for (j = 0; j < n; j++)
		str[i++] = s2[j];

	str[i] = '\0';

	return (str);
}
