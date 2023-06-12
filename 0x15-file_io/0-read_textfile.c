#include "main.h"

/*
 * read_textfile -  reads a text file and prints it to the POSIX standard output.
 * @ilename: The name of the file.
 * @letters: The number of letters it should read and print
 * return:the actual number of letters it could read and print or 0 on failure.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int file;
	ssize_t nbr, nbw;
	char *buffer;

	if (filename == NULL)
		return (0);
	file = open(filename, O_RDONLY);
	if (file == -1)
		return (0);
	buffer = malloc(sizeof(char) * (letters));
	if (!buffer)
		return (0);
	while ((nbr = read(file, buffer, letters)) > 0)
		nbw = write(STDOUT_FILENO, buffer, nbr);
	if (nbr == -1 || nbw == -1 || nbr != nbw)
		return (0);
	close(file);
	free(buffer);
	return (nbw);
}
