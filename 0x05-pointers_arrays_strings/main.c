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

	ptr = &n;
	*ptr = 98;
	putchar('n');
	putchar('\n');
}
