#include <stdio.h>

/**
 * main - prints alphabets except e and q
 * Return: 0 (success)
 */

int main(void)
{
	char alph;

	for (alph = 'a'; alph <= 'z'; alph++)
	{
		if (alph != 'q' && alph != 'e')
		{
			putchar(alph);
		}
	}
	putchar('\n');

	return (0);
}
