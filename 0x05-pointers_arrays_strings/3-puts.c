#include "main.h"

/**
 * _puts - a function that prints a string to the stdout
 * @str: string input
 * Return: length of string
 */
void _puts(char *str)
{
	for (int i = 0; str[i] != '\0'; ++i)
	{
		_putchar(str[i]);
	}
	_putchar(10);
}
