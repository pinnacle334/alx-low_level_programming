#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - program that determines if a number is positive, negative or zero.
 *
 *  Return: 0 (Success)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	{
		if (n > 0)
			printf("%d is positve\n", n);
	}
	{
		else if (n == 0)
			printf("%d is zero\n", n);
	}
	{
		else
			printf("%d is negative\n", n);
	}
	return (0);
}
