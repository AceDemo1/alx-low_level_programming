#include "main.h"
/**
 * perr - print error message to the standard error output)
 * @msg: message to print
 */
void perr(const char *msg, const char *arg, int i)
{
	if (arg != NULL && i == 0)
		dprintf(STDERR_FILENO, "%s %s\n", msg, arg);
	else if (arg == NULL && i == 0)
		dprintf(STDERR_FILENO, "%s\n", msg);
	else if (arg == NULL && i != 0)
		dprintf(STDERR_FILENO, "%s %d\n", msg, i);
}
/**
 * main - copies the content of a file to another file
 * @argc: number of arguments passed to the program
 * @argv: array of arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int o, r, w, o1;
	char buf[1024];

	if (argc != 3)
	{
		perr("Usage: cp file_from file_to", NULL, 0);
		exit(97);
	}
	o = open(argv[1], O_RDONLY);
	r = read(o, buf, 1024);
	if (o == -1 || r == -1)
	{
		perr("Error: Can't read from file", argv[1], 0);
		exit(98);
	}
	o1 = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0644);
	w = write(o1, buf, r);
	if (o1 == -1 || w == -1 || w != r)
	{
		perr("Error: Can't write to", argv[2], 0);
		exit(99);
	}
	close(o);
	if (close(o) == -1)
	{
		perr("Error: Can't close", NULL, o);
		exit(100);
	}
	if (close(o1) == -1)
	{
		perr("Error: Can't close", NULL, o1);
		exit(100);
	}
	return (0);
}