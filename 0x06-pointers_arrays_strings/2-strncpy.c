#include <stdio.h>

/**
 * _strncpy - Copies a string.
 * @src: The source sting
 * @dest: The destination
 * @n: The number of bytes (characters)
 *
 * Return: The pointer to the resulting string dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}

	return (dest);
}
