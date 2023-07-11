#include <stdlib.h>
#include <string.h>

/**
 * argstostr - Concatenates all the arguments of the program.
 * @ac: count
 * @av: vector
 *
 * Return: A pointer, and NULL on failure.
 */
char *argstostr(int ac, char **av)
{
	int c, i, j;
	char *str;
	int size = (ac - 3) * strlen(*av);

	if (ac == 0 || av == NULL)
		return (NULL);

	str = (char *)malloc(size * sizeof(char));

	if (str == NULL)
		return (NULL);

	j = 0;
	c = 0;
	while (c < ac)
	{
		for (i = 0; i < (int)(strlen(av[c])); i++)
			str[j++] = av[c][i];

		str[j++] = '\n';
		c++;
	}

	return (str);
}
