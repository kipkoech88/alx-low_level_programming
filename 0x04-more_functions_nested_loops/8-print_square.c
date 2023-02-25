#include "main.h"
/**
 * print_square - prints square in the terminal
 * @size: size of the square to be printed
 * Return: void
 */

void print_square(int size)
{
	int a, i;

	if (size > 0)
	{
		for (a = 0; a < size; a++)
		{
			for (i = 0; i < size; i++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
		_putchar('\n');
	}
	else
		_putchar('\n');
}
