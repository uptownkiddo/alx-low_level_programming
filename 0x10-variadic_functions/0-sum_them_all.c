#include <stdio.h>
#include <stdarg.h>

/**
 * sum_them_all - function to sum passed arguements
 * @n: parameter
 * Return: 0 if n == 0, return n otherwise
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list func;
	unsigned int i, sum = 0;

	va_start(func, n);

	if (n == 0)
		printf("0\n");

	else
	{
		for (i = 0; i < n; i++)
			sum += va_arg(func, int);
	}

	va_end(func);
	return (sum);
}
