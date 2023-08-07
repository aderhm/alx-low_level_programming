#include "main.h"
#include <stdio.h>

/**
 * create_file - creates a file.
 * @filename: the filename,
 * @text_content: is a NULL terminated string to write to the file.
 *
 * Return: 1 on success,
 * -1 on failure (file can not be created,
 *	file can not be written,
 *	write “fails”, etc…)
 */
int create_file(const char *filename, char *text_content)
{
	FILE *file;

	if (!filename)
		return (-1);

	file = fopen(filename, "w");
	if (!file)
		return (-1);

	fprintf(file, "%s", text_content);
	fclose(file);

	return (1);
}
