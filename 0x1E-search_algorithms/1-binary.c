#include "search_algos.h"

/**
  * binary_search - It looks for value in sorted array
  * integers using binary search.
  * @array: pointer to first element of array to search.
  * @size: Num of elements in array.
  * @value: Value to search for.
  *
  * Return: If value is not present or array is NULL, -1.
  *         Else, index where value is located.
  *
  * Desc: Prints the sub-array being searched evry time it changes.
  */
int binary_search(int *array, size_t size, int value)
{
	size_t v, left, right;

	if (array == NULL)
		return (-1);

	for (left = 0, right = size - 1; right >= left;)
	{
		printf("Searching in array: ");
		for (v = left; v < right; v++)
			printf("%d, ", array[v]);
		printf("%d\n", array[v]);

		v = left + (right - left) / 2;
		if (array[v] == value)
			return (v);
		if (array[v] > value)
			right = v - 1;
		else
			left = v + 1;
	}

	return (-1);
}
