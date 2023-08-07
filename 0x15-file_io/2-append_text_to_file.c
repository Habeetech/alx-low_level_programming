#include "main.h"
#include <fcntl.h>
#include <sys/stat.h>
#include <unistd.h>
#include <string.h>

/**
 * append_text_to_file - Appends text to the end of a file.
 * @filename: The name of the file.
 * @text_content: The NULL terminated string to add at the end of the file.
 * If the file does not exist or if you don't have the required
 * permission to write the file, return -1.
 * If filename is NULL, return -1.
 * If text_content is NULL, do not add anything to the file.
 * Return: 1 on success and -1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t count;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	if (text_content != NULL)
	{
		count = write(fd, text_content, strlen(text_content));
		if (count == -1)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}
