#include <stdlib.h>
#include "main.h"

/**
 * create_array - a function that creates an array of chars,
 * and initializes it with a specific char.
 * @n: size
 * @c: variabe.
 * Return: 0.
 */

char *create_array(unsigned int n, char c)
{
	unsigned int n;

	char *arr = (char *)malloc(size * sizeof(char));

	if (arr == NULL)
	{
		return ('\0');
	}
	int i = 0;

	for (i = 0; i < n; i++)
	{
		arr[i] = c;
	}
	return (c);
}
