#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "main.h"

/**
 * create_file - creates a file
 * @filename: the name of the file to create
 * @text_content: adress of string to write to the file
 *
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	if (filename == NULL)
	{
		return (-1);
	}

	int fileD = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);

	if (fileD == -1) 
	{
		return (-1);
	}

	if (text_content != NULL)
	{
	ssize_t len = strlen(text_content);
	ssize_t written = write(fileD, text_content, len);
	
	if (written != len)
	{
		close(fileD);
		return (-1);
	}
	}

	close(fileD);
	return (1);
}
