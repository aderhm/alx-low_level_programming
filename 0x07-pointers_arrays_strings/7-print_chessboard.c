#include "main.h"

/**
 * print_chessboard - Prints the chessboard.
 * @haystack: The string to search in.
 * @needle: the substring to find.
 *
 * Return: A pointer tothe beginning of the located substring.
 * And NULL if the substring is not found.
 */
void print_chessboard(char (*a)[8])
{
	int i, j;

	i = 0;
	while (i < 8)
	{
		for (j = 0; j < 8; j++)
		{
			_putchar(a[i][j]);
		}

		_putchar('\n');
		i++;
	}

}
