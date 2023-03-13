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
	int size;

	char *arr = (char *)malloc(size * sizeof(char));

	if (arr == NULL)
	{
		return (NULL);
	}
	for (int i = 0; i < size; i++)
	{
		arr[i] = c;
	}
	return (c);
}
