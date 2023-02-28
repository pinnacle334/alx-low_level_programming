#include "main.h"
/**
 * _strlen - Write a function that returns the length of a string.
 * @s: variable.
 * Return: 0.
 */
int _strlen(char *s)
{
	int i = 1, length = 0;
	char pl = s[0];

	while (pl != '\0')
	{
		length++;
		pl = s[i++];
	}
	return (length);
}
