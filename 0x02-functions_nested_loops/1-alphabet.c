#include "main.h"

/**
 * print_alphabet - prints all lowercase letters
 *
 * Return: void
 */

void print_alphabet(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
	{
		_putchar(a);
	}
	_putchar('\n');
}

/**
 * main -Entry point
 * Return: 0 success
 */

int main(void)
{
	print_alphabet();
	return (0);
}
