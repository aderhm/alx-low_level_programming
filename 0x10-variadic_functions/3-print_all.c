#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * print_all - prints anything.
 * @format: a list of types of arguments passed to the function
 *
 * Return: void.
 */
void print_all(const char * const format, ...)
{
	int i, d, len = strlen(format);
	double f;
	char c;
	char *s;
	va_list args;

	va_start(args, format);
	i = 0;
	while (i < len)
	{
		switch (format[i])
		{
			case 'c':
				c = va_arg(args, int);
				printf("%c", c);
				break;
			case 'i':
				d = va_arg(args, int);
				printf("%d", d);
				break;
			case 'f':
				f = va_arg(args, double);
				printf("%f", f);
				break;
			case 's':
				s = va_arg(args, char *);
				if (s == NULL)
					printf("(nil)");
				printf("%s", s);
				break;
			default:
				break;
		}
		if (i != len - 1 && (format[i] == 'c' || format[i] == 'i'
			|| format[i] == 'f' || format[i] == 's'))
			printf(", ");
		i++;
	}
	va_end(args);
	printf("\n");
}
