#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>

char *create_buffer(char *file);
void close_file(int fd);

/**
 * create_buffer - allocates 1024 bytes for buffer
 * @file: pointer to the name of the file
 *
 * Return: address to the new buffer
 */

char *create_buffer(char *file)
{
	char *buf;

	buf = malloc(sizeof(char) * 1024);

	if (buf == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", file);
		exit(99);
	}

	return (buf);
}

/**
 * close_file - closes the descriptor file
 * @fd: the file descriptor
 */

void close_file(int fd)
{
	int c;

	c = close(fd);

	if (c == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - copies the contents of a file to another
 * @argc: The number of arguments
 * @argv: array of pointers to the arguments
 *
 * Return: returns 0 on success
 */

int main(int argc, char *argv[])
{
	int start, dist, rd, wr;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_start file_dist\n");
		exit(97);
	}

	buffer = create_buffer(argv[2]);
	start = open(argv[1], O_RDONLY);
	rd = read(start, buffer, 1024);
	dist = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	if (start == -1 || rd == -1)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't read start file %s\n", argv[1]);
		free(buffer);
		exit(98);
	}

	do {
		wr = write(dist, buffer, rd);
		if (dist == -1 || wr == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write dist %s\n", argv[2]);
			free(buffer);
			exit(99);
		}

		rd = read(start, buffer, 1024);

	} while (rd > 0);

	free(buffer);
	close_file(start);
	close_file(dist);

	return (0);
}
