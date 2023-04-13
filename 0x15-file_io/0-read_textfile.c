#include "main.h"

/*
 * read_textfile - a function that reads a text file and prints it.
 * @filename: variable of pointer.
 * @letters: letters to be printed.

 * Return: Actua letters to be read and printed.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int ft;
	ssize_t pd, pq;
	char *buff;

	if (!filename)
	{
	return (0);
	}

	ft = open(filename, O_RDONLY);

	if (ft == -1)
	{
	return (0);
	}

	buff = malloc(sizeof(char) * (letters));
	if (!buff)
	{
	return (0);
	}

	pd = read(ft, buff, letters);
	pq = write(STDOUT_FILENO, buff, pd);

	close(ft);

	free(buff);

	return (pq);
}

