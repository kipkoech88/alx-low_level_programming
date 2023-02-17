#include <stdio.h>

/**
 * main - prints alphabets
 * Return: 0 (success)
 */

int main(void)
{
	char first;

	for (first = 'a'; first <= 'z'; first++)
	{
		putchar(first);
	}
	putchar('\n');

	return (0);
}
