#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the screen
 * @n: number of lines in the diagonal
 * Return: Void
 */

void print_diagonal(int n)
{
	int a;

	if (n > 0)
	{
		for (a = 0; a <= n; a++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}
