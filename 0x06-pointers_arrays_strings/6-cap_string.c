#include "main.h"
/**
 * *cap_string - a function that capitalizes all words of a string.
 * @n: string
 * Return: capitalized string.
 */

char *cap_string(char *n)
{
	int i;

	for (i = 0; n[i] != '\0'; i++)
	{
		if ((n[i] >= 97) && (n[i] <= 122))
		{
			if (n[i] == " ")
				continue;
		}
		n[i] -= 32;
		i++;
	}

	return (n);
}
