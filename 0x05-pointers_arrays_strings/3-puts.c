#include "main.h"

/**
 * _puts - prints string on the screen
 * @str: string to be printed
 * Return: nothing
 */

void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
