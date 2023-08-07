#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - reads a text file and prints it
 * to the POSIX standard output.
 * @filename: the filename,
 * @letters: the number of letters it should read and print.
 *
 * Return: the actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *output;
	ssize_t oopen, rread, wwrite;

	if (!filename)
		return (0);

	output = malloc(sizeof(char) * letters);
	if (!output)
		return (0);

	oopen = open(filename, O_RDONLY);
	rread = read(oopen, output, letters);
	wwrite = write(STDOUT_FILENO, output, rread);

	free(output);

	if (oopen == -1 || rread == -1 || wwrite == -1 || wwrite != rread)
		return (0);

	close(oopen);

	return (wwrite);
}
