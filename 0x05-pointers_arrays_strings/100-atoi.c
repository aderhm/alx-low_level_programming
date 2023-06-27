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

	do
	{
		if (*s == '-')
		{
			sign *= -1;
		}
		else if (*s == '+')
		{
			sign *= 1;
		}
		else if (*s >= '0' && *s <= '9')
		{
			converted_value = (converted_value * 10) + (*s - '0');
		}
	} while (*s++);

	return (sign * converted_value);
}
