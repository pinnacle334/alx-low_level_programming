#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - a function that allocates memory.
 * @d: pointer returned.
 * Return: 0.
 */

void *malloc_checked(unsigned int b)
{
	int *d;

	d = malloc(sizeof(int) * 12);

	return (d);
}
