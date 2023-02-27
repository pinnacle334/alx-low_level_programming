#include <stdio.h>
/**
 * reset_to_98 -  function that takes a pointer to an int as parameter,
 * and updates the value it points to to 98.
 * @n: variable worked with
 * Return: Nothing.
 */

int main()
{
	int n;
	int *ptr;

	n = 402;
	ptr = &n;
	printf("%d\n", n);
	*ptr = 98;
	printf("%d\n", n);
	return (0);
}
