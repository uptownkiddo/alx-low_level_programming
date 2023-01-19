#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the product of arguements passed to it
 * @argc: stores the number of arguements
 * @argv: stores the names of the arguements
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	else
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));

	return (0);
}
