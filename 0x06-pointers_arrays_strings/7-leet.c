/**
 * leet - Encodes a string into 1337.
 * @s: The string
 *
 * Return: The string
 */
char *leet(char *s)
{
	int i, j;
	char leet[8] = {'O', 'L', '*', 'E', 'A', '*', '*', 'T'};

	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while (j < 8)
		{
			if (s[i] == leet[j] || s[i] - 32 == leet[j])
			{
				s[i] = j + '0';
				break;
			}

			j++;
		}

		i++;
	}

	return (s);
}
