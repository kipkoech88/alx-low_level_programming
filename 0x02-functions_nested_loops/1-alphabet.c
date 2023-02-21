#include "main.h"

/**
 * main - Entry point
 *
 * print_alphabet: - prints lower case alphabets
 *
 * Return: 0 (Success)
 */

void print_alphabet(void);

int main(void)
{
	print_alphabet();
	return (0);
}

/**
 * print_alphabet - prints lowercase alphabet
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
