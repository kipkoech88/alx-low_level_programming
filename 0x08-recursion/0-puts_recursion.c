#include <stdio.h>
#include "main.h"

/**
 * _puts_recursion - Prints 
 * s: character pointer
 * @s:ptr to the string
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
