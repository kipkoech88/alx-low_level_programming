#include <stdio.h>

/**
 * main - Entry point
 * Return: 0 (Success)
 */

int main(void)
{
	int a;

	for (a = 1; a < 90; a++)
	{
		if ((a / 10) != (a % 10) && ((a % 10) != 0))
		{
			putchar((a / 10) + '0');
			putchar((a % 10) + '0');
			if (a != 89)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}
