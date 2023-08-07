#include "main.h"
#include <stdlib.h>

/**
 * append_text_to_file - appends text at the end of a file.
 * @filename: the filename,
 * @text_content: is a NULL terminated string to write to the file.
 *
 * Return: 1 on success,
 * -1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int oopen, wwrite, length;

	if (!filename)
		return (-1);

	length = 0;
	if (text_content)
	{
		while (text_content[length])
			length++;
	}

	oopen = open(filename, O_WRONLY | O_APPEND);
	wwrite = write(oopen, text_content, length);

	if (oopen == -1 || wwrite == -1)
		return (-1);

	close(oopen);

	return (1);
}
