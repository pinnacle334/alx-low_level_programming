#include "main.h"

/**
 * puts_half - Prints half of a string
 * @str: The string to print
 * Return: void
 */

void puts_half(char *str)
{
	int i, k;

	for (i = 0; str[i] != '\0'; i++)
	{
	}
	k = (i - 1)/2;

	for (; str[k] != '\0'; k++)
		_putchar(str[k]);
	_putchar('\n');
}
