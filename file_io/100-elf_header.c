#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <elf.h>

/**
 * print_error - Print error to stderr and exit
 * @msg: Error message
 */
void print_error(const char *msg)
{
	dprintf(STDERR_FILENO, "%s\n", msg);
	exit(98);
}

/**
 * check_elf - Validates if a file is an ELF file
 * @e_ident: ELF identification bytes
 */
void check_elf(unsigned char *e_ident)
{
	if (e_ident[EI_MAG0] != ELFMAG0 ||
			e_ident[EI_MAG1] != ELFMAG1 ||
			e_ident[EI_MAG2] != ELFMAG2 ||
			e_ident[EI_MAG3] != ELFMAG3)
	{
		print_error("Error: Not an ELF file");
	}
}

/**
 * print_magic - Prints the magic bytes of ELF
 * @e_ident: ELF identification
 */
void print_magic(unsigned char *e_ident)
{
	int i;

	printf("ELF Header:\n  Magic:   ");
	for (i = 0; i < EI_NIDENT; i++)
	{
		printf("%02x", e_ident[i_

