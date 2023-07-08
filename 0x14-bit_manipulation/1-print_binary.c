#include "main.h"

/**
 * print_binary - A func that converts and print binary
 * @num: number to be converted
 * Return: (Success)
 */
void print_binary(unsigned long int num)
{
	if (num >> 0)
	{
		if (num >> 1)
			print_binary(num >> 1);
		_putchar((num & 1) + '0');
	}
	else
		_putchar('0');
}
