#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * close_fd - closes a file descriptor
 * @fd: The file descriptor
 *
 * Return: void.
 */
void close_fd(int fd)
{
	int cls;

	cls = close(fd);

	if (cls == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}


/**
 * main - copies the content of a file to another file.
 * @ac: Number of aruments
 * @av: Array that contains the argument.
 *
 * Return: Always 0.
 */
int main(int ac, char **av)
{
	int av1, av2, r, w;
	char *buffer;

	if (ac != 3)
	{
		write(2, "Usage: cp file_from file_to\n", 28);
		exit(97);
	}
	buffer = malloc(sizeof(buffer) * 1024);
	if (!buffer)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
		exit(99);
	}
	av1 = open(av[1], O_RDONLY);
	r = read(av1, buffer, 1024);
	av2 = open(av[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	do {
		if (av1 == -1 || r == -1)
		{
			dprintf(2, "Error: Can't read from file %s\n", av[1]);
			free(buffer);
			exit(98);
		}
		w = write(av2, buffer, r);
		if (av2 == -1 || w == -1)
		{
			dprintf(2, "Error: Can't write to %s\n", av[2]);
			free(buffer);
			exit(99);
		}
		r = read(av1, buffer, 1024);
		w = open(av[2], O_WRONLY | O_APPEND);

	} while (r > 0);
	free(buffer);
	close_fd(av1);
	close_fd(av2);

	return (0);
}
