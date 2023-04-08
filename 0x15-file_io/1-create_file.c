#include <stdlib.h>
#include <unistd.h>
#include "main.h"
#include <fcntl.h>
#include <stdio.h>

/**
 * create_file - creates a file
 * @filename: file to be creayes
 * @text_content: null terminated string to write to the file
 * Return: 1 on success and -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	FILE *file;
	ssize_t ret;
	int count;

	count = sizeof(text_content);
	if (filename == NULL)
		return (-1);


	file = open(filename, O_RDONLY | O_CREAT | O_WRONLY);
	if (file != NULL)
		return (1);
	if (text_content != NULL)
	{
		ret = write(file, text_content, count);
		return (ret);
	}
	else
		return (-1);
	fclose(file);
}
