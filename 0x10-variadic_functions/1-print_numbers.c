#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - print numbers
 * @n: parameter
 * @separator: parameter
 * Return: the value of n
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list prt;
	unsigned int i;

	va_start(prt, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(prt, int));

		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);

	}
	printf("\n");

	va_end(prt);
}
