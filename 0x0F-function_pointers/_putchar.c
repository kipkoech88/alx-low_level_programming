#include <unistd.h>

/**
 * _putchar - writes to the stdout
 * @c: character to print
 * Return: On success 0
 * On error: 1
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
