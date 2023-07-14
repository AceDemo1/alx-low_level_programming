#include "main.h"

#define BUF_SIZE 1024

/**
 * print_error - prints an error message to stderr
 * @code: error code
 * @file: file name
 *
 * Description: Prints error messages to the POSIX standard error based on the
 * provided error code and file name.
 */
void print_error(int code, char *file)
{
	if (code == 97)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
	else if (code == 98)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file);
	else if (code == 99)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
	else if (code == 100)
		dprintf(STDERR_FILENO, "Error: Can't close fd %s\n", file);
	exit(code);
}

/**
 * main - copies the content of a file to another file
 * @argc: number of arguments passed to the program
 * @argv: array of arguments
 *
 * Return: 0 on success, appropriate error code on failure
 *
 * Description: The main function copies the content of a file specified by the
 * file_from argument to a new file specified by the file_to argument. It reads
 * the file_from in chunks of BUF_SIZE bytes and writes them to file_to. It
 * performs error checking and prints appropriate error messages to the POSIX
 * standard error based on different failure scenarios.
 */
int main(int argc, char *argv[])
{
	int fd_from, fd_to, rd, wr;
	char buf[BUF_SIZE];

	if (argc != 3)
	{
		print_error(97, NULL);
	}
	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
		print_error(98, argv[1]);
	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0644);
	if (fd_to == -1)
	{
		print_error(99, argv[2]);
		close(fd_from);
	}
	while ((rd = read(fd_from, buf, BUF_SIZE)) > 0)
	{
		wr = write(fd_to, buf, rd);
		if (wr == -1 || wr != rd)
		{
			print_error(99, argv[2]);
			close(fd_from);
			close(fd_to);
		}
	}
	if (rd == -1)
	{
		print_error(98, argv[1]);
		close(fd_from);
		close(fd_to);
	}
	if (close(fd_from) == -1)
	{
		print_error(100, argv[1]);
		close(fd_to);
	}
	if (close(fd_to) == -1)
		print_error(100, argv[2]);
	return (0);
}
