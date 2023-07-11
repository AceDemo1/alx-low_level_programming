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
	FILE *f;

        if (filename == NULL)
                return (0);
        f = fopen(filename, "r");
        if (f == NULL)
                return (0);
        b = malloc(sizeof(char) * letters);
        if (b == NULL)
        {
                close(file);
                return (0);
        }
	r = read(b, f, letters);
	if (r == -1)
	{
		close(f);
		free(buffer);
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

