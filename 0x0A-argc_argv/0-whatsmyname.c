#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the file name
 * @argc: holds the number of arguementsused
 * @argv: array holding the names of the arguements used
 * Return: 0 0n success
 */

int main(int argc __attribute((unused)), char *argv[])
{
	printf("%s\n", argv[0]);

	return (0);
}
