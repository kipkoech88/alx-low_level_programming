#include "main.h"

/**
 * puts_half - prints second half of a string
 * @str: string to be printedhalf
 * Return: nothing
 */

void puts_half(char *str)
{
	int i, j, k;

	i = 0;

	while (str[i] != '\0')
		i++;

	j = (i + 1) / 2;

	for (i = j; str[i]; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
