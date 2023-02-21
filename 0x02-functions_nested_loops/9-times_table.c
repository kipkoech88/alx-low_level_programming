#include "main.h"

/**
 * times_table - returns 9 times table
 *
 * Return: returns 0 success
 */

void times_table(void)
{
	int i, j, m;

	for (i = 0; i <= 9; i++)
	{
		_putchar('0');
		for (m = 1; m <= 9; m++)
		{
			_putchar(',');
			_putchar(' ');

			j = i * m;

			if (j <= 9)
			{
				_putchar(' ');
			}
			else
			{
				_putchar((j / 10) + '0');
			}
			_putchar((j % 10) + '0');
		}
		_putchar('\n');
	}
}
