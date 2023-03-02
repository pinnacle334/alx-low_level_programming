#include "main.h"
/**
 * *string_toupper - a function that changes all lowercase 
 * letters of a string to uppercase.
 * @n: sting.
 * Return: String in uppercase.
 */
char *string_toupper(char *n)
{
	int i;
	int j;

	i = 0;
	j = 32;

	while (n[i])
	{
		if ((n[i] >= 'a') && (n[i] <= 'z'))
			n[i] -= j;
		i++;
	}

	_putchar('\0');
	return(n);
}
