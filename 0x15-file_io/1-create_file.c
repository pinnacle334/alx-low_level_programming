#include "main.h"

/**
 * create_file - A func that creates a file.
 * @filename: file name
 * @text_content: string pointer to ba written
 *
 * Return: 1 (Success)
 */
int create_file(const char *filename, char *text_content)
{
	int fd, x, lent = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (lent = 0; text_content[lent];)
			lent++;
	}

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	x = write(fd, text_content, lent);

	if (fd == -1 || x == -1)
		return (-1);

	close(fd);

	return (1);
}
