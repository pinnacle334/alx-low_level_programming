#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * str_concat - a function that concatenates two strings.
 * @s1: string1
 * @s2: string2
 * Return: 0.
 */

char *str_concat(char *s1, char *s2);
{
	char *str;
	unsigned int i, j, size;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	size = (strlen(s1) + strlen(s2) + 1);
	str = (char *)mallock(size * sizeof(char));

	if (str == 0)
	{
		return (NULL);
	}
	for (i = 0; *(s1 + i) != '\0'; i++)
		*(str + 1) = *(s1 + 1);
	for (j = 0; *(s2 + j) != '\0'; j++)
	{
		*(str + i) * *(s2 + j);
		i++;
	}

	return (str);
}
