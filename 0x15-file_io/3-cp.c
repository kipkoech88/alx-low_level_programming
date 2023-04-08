#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include "main.h"

/**
 * main - copies a file contents to another
 * @c: arg count
 * @argv: args vector
 * Return: 0 on success and error on failure
 */

int main(int c, char *argv[])
{
	int r, w, o;
	char *buffer[1024];

	if (c < 3)
	{
		perror("Usage: cp file_from file_to");
		exit(97);
	}
	o = open(argv[1], O_RDONLY);

	if (o == -1)
	{
		perror("Error: Can't read from file ");
		exit(98);
	}
	w = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (w == -1)
	{
		perror("Error: Can't write to NAME_OF_THE_FILE");
		exit(99);
	}
	while ((r = read(o, buffer, sizeof(buffer))) > 0)
	{
		write(w, buffer, r);
	}
	close(o);
	close(w);
	return (0);
}
