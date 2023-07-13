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
	while (text_content != NULL)
	{
		text_content[i];
		i++;
	}
	if (text_content != NULL)
	{
		w = write(f, text_content, i + 1);
		if (w == -1)
		{
			close(f);
			return (-1);
		}
	}
	close(f);
	return (1);
}

