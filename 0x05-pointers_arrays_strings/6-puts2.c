#include "main.h"

/**
 * puts2 - prints characters to the terminal
 * @str: string to be printed
 * Return: nothing
 *
 */

void puts2(char *str)
{
	int i;

	for (i = 0; i != '\0'; i++)
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
		_putchar('\n');
	}
}
