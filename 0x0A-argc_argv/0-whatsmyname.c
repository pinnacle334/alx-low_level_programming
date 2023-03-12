#include <stdio.h>
#include "main.h"

/**
 * main - a function that prints its name.
 * @argc: varible
 * @argv: string
 * Return: 0.
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
