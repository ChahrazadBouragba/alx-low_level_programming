/**
 * create_file - creates a file
 * @filename: the name of the file to create
 * @text_content: adress of string to write to the file
 *
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int wr;
	int fileD;
	int length = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (length = 0; text_content[length];)
			length++;
	}

	fileD = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	wr = write(fileD, text_content, length);

	if (fileD == -1 || wr == -1)
		return (-1);

	close(fileD);

	return (1);
}
