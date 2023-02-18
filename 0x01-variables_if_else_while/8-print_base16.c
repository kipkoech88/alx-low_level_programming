#include <stdio.h>

/**
 * main - prints hexadecimals
 * Return: 0 (success)
 */

int main(void)
{
	int i;
	char le;

	for (i = 0; i < 10; i++)
	{
		putchar((i % 10) + '0');
	}

	for (le = 'a'; le <= 'f'; le++)
	{
		putchar(le);
	}

	putchar('\n');
	return (0);
}
