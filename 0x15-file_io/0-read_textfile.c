#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Read text file  and prints it to standard output
 * @filename: text file to read
 * @letters: the number of letters to be read and print
 * Return: returns the actual number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t file;
	ssize_t w;
	ssize_t q;

	file = open(filename, O_RDONLY);
	if (file == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	q = read(file, buffer, letters);
	w = write(STDOUT_FILENO, buffer, q);

	free(buffer);
	close(file);
	return (w);
}
