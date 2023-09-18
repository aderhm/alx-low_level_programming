/**
 * _strspn - Gets the length of a prefix substring.
 * @s: The string.
 * @accept: The accepted bytes.
 *
 * Return: The number of bytes in the initial segment of @s.
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j, count = 0;

	i = 0;
	while (s[i] != ' ')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
				count++;

			j++;
		}

		i++;
	}

	return (count);
}
