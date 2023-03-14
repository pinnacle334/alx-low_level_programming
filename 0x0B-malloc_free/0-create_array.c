#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_array - a function that creates an array of chars,
 * and initializes it with a specific char.
 * @size: size
 * @c: variabe.
 * Return: 0.
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;

	scanf("%u", &size);
	char *arr = (char *)malloc(size * sizeof(char));

	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}

}
