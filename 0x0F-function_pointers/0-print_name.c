#include <stdio.h>
#include <stdlib.h>

/**
 * print_name - prints name
 * @name: pointer to name address
 * @f: funtion pointer
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
