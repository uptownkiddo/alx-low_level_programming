#include "3-calc.h"

/**
 * op_add - adds two numbers
 * @: first number
 * @b: second number
 * Return: add
 */

int op_add(int a, int b)

{
	return (a + b);
}

/**
 * op_sub -subtracts two munbers
 * @a: first number
 * @b: second number
 * Return: the difference
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies two numbers
 * @a: first number
 * @b: second number
 * Return: product of the two numbers
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides two numbers
 * @a: first number
 * @b: second number
 * Return: result of division of the two numbers
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - calculates the module of the two numbers
 * @a: the first number
 * @b: second number
 * Return: remainder after division of the two numbers
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
