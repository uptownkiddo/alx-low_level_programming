#include <stdio.h>

/**
 * main - prints all arguents it receives
 * @argc: stores the number of arguements received
 * @argv: stores the names of the arguements received
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
