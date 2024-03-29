#include "function_pointers.h"

/**
 * print_name - prints a name
 * @name: name to be printed
 * @f: function poinetr
 * Return: nothing
 */

void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
		return;
	f(name);
}
