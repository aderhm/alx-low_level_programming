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
	int i, srclen = 0;

	i = 0;
	while (src[i] != '\0')
	{
		srclen++;
		i++;
	}

	i = 0;
	while (i < n)
	{
		if (i > srclen)
			dest[i] = 0x00;
		else
			dest[i] = src[i];

		i++;
	}

	return (dest);
}
