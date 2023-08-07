#include "main.h"
#include <stdio.h>
#include <fcntl.h>
#include <stdlib.h>
/**
 * copy - Copies the content of one file to another.
 * @file_from: The source file.
 * @file_to: The destination file.
 * If the number of arguments is not correct,
 * exit with code 97 and print usage.
 * If file_to already exists, truncate it.
 * If file_from does not exist, or you cannot read it,
 * exit with code 98 and print an error message.
 * If you cannot create or write to file_to,
 * exit with code 99 and print an error message.
 * If you cannot close a file descriptor,
 * exit with code 100 and print an error message.
 * Permissions of the created file: rw-rw-r-- (0644 in octal).
 * If the file already exists, do not change the permissions.
 * You must read BUFFER_SIZE bytes at a time from
 * file_from to minimize system calls. Use a buffer.
 * Return: void
 */
void copy(const char *file_from, const char *file_to)
{
	FILE *file1, *file2;
	char buffer[1024];
	ssize_t read_count, write_count;

	file1 = fopen(file_from, "r");
	if (file1 == NULL)
	{
		printf("Error: Can't read from file %s\n", file_from);
		exit(98);
	}
	file2 = fopen(file_to, "w");
	if (file2 == NULL)
	{
		printf("Error: Can't write to %s\n", file_to);
		fclose(file1);
		exit(99);
	}
	while ((read_count = fread(buffer, 1, sizeof(buffer), file1)) > 0)
	{
		write_count = fwrite(buffer, 1, read_count, file2);
		if (write_count != read_count)
		{
			printf("Error: Can't write to %s\n", file_to);
			fclose(file1);
			fclose(file2);
			exit(99);
		}
	}
	fclose(file1);
	fclose(file2);
	if (file1 == NULL && file2 == NULL)
	{
		printf("Error: Can't close files.\n");
		exit(100);
	}
}
/**
 * main - entry point
 * @argc: arg count
 * @argv: arg variable
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Usage: %s source_file destination_file\n", argv[0]);
		return (1);
	}
	copy(argv[1], argv[2]);
	return (0);
}
