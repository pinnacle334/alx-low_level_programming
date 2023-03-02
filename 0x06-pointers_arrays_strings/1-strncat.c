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
	int num1 = 0; 
	int num2 = 0;
	int n > num2;

	while (dest[num1] != '\0')
		num1++;
	while (num2 >= 0)
	{
		dest[num1] = src[num2];
		if (src[num2] == n)
			break;
		num1++
		num2++
	}
	return (dest);
}
