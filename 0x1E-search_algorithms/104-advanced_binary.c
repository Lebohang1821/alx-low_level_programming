#include "search_algos.h"

/**
  * advanced_binary_recursive - It looks recursively for value in sorted
  *                             array of integers using binary search.
  * @array: An pointer to first element of [sub]array to search.
  * @left: Starting index of [sub]aray to search.
  * @right: Ending index of [sub]array to search.
  * @value: Value to search for.
  *
  * Return: If value is not present, -1.
  *         Otherwise, index where value is located.
  *
  * Description: It prints [sub]array being searched after each change.
  */
int advanced_binary_recursive(int *array, size_t left, size_t right, int value)
{
	size_t v;

	if (right < left)
		return (-1);

	printf("Searching in array: ");
	for (v = left; v < right; v++)
		printf("%d, ", array[v]);
	printf("%d\n", array[v]);

	v = left + (right - left) / 2;
	if (array[v] == value && (v == left || array[v - 1] != value))
		return (v);
	if (array[v] >= value)
		return (advanced_binary_recursive(array, left, v, value));
	return (advanced_binary_recursive(array, v + 1, right, value));
}

/**
  * advanced_binary - Looks for value in sorted array
  *                   of integers using advanced binary search.
  * @array: Pointer to first element of array to search.
  * @size: Num of elements in array.
  * @value: Value to search for.
  *
  * Return: If value is not present or array is NULL, -1.
  *         Otherwise, first index where value is located.
  *
  * Description: It prints [sub]array being searched after each change.
  */
int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL || size == 0)
		return (-1);

	return (advanced_binary_recursive(array, 0, size - 1, value));
}
