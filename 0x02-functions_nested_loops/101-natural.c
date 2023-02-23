#include <stdio.h>

/**
 * main - prints all natural numbers that are
 * multiples of 3
 * Return: 0 (success)
 */

int main(void)
{
	int a, s;

	s = 0;

	for (a = 0; a < 1024; a++)
	{
		if (((a % 3) == 0) || (a % 5) == 0)
		{
			s += a;
		}
	}
	printf("%d\n", s);
	return (0);
}
