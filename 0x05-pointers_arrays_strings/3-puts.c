#include "main.h"

/**
 * _puts - a function that prints a string to the stdout
 * @str: string input
 * Return: length of string
 */
void _puts(char *str)
{
	int i = 0;

	while (*str != '\0')
	{
		if (str[0] == '\0')
			break;
		_putchar(str[i]);
		str++;
		i++;
	}
	_putchar(10);
}
