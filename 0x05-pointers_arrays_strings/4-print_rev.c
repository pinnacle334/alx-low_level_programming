#include "main.h"
/**
 * print_rev - a function that prints a string, in reverse.
 * @s: string
 * Return: string in reverse.
 */
void print_rev(char *s)
{
	int n = 0;

	while (s[n] != '\0')
	{
		n++;
	}
	for (n -= n; n >= 0; n--)
	{
		_putchar(s[n]);
	}
	_putchar('\n');
}
