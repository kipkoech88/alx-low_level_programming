#include <stdio.h>

/**
 *  main  - prints values of various types
 *
 * Return: returns 0 (success)
 */

int main(void)
{
	char n;
	int j;
	long int k;
	long long int i;
	float f;

	printf("Size of a char: %lu byte(s)\n", sizeof(n));
	printf("Size of an int: %lu byte(s)\n", sizeof(j));
	printf("Size of a long long int: %lu byte(s)\n", sizeof(i));
	printf("Size of a float: %lu byte(s)\n", sizeof(f));

	return (0);
}
