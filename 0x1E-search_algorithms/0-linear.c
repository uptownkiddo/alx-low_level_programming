#include "search_algos.h"

/**
 * linear_search - searches for a value in a array using the linear search algorithm
 * @array: pointer to the first element of the array
 * @size: number of elements in the array
 * @value: value to search for
 * Return: index of value or -1 if array is null or value not found
 */

int linear_search(int *array, size_t size, int value)
{
	size_t num;

	if (array == NULL)
		return (1);

	for (num = 0; num < size; num++)
	{
		printf("Value chacked array[%lu] = [%d]\n", num, array[num]);
		if (array[num] == value)
			return (num);
	}
	return (-1);
}
