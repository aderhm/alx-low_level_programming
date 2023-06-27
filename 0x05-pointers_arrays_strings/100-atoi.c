#include "main.h"

/**
 * _atoi - Convert a string to an integer.
 * @s: The string to convert
 *
 * Return: The resulting number after conversion
 */
int _atoi(char *s)
{
	int i;
    int converted_value = 0;
    int sign = 1;
    int u = 1;

    i = 0;
    while (i != '\0')
    {
        if (s[i] == '-')
        {
            sign *= -1;
            s[i] = '*';
        }
        else if (s[i] == '+')
        {
            sign *= 1;
            s[i] = '*';
        }
        else if (s[i] < 48 || s[i] > 57)
        {
            s[i] = '*';
        }
        
        i++;
    }
    
    while (--i > 0)
    {
        if (s[i] != '*')
        {
            converted_value += s[i] * u;
            u *= 10;
        }
    }

    return (sign * converted_value);
}
