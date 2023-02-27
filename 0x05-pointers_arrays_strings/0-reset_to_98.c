#include "main.h"
/**
 * reset_to_98 -  function that takes a pointer to an int as parameter,
 * and updates the value it points to to 98.
 * @n: variable worked with
 * Return: Nothing.
 */

void reset_to_98(int *n);
{
	int n;
	int *ptr;

	n = 402;
	ptr = &n;
	_putchar(n);
	*ptr = 98;
	_putchar(n);
	_putchar('\n');
}
