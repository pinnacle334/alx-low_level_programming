#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * str_concat - a function that concatenates two strings.
 * @s1: string1
 * @s2: string2
 * Return: 0.
 */

char *str_concat(char *s1, char *s2)
{
int len;
char *copy;

strcat(s1, s2);

len = strlen(s1);
copy = malloc(len + 1);

strcpy(copy, s1);
if (copy == NULL)
{
printf("Empty\n")
return (1);
}
return (copy);
}
