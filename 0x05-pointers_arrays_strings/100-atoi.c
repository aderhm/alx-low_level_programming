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
	unsigned int converted_value = 0;
	int sign = 1;
	int u = 1;

	while (*s++)
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
		if (*s != '*')
		{
			converted_value += *s * u;
			u *= 10;
		}
	}


	return (sign * converted_value);
}
