/**
 * _memset - Fills memory with a constant byte.
 * @s: The pointer the @n.
 * @b: The constant byte.
 * @n: The bytes of the memory to fill.
 *
 * Return: A pointer to the memory area @s.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
