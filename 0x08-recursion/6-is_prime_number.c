#include "main.h"
#include <stdio.h>

/**
 * is_prime_number - a function that returns 1 if the input integer is prime
 * @n: number to be checked
 * Return: 1 if n is prime otherwise 0
 */

int is_prime_number(int n)
{
	int start = n / 2;

	if (n <= 1)
		return (0);
	return (is_prime(n, start));
}

