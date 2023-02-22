#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - print inputed number to 98
 *
 * Return: 0 (success)
 */

void print_to_98(int n)
{
	if (n < 98)
	{
		for (int a = n; a <= 98; a++)
		{
			if (a != 98)
			{
				printf("%d, ", a);
			}
			else
				printf("%d\n", a);
		}
	}
	else if (n == 98)
	{
		printf("%d", n);
	}
	else if (n > 98)
	{
		for (int a = n; a >= 98; a--)
		{
			if (a != 98)
			{
				printf("%d, ", a);
			}
			else
				printf("%d\n", a);
		}
	}
}
int main(void)
{
	print_to_98(0);
	_putchar('\n');
	print_to_98(106);
	print_to_98(-98);

	return (0);
}
