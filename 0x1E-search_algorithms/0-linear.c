#include "search_algos.h"

/**
 * linear_search - It searches for value in array using Linear search algo
 * @array: An pointer to first element of array to search in
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: 1st index where value is located, or -1 on failure
 */
int linear_search(int *array, size_t size, int value)
{
	size_t v;
	int tmp;

	if (array != NULL)
	{
		for (v = 0; v < size; v++)
		{
			tmp = array[v];
			printf("Value checked array[%lu] = [%d]\n", v, tmp);
			if (tmp == value)
				return (v);
		}
	}
	return (-1);
}
