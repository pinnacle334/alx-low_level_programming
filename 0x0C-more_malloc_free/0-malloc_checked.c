#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - a function that allocates memory.
 * @b: size
 * Return: pointer.
 */

void *malloc_checked(unsigned int b)
{
	int ptr;

	ptr = malloc(sizeof(int) * b);
	if (ptr == NULL)
		return (NULL);

	return (ptr);
}
