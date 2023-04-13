#include "main.h"

/*
 * read_textfile - a function that reads a text file and prints it.
 * @filename: variable of pointer.
 * @letters: letters to be printed.

 * Return: Actua letters to be read and printed.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int file;
	ssize_t j, k;
	char *buffer_f;

	if (!(filename))
	{
	return (0);
	}

	file = open(filename, O_RDONLY);

	if (file == -1)
	{
	return (0);
	}

	buffer_f = malloc(sizeof(char) * (letters));
	if (!buffer_f)
	{
	return (0);
	}

	j = read(file, buffer_f, letters);
	k = write(STDOUT_FILENO, buffer_f, j);

	close(file);

	free(buffer_f);

	return (k);
}

