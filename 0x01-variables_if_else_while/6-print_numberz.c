#include <stdio.h>

/**
 * main - prints numbers of base 10
 * Return: 0 (success)
 */

int main(void)
{
	int k;

	for (k = 0; k < 10; k++)
	{
		putchar(k + '0');
	}
	putchar('\n');

	return (0);
}
