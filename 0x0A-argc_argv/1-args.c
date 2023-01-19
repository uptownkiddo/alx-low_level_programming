#include <stdio.h>

/**
 * main - prints the number of arguements passed onto it
 * @argc: stores the number oc command line arguements
 * @argv: stores the names of the arguements used
 * Return: 0 on success
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);

	return (0);
}
