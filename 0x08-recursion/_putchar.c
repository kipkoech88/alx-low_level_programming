#include <unistd.h>

/**
 * _putchar - writes character to standard output
 * @c: character to print
 * Return: On success (1)
 * ,On error: (-1)
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
