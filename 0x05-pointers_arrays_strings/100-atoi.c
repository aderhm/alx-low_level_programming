#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _atoi - Convert a string to an integer.
 * @s: The string to convert
 *
 * Return: The resulting number after conversion
 */
int _atoi(char *s)
{
	int i;
	int converted_value = 0;
	int sign = 1;
	int u = 1;
	char *str = malloc(strlen(s) + 1);
	strcpy(str, s);

	i = 0;
	while (i != '\0')
	{
		if (str[i] == '-')
		{
			sign *= -1;
			str[i] = '*';
		}
		else if (s[i] == '+')
		{
			sign *= 1;
			str[i] = '*';
		}
		else if (s[i] < 48 || s[i] > 57)
		{
			str[i] = '*';
		}

		i++;
	}

	printf("%s\n", str);

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

