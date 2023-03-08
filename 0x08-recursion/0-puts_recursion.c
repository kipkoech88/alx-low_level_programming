#include "main.h"
/**
 * _puts_recursion - prints a string includeing newline character
 * @s: pointer to the string to be prointed
 * Return: nothing
 */

void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
	{
		_putchar('\n');
	}
}
