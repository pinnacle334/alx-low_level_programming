#include "main.h"

/**
 * set_bit - A func that sets a bit to 1 at specific index
 * @deci: Points to num parameter
 * @post: the position of the num to be changed
 * Return: 0 (success)
 */

int set_bit(unsigned long int *deci, unsigned int post)
{
	unsigned long int pqr = 0;

	if (post > 63)
		return (-1);

	pqr = 1 << post;
	*deci = *deci | pqr;
	return (1);
}
