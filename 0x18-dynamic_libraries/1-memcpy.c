/**
 * _memcpy - Copies memory area.
 * @dest: The destination.
 * @src: The source.
 * @n: The bytes of the memory to copy.
 *
 * Return: A pointer to the memory area @dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
