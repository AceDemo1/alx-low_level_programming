#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the standard output
 * @filename: name of the file to be read
 * @letters: number of letters to read and print
 * Return: the number of letters printed, or 0 if it failed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t f, r, w;
	char *b;

	if (filename == NULL)
		return (0);
	f = open(filename, O_RDONLY);
	if (f == -1)
		return (0);
	b = malloc(sizeof(char) * letters);
	if (b == NULL)
	{
		close(f);
		return (0);
	}
	r = read(f, b, letters);
	if (r == -1)
	{
		close(f);
		free(b);
		return (0);
	}
	w = write(STDOUT_FILENO, b, r);
	if (w == -1 || w != r)
	{
		close(f);
		free(b);
		return (0);
	}
	close(f);
	free(b);
	return (r);
}

