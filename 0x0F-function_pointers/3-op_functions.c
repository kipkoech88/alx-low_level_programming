#include "3-calc.h"
#include <stdlib.h>
/**
 * op_add - adds two int
 * @a: first int
 * @b: sec int;
 * Return: sum;
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - returns difference of a and b
 * @a: int
 * @b: int
 * Return: difference between a and b
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - records product of a and b
 * @a: int
 * @b: int
 * Return: product of a and b
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_mod - records remainder of division of b with a
 * @a: int
 * @b: int
 * Return: remainder
 */
int op_mod(int a, int b)
{
	return (a % b);
}

/**
 * op_div - returns division of a by b
 * @a: int
 * @b: int
 * Return: division of a by b
 */

int op_div(int a, int b)
{
	return (a / b);
}
