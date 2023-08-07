#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <elf.h>

/*
 * Display information contained in the ELF header at the start of an ELF file.
 * Usage: elf_header elf_filename
 * @filename: the name of the file
 * Format: the same as readelf -h (version 2.26.1)
 * If the file is not an ELF file, or on error, exit with status code 98 and
 * display a comprehensive error message to stderr.
 * Return: None
 */
void display_elf_header(const char *filename)
{
	int fd, i;

	Elf32_Ehdr elf_header;
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		fprintf(stderr, "Error: Cannot open file '%s'\n", filename);
		exit(98);
	}
	if (read(fd, &elf_header, sizeof(Elf32_Ehdr)) != sizeof(Elf32_Ehdr))
	{
		fprintf(stderr, "Error: Failed to read ELF header\n");
		close(fd);
		exit(98);
	}
	if (elf_header.e_ident[EI_MAG0] != ELFMAG0 || elf_header.e_ident[EI_MAG1] != ELFMAG1 || elf_header.e_ident[EI_MAG2] != ELFMAG2 || elf_header.e_ident[EI_MAG3] != ELFMAG3)
	{
		fprintf(stderr, "Error: '%s' is not a valid ELF file\n", filename);
		close(fd);
		exit(98);
	}
	printf("Magic:                  ");
	for (i = 0; i < EI_NIDENT; i++)
	{
		printf("%02x ", elf_header.e_ident[i]);
	}
	printf("\nClass:                  %s\n", elf_header.e_ident[EI_CLASS] == ELFCLASS32 ? "ELF32" : "ELF64");
	printf("Data:                   %s\n", elf_header.e_ident[EI_DATA] == ELFDATA2LSB ? "2's complement, little-endian" : "Unknown data format");
	printf("Version:                %d (current)\n", elf_header.e_ident[EI_VERSION]);
	printf("OS/ABI:                 %s\n", elf_header.e_ident[EI_OSABI] == ELFOSABI_SYSV ? "UNIX - System V" : "Others");
	printf("ABI Version:            %d\n", elf_header.e_ident[EI_ABIVERSION]);
	printf("Type:                   %d\n", elf_header.e_type);
	printf("Entry point address:    0x%lx\n", (unsigned long)elf_header.e_entry);
	close(fd);
}
/**
 * main - entry point
 * @argc: arg count
 * @argv: arg variable
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		fprintf(stderr, "Usage: %s elf_filename\n", argv[0]);
		return (1);
	}
	display_elf_header(argv[1]);
	return (0);
}
