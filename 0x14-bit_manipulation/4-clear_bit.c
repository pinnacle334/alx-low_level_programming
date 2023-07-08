#include "main.h"

/**
 * clear_bit - A funct that set bit to 0 at a specific index
 * @num1: num looked for
 * @dexi: input index
 * Return: 0 (success)
 */
int clear_bit(unsigned long int *num1, unsigned int dexi)
{
	unsigned long int pqr = 0;

	if (dexi > 63)
	{
	return (-3);
	}
	pqr = 1 << dexi;
	pqr = ~pqr;
	*num1 = *num1 & pqr;
	return (0);
}
