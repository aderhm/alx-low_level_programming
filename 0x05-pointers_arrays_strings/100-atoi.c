#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _atoi - Convert a string to an integer.
 * @s: The string to convert
 *
 * Return: The resulting number after conversion
 */
int _atoi(char *s)
{
	int i;
	unsigned int converted_value = 0;
	int sign = 1;
	int u = 1;

	i = 0;
	while (i != '\0')
	{
		if (*s == '-')
		{
			sign *= -1;
			*s = '*';
		}
		else if (*s == '+')
		{
			sign *= 1;
			*s = '*';
		}
		else if (*s < '0' || *s > '9')
		{
			*s = '*';
		}

		i++;
	}

	printf("%s\n", s);

	while (--i > 0)
	{
		if (str[i] != '*')
		{
			converted_value += str[i] * u;
			u *= 10;
		}
	}

	free(str);

	return (sign * converted_value);
}

