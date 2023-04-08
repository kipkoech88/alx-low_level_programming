#include <stdlib.h>
#include <unistd.h>
#include "main.h"
#include <stdio.h>

/**
 * read_textfile - reads text from a file
 * @filename: filename
 * @letters: number of leter to be read
 * Return: 0 on success
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *file;
	char *line = NULL;


	file = fopen(filename, "r");
	if (file == NULL)
	{
		perror("fopen");
		return (0);
	}

	while ((getline(&line, &letters, file) != -1))
	{
		printf("%s", line);
	}

	fclose(file);
	if (line)
		free(line);


	return (0);
}
