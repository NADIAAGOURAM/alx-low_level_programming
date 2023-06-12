#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: filename.
 * @text_content: is a NULL terminated string to write to the file
 *
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file, length, nbw;

	if (filename == NULL)
		return (-1);
	file = open(filename, O_WRONLY | O_APPEND);
	if (file == -1)
		return (-1);
	if (text_content)
	{
		length = strlen(text_content);
		nbw = write(file, text_content, length);
		if (nbw == -1)
		{
			close(file);
			return (-1);
		}
	}
	close(file);
	return (1);
}
