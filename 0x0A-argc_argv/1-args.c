#include <stdio.h>
#include "main.h"

/**
 * main - a function that prints the number of arguments.
 * @argc: no of arguments
 * @argv: array
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	(void) argv; /*Ignore argv*/
		printf("%d\n", argc - 1);

		return (0);
}
