#include "main.h"

/**
 * get_bit - a func that returns the value of a bit at a given index
 * @num_b: num looked for
 * @dex:the bit index
 *
 * Return:value of bit
 */
int get_bit(unsigned long int num_b, unsigned int dex)
{
int bits;

if (dex > 63)
{
return (-1);
}
bits = (num_b >> dex) & 1;
return (bits);
}
