#include "main.h"
#include <string.h>

/**
 * main - prints the name of the file it was compiled from.
 *
 * Return: Always 0.
 */
int main(void)
{
	int i, len = strlen(__FILE__);

	i = 0;
	while (i < len)
	{

		_putchar(__FILE__[i]);
		i++;
	}

	_putchar('\n');

	return (0);
}
