#include "main.h"

/**
 * flip_bits - A func that find the minimum number of
 * bits to be changed
 * @val1: num to be modified
 * @val2: second numto be modified
 * Return: number of bits
 */
unsigned int flip_bits(unsigned long int val1, unsigned long int val2)
{
	unsigned int bits;

	for (bits = 0; val1 || val2; val1 >>= 1, val2 >>= 1)
	{
		if ((j & 1) != (k & 1))
		{
		bits++;
		}
	}

	return (bits);
}
