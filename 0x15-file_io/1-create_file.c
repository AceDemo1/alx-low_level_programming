#include "main.h"

/**
 * create_file - creates a file
 * @filename: filename.
 * @text_content: content writed in the file.
 *
 * Return: 1 if it success. -1 if it fails.
 */
int create_file(const char *filename, char *text_content)
{
	int f, w;
	int i = 0;

	if (filename == NULL)
		return (-1);
	f = open(filename, O_RDWR | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (f == -1)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[i] != '\0')
			i++;
		w = write(f, text_content, i);
		if (w == -1)
		{
			close(f);
			return (-1);
		}
	}
	close(f);
	return (1);
}
