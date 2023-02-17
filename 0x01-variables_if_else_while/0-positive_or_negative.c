#include <stdlib.h>
#include <time.h>
/* main - program that prints the number stored in the variable */

/* Return: 0 (Success) */
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
		else if (n = 0)
			printf("%d is zero\n", n);
	}
	{
		else if (n < 0)
			printf("%d is negative", n);
	}

	return (0);
}
