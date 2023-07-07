#include <string.h>
#include <stdlib.h>
#include <math.h>
#include "main.h"

/**
 * binary_to_unit - A function that converts a binary
 * number to an unsigned int.
 * @b: pointer variable
 * Return: Always 0 (Success).
 */

unsigned int binary_to_unit(const char *b)
{
unsigned int result;
int lent;
int i;

result = 0;
lent = strlen(b);

if (lent == 0)
return (0);

for (i = lent - 1; i >= 0; i--)
{
	if (b[i] > '1')
		return (0);

	else if (b[i] == '1')
	{
		result = result + pow(2, lent - i - 1);
	}
}

return (result);
}
