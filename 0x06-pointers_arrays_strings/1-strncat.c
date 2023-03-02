#include "main.h"
/**
 * *_strncat - a function that concatenates two strings.
 * @dest: string1
 * @src: string2
 * @n: variable
 * Return: dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	int num1;
	int num2;
	int i;

	num1 = 0;
	num2 = 0;

	while (dest[num1] != '\0')
		num1++;
	while (src[num2] != '\0')
		num2++;
	for (i = 0; i < n; i++)
	{
		dest[num1] = src[i];
		num1++
	}
	return (dest);
}
