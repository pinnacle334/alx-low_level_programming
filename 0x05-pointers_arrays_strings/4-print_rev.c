#include "main.h"
/**
 * print_rev - a function that prints a string, in reverse.
 * forward is to count forward and b for backwards
 * @s: string
 * Return: string in reverse.
 */
void print_rev(char *s)
{
	int forward = 0;
	int i, b;

	for (i = 0; s[i] != '\0'; i++)
	{
		forward++;
	}
	for (b = (forward - 1); b >= 0; b--)
	{
		_putchar(s[b]);
	}
	_putchar('\n')
}
