#include "main.h"

/**
 * puts_half - Prints half of a string
 * @str: The string to print
 * Return: void
 */

void puts_half(char *str)

{
        int j = 0;
        int k;

        while (str[j] != '\0')
        {
        j++;
        }
        if (j % 2 == 1)
        {
        j = (j - 1) / 2;
        j += 1;
        }
        else
        {
        j = j / 2;
        }

        for (k = 0; k < j; k++)
        {
        _putchar(str[k]);
       	_putchar('\n');
	}
}
