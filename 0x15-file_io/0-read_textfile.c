#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

/**
 * read_textfile - Reads a text file and prints its
 * content to the POSIX standard output.
 * @filename: Pointer to the file to be read.
 * @letters: Number of letters it should read and print.
 * Return: The actual number of letters read and printed
 * on success, or 0 on failure.
 * If the file could not be opened or read,
 * or if write fails, returns 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t bytes_read;
	char *buffer;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buffer = (char *)malloc(letters);
	if (buffer == NULL)
	{
		close(fd);
		return (0);
	}
	bytes_read = read(fd, buffer, letters);
	if (bytes_read == -1)
	{
		close(fd);
		free(buffer);
		return (0);
	}
	write(STDOUT_FILENO, buffer, bytes_read);
	close(fd);
	free(buffer);
	return (bytes_read);
}
