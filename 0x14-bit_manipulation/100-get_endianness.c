#include "main.h"

/**
 * get_endianness - A func that checks if endianness is big or small.
 * Return: 0 if big and 1 if small
 */

int get_endianness(void)
{
int k = 1;
if ((k >> 31) == 1)
return (0);
else
return (1);
}
