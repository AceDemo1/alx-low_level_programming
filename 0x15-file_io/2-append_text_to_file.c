#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: file to append the text to
 * @text_content: content to append into the file
 *
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int f, w, i;

	if (filename  == NULL)
		return (-1);
	f = open (filename, O_WRONLY | O_APPEND);
	if (text_content != NULL)
		for  (i = 0; text_content[i] != '\0'; i++)
			;
	w = write(f, text_content, i);
	if (f == -1 || w == -1)
		return (-1);
	close(o);
	return (1);
}
