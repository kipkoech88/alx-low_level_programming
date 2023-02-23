#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - print inputed number to 98
 * @n: number to start from
 *
 * Return: 0 (success)
 */

void print_to_98(int n)
{
	int a;

	if (n < 98)
	{
		for (a = n; a <= 98; a++)
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
		printf("%d\n", n);
	}
	else if (n > 98)
	{
		for (a = n; a >= 98; a--)
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
