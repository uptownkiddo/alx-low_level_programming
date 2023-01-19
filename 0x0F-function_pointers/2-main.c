#include <stdio.h>
#include "function_pointers.h"

/**
 * is_98 - checks if a number is equal to 98
 * @lem: the integer to check
 * Return: 0 if false
 */

int is_98(int elem)
{
	return (98 == elem);
}

/**is_strictly_positive - check if number is greater than 0
 * @lem: the integer to check
 * Return: 0 if false
 */

int is_strictly_positive(int elem)
{
	return (elem > 0);
}

/**
 * abs_is_98 - check if the absolute value of a number is 98
 * @lem:integer to check
 * Return: 0 if false
 */

int abs_is_98(int elem)
{
	return (elem == 98 || -elem == 98);
}

/**
 * main - check the code
 * Return: always 0
 */

int main(void)
{
	int array[20] = {0, -98, 98, 402, 1024, 4096, -1024, -98, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 98};
	int index;

	index = int_index(array, 20, is_98);
	printf("%d\n", index);
	index = int_index(array, 20, abs_is_98);
	printf("%d\n", index);
	index = int_index(array, 20, is_strictly_positive);
	printf("%d\n", index);
	return (0);
}
