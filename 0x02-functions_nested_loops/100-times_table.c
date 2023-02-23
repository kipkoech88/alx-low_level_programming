#include "main.h"
#include <stdio.h>

/**
 * print_times_table - prints n table times
 *@n: number of times the table should be
 *
 * Return: 0 (success)
 */

void print_times_table(int n)
{
	int m, p, i;

	if (n > 15 || n < 0)
	{
	}
	else
	{
		for (i = 0; i <= n; i++)
		{
			_putchar('0');
			for (m = 1; m <= n; m++)
			{
				_putchar(',');
				_putchar(' ');
				p = m * i;

				if (p <= 99)
				{
					_putchar(' ');
				}

				if (p <= 9)
				{
					_putchar(' ');
				}
				else if (p > 99)
				{
					_putchar((p / 100) + '0');
					_putchar(((p / 10) % 10) + '0');
				}
				else
				{
					_putchar((p / 10) + '0');
				}
				_putchar((p % 10) + '0');
			}
			_putchar('\n');
		}
	}
}
