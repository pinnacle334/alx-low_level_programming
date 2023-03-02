#include "main.h"
#include <string.h>
/**
 * *_strcat - a function that concatenates two strings.
 * @dest: string
 * @src: second string
 * Return: Always 0
 */
char *_strcat(char *dest, char *src)
{
	char dest[] = "abc ";
	char src[] = "de\n";
	char *ptr;

	ptr = strcat(dest, src);
	_putchar(ptr);
	return (0);
}
