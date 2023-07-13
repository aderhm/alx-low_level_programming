#include <stdlib.h>
#include <string.h>

/**
 * strtow - Splits a string into words.
 * @ac: the string to split.
 *
 * Return: A pointer to an array of strings,
 * and NULL on failure.
 */
char **strtow(char *str)
{
    int c, nwords = 0;
    char **arr;

    arr = malloc(sizeof(*arr) * 4);
    if (arr == NULL)
    {
        return (NULL);
    }

	while (*str)
	{
		if (*str != ' ')
		{
            c = 0;
            arr[nwords] = str;
			while (*str != ' ')
			{
                c++;
				str++;
			}
            arr[nwords][c] = '\0';
			nwords++;
		}
		str++;
	}
    
	return (arr);
}
