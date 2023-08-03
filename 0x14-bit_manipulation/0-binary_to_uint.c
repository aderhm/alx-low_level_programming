#include "main.h"
#include <string.h>

/**
 * power - Returns the power of a number
 * @base: base number,
 * @exp: exponential
 *
 * Return: the power @exp of @base.
 */
int power(int base, int exp)
{
	int res = 1;

	if (!exp)
		return (1);

	while (exp != 0)
	{
		res *= base;
		exp--;
	}

	return (res);
}

/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: points to a string of 0 and 1 chars
 *
 * Return: the converted number, or 0 if :
 * there is one or more chars in the string b that is not 0 or 1,
 * b is NULL.
 */
unsigned int binary_to_uint(const char *b)
{
	int i = 0, l = strlen(b) - 1;
	unsigned int ui = 0;

	if (!b)
		return (0);

	while (l >= 0)
	{
		if (b[l] != '0' && b[l] != '1')
			return (0);

		ui += ((b[l] - '0') * power(2, i));
		i++;
		l--;
	}

	return (ui);
}
