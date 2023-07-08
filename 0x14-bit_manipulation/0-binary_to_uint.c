#include "main.h"

/**
 * binary_to_uint - A func that converts bin num to unsigned int
 * @bin: string holding binary numbers
 *
 * Return: decimal numbers
 */
unsigned int binary_to_uint(const char *bin)
{
	int p;
	unsigned int result = 0;

	if (!bin)
	return (0);

	for (p = 0; bin[p]; p++)
	{
		if (bin[j] < '0' || bin[p] > '1')
		return (0);
		result = 2 * result + (bin[p] - '0');
	}

	return (result);
}
