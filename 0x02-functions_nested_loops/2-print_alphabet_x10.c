#include "main.h"
/**
 * print_alphabet_x10 - a function that prints 10 times the alphabet, in lowercase
 *
 * Return: 0 (Success)
 *
 */
void print_alphabet_x10(void)
{
	char j;
	int i;

	i = 0;

	while (i < 10)
	{
		abc = 'a';
		while (j <= 'z')
		{
			_putchar(j);
			j++;
		}
		_putchar('\n');
		i++;
	}
}
