/**
 * _strncat - Concatenates two strings.
 * @src: The source sting
 * @dest: The destination
 * @n: The number of bytes (characters)
 *
 * Return: The pointer to the resulting string dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j, k, l, destlen = 0, srclen = 0;

	i = 0;
	while (src[i] != '\0')
	{
		srclen++;
		i++;
	}

	i = 0;
	while (dest[i] != '\0')
	{
		destlen++;
		i++;
	}

	j = i + n;
	k = i + srclen;
	l = 0;
	while (i < j && i < k)
	{
		dest[i] = src[l];
		i++;
		l++;
	}

	return (dest);
}
