#include <stdio.h>
#include <fcntl.h>
#include <stdlib.h>
#include "main.h"
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
