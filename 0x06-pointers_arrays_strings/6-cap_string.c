/**
 * cap_string - Capitalizes all words of a string.
 * @s: The string
 *
 * Return: The string
 */
char *cap_string(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i + 1] == '\0')
			break;

		if (s[0] >= 'a' && s[0] <= 'z')
			s[0] -= 32;

		if (s[i] == ' ' || s[i] == '.' || s[i] == '\n' || s[i] == '\t')
		{
			if (s[i + 1] >= 'a' && s[i + 1] <= 'z')
				s[i + 1] -= 32;
		}

		i++;
	}

	return (s);
}
