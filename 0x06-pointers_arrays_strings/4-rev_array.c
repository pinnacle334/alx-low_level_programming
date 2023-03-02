#include "main.h"
/**
 * reverse_array - a function that reverses the content
 * of an array of integers.
 * @a: an array of integers.
 * @n: number of elements t swap.
 * Return: 0 (Success).
 */
void reverse_array(int *a, int n)
{
	int temp; /* holds value */
	int i;    /* counter */
	int j = n - 1; /* reverse counter */

	for (i = 0; i < j; i++)
	{
		temp = a[i];
		a[i] = a[j];
		a[j] = temp;
		j--;
	}
}
