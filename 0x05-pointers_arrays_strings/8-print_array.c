#include <stdio.h>
#include "main.h"

/**
 * print_array - a function tht prints n elements
 * of an array of integers, followed by a new line
 * @a: an input array
 * @n: an input integer
 * Return: nothing
 */

void print_array(int *a, int n)
{
	int b;

	for (b = 0; b < n; b++)
	{
		printf("%d", a[b]);

		if (b == n - 1)
			continue;
		printf(", ");
	}
	printf("\n");
}
