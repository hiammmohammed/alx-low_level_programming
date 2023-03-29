#include "main.h"

/**
 * reverse_array - function reverses an array of integers
 *
 * @a: array argument to be reversed
 *
 * @n: number of elements in the array
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i;
	int j;

	for (i = 0; i < n--; i++)
	{
		j = a[i];
		a[i] = a[n];
		a[n] = j;
	}
}
