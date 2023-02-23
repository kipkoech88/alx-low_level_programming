#include "main.h"
/**
 * print_line - prints a line in the terminal
 * @n: number of times the _ will be printed
 * Return: 0 success
 */

void print_line(int n)
{
	int a;

	if (n > 0)
	{
		for (a = 1; a <= n; a++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}
