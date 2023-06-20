#include "main.h"

/**
 * main - Entry point
 *
 * Prints alphabet in lowercase
 * Return: void
 **/
void print_alphabet(void)
{
	int i = 97;

	while (i <= 'z')
	{
		_putchar(i++);
	}

	_putchar('\n');
}
