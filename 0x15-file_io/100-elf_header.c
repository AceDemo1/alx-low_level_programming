#include "main.h"

/**
 * error_exit - Prints an error message to stderr and exits with status code 98
 * @msg: The error message to display
 */
void error_exit(char *msg)
{
	dprintf(STDERR_FILENO, "%s", msg);
	exit(98);
}

/**
 * print_elf_header - Prints the information in the ELF header
 * @header: The ELF header structure
 */
void print_elf_header(Elf64_Ehdr *header)
{
	int i;

	printf("ELF Header:\n");

	/* Print Magic */
	printf("  Magic:   ");
	for (i = 0; i < EI_NIDENT; i++)
		printf("%02x%c", header->e_ident[i], i == EI_NIDENT - 1 ? '\n' : ' ');

	/* Print Class */
	printf("  Class:                             ");
	switch (header->e_ident[EI_CLASS])
	{
	case ELFCLASS32:
		printf("ELF32\n");
		break;
	case ELFCLASS64:
		printf("ELF64\n");
		break;
	default:
		printf("<unknown>\n");
		break;
	}

	/* Print Data */
	printf("  Data:                              ");
	switch (header->e_ident[EI_DATA])
	{
	case ELFDATA2LSB:
		printf("2's complement, little endian\n");
		break;
	case ELFDATA2MSB:
		printf("2's complement, big endian\n");
		break;
	default:
		printf("<unknown>\n");
		break;
	}

	/* Print Version */
	printf("  Version:                           %d (current)\n", header->e_ident[EI_VERSION]);

	/* Print OS/ABI */
	printf("  OS/ABI:                            ");
	switch (header->e_ident[EI_OSABI])
	{
	case ELFOSABI_SYSV:
		printf("UNIX - System V\n");
		break;
	case ELFOSABI_NETBSD:
		printf("UNIX - NetBSD\n");
		break;
	case ELFOSABI_SOLARIS:
		printf("UNIX - Solaris\n");
		break;
	default:
		printf("<unknown: %d>\n", header->e_ident[EI_OSABI]);
		break;
	}

	/* Print ABI Version */
	printf("  ABI Version:                       %d\n", header->e_ident[EI_ABIVERSION]);

	/* Print Type */
	printf("  Type:                              ");
	switch (header->e_type)
	{
	case ET_NONE:
		printf("NONE (No file type)\n");
		break;
	case ET_REL:
		printf("REL (Relocatable file)\n");
		break;
	case ET_EXEC:
		printf("EXEC (Executable file)\n");
		break;
	case ET_DYN:
		printf("DYN (Shared object file)\n");
		break;
	case ET_CORE:
		printf("CORE (Core file)\n");
		break;
	default:
		printf("<unknown: %d>\n", header->e_type);
		break;
	}

	/* Print Entry point address */
	printf("  Entry point address:               %lx\n", (unsigned long)header->e_entry);
}

/**
 * main - Entry point of the program
 * @argc: The number of command-line arguments
 * @argv: An array of command-line argument strings
 * Return: 0 on success, 98 on failure
 */
int main(int argc, char **argv)
{
	int fd;
	Elf64_Ehdr header;

	if (argc != 2)
	{
		dprintf(STDERR_FILENO, "Usage: elf_header elf_filename\n");
		exit(98);
	}

	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
		error_exit("Error: Cannot open file\n");

	if (read(fd, &header, sizeof(header)) != sizeof(header))
		error_exit("Error: Cannot read ELF header\n");

	if (header.e_ident[EI_MAG0] != ELFMAG0 ||
	    header.e_ident[EI_MAG1] != ELFMAG1 ||
	    header.e_ident[EI_MAG2] != ELFMAG2 ||
	    header.e_ident[EI_MAG3] != ELFMAG3)
		error_exit("Error: Not an ELF file\n");

	print_elf_header(&header);

	close(fd);
	return (0);
}

