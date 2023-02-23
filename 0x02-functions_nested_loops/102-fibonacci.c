#include <stdio.h>

/**
 * main - prints fibonacci series
 *
 * Return: 0 (Success)
 */

int main(void)
{
	int a;
	unsigned long b, c, s;

	b = 0;
	c = 1;

	for (a = 0; a < 50; a++)
	{
		s = b + c;
		printf("%lu", b);
		b = c;
		c = s;

		if (a == 49)
		{
			printf("\n");
		}
		else
		{
			printf(", ");
		}
	}
	return (0);
}
