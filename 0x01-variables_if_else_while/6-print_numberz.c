#include <stdio.h>

/**
 * main - prins all single digit numbers of base 10 starting from,
 * followed by a new line, using putchar
 * Return: always 0
 */
int main(void)
{
	int n;

	for (n = 48; n < 58; n++)
		putchar(n);
	putchar('\n');
	return (0);
}

