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

	j = 'a' - 'A';

	i = 0;
	while (n[i] != '\0')
	{
		if ((n[i] >= 'a') && (n[i] <= 'z'))
			n[i] -= j;
		i++;
	}
	return(n[i]);
}
