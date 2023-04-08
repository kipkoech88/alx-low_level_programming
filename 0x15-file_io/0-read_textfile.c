#include <stdlib.h>
#include <unistd.h>
#include "main.h"
#include <stdio.h>
#include <fcntl.h>

/**
 * read_textfile - reads text from a file
 * @filename: filename
 * @letters: number of leter to be read
 * Return: 0 on success
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t r, w, o;

	if (filename == NULL)
	{
		return (0);
	}
	buffer = malloc(sizeof(char) * letters);

	o = open(filename, O_RDONLY);
	r = read(o, buffer, letters);
	w = write(STDOUT_FILENO, buffer, r);

	if (o == -1 || r == -1 || w == -1)
	{
		free(buffer);
		return (0);
	}
	free(buffer);
	close(o);

	return (w);
}
