#include "main.h"

/**
 * create_file - creates a file
 * @filename: filename.
 * @text_content: is a NULL terminated string to write to the file
 *
 * Return: 1 if it success. -1 if it fails.
 */
int create_file(const char *filename, char *text_content)
{
	int file, length, nbw;

	if (filename == NULL)
		return (-1);
	file = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (file == -1)
		return (-1);
	if (!text_content)
		text_content = "";
	length = strlen(text_content);
	nbw = write(file, text_content, length);
	if (nbw == -1)
	{
		close(file);
		return (-1);
	}
	close(file);
	return (1);
}
