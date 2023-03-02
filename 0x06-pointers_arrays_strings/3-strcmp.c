#include "main.h"
/**
 * _strcmp - a function that compares two strings.
 * @s1: first string.
 * @s2: second string.
 * Return: difference between strings.
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] == s2[i])
	{
		if (s1[i] == '\0')
			return (s1[i] - s2[i]);
		i++;
	}

	return (s1[i] - s2[i]);
}
