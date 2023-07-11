#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - A func that reads text file and print to the STDOUT
 * @filename:file name to be read
 * @letters: no of letters to be read
 *
 * Return: number of letters read
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffr;
	ssize_t fd;
	ssize_t x;
	ssize_t y;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buffr = malloc(sizeof(char) * letters);
	y = read(fd, buffr, letters);
	x = write(STDOUT_FILENO, buf, y);

	free(buffr);
	close(fd);
	return (x);
}
