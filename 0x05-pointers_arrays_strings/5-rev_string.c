#include "main.h"

/**
 * revstring - A function that reverses a string
 * @s: Te integer to be reversed
 * Return: nothing
 */
void rev_string(char *s)
{
	int a = 0;
	int b = 0;
	char c;

	while (s[a] != '\0')
		a++;
	while (b < a--)
	{
		c = s[b];
		s[b++] = s[a];
		s[a] = c;
	}
}
