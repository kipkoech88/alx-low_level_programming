#include "main.h"
/**
 * more_numbers - prints 0 to 14 10 times
 * Return: void
 */

void more_numbers(void)
{
	int a, b;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 14; b++)
		{
			_putchar(b + '0');
		}
		_putchar('\n');
	}
}
