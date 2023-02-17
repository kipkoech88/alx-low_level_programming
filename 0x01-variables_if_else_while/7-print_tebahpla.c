#include <stdio.h>

/**
 * main - prints reversed alphabets
 * Return: 0 (success)
 */

int main(void)
{
	char alph;

	for (alph = 'z'; alph >= 'a'; alph--)
	{
		putchar(alph);
	}
	putchar('\n');

	return (0);
}
