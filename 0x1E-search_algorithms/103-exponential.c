#include "search_algos.h"

/**
  * _binary_search - It searches value in sorted array
  *                  of integers using binary search.
  * @array: Pointer to first element of array to search.
  * @left: Starting index of [sub]array to search.
  * @right: Ending index of [sub]array to search.
  * @value: Value to search for.
  *
  * Return: If value is not present or array is NULL, -1.
  *         Otherwise, index where value is located.
  *
  * Description: It prints [sub]array being searched after each change.
  */
int _binary_search(int *array, size_t left, size_t right, int value)
{
	size_t v;

	if (array == NULL)
		return (-1);

	while (right >= left)
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

/**
  * exponential_search - It looks for value in sorted array
  *                      of integers using exponential search.
  * @array: Pointer to first element of array to search.
  * @size: Num of elements in the array.
  * @value: Value to search for.
  *
  * Return: If value is not present or array is NULL, -1.
  *         Otherwise, index where value is located.
  *
  * Description: It prints  value every time it is compared in array.
  */
int exponential_search(int *array, size_t size, int value)
{
	size_t v = 0, right;

	if (array == NULL)
		return (-1);

	if (array[0] != value)
	{
		for (v = 1; v < size && array[v] <= value; v = v * 2)
			printf("Value checked array[%ld] = [%d]\n", v, array[v]);
	}

	right = v < size ? v : size - 1;
	printf("Value found between indexes [%ld] and [%ld]\n", v / 2, right);
	return (_binary_search(array, v / 2, right, value));
}
