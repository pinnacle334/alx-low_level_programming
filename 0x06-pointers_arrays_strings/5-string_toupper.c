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

	for (i = 0; n[i] != '\0'; i++)
	{
		if ((n[i] >= 97) && (n[i] <= 122))
			n[i] -= 32;
	}

	return (n);
}
