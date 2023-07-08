#include "main.h"

/**
 * binary_to_uint -a func that  converts bi num to unsigned int
 * @bin: string holding the binary numbers
 *
 * Return: the decimal numbers
 */
unsigned int binary_to_uint(const char *bin)
{
	int i;
	unsigned int result = 0;

	if (!bin)
		return (0);

	for (i = 0; bin[i]; i++)
	{
		if (bin[i] < '0' || bin[i] > '1')
			return (0);
		result = 2 * result + (bin[i] - '0');
	}

	return (result);
}
