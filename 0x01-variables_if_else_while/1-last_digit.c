#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * main - checks if number is negative or positive
 * Return: returns 0 (Success)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	int last = n % 10;

	if (last > 5)
	{
		printf("Last digit of %d is %d and is greater than 5", n, last);
	}
	else if (last == 0)
	{
		printf("Last digit of %d is %d and is 0", n, last);
	}
	else if (last < 6 && last != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0", n, last);
	}

	return (0);
}
