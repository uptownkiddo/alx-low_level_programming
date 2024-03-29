#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints number of coins to make change
 * @argc: number of arguements
 * @argv: names of the arguements
 * Return: 0 on succes
 */

int main(int argc, char *argv[])
{
	int cents;
	int ncoins = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);

	while (cents > 0)
	{
		if (cents >= 25)
			cents -= 25;
		else if (cents >= 10)
			cents -= 10;
		else if (cents >= 5)
			cents -= 5;
		else if (cents >= 2)
			cents -= 2;
		else if (cents >= 1)
			cents -= 1;
		ncoins += 1;
	}
	printf("%d\n", ncoins);
	return (0);
}
