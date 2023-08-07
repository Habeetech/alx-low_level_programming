#include "main.h"
#include <string.h>
#include <unistd.h>
#include <sys/stat.h>
#include <stdlib.h>
#include <fcntl.h>
/**
 * create_file - Creates a new file.
 * @filename: Name of the file to be created.
 * @text_content: A NULL terminated string to write to the file.
 * The file must have read/write permissions.
 * If the file already exists, its content will be truncated.
 * Return: 1 on success and -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t count;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
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
