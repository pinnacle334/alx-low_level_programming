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

	j = 32;

	i = 0;
	while (n[i])
	{
		if ((n[i] >= 'a') && (n[i] <= 'z'))
			n[i] -= j;
		i++;
	}
	return(n[i]);
}
