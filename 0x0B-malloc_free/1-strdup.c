#include <string.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - a function that returns a pointer to a newly
 * allocated space in memory, which contains a copy
 * of the string given as a parameter.
 * @str: pointer.
 * Return:0.
 */

char *_strdup(char *str)
{
	int length = strlen(str);
	char *copy = malloc(length + 1);

	strcpy(copy, str);

	if (copy == NULL)
	{
	 printf("failed to allocate memory\n"); 
	}
	return (copy);
}
