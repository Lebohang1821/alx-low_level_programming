#include "search_algos.h"

/**
  * jump_search - It looks for value in sorted array
  * of integers using jump search.
  * @array: Pointer to first element of array to search.
  * @size: Num of elements in array.
  * @value: Value to search for.
  *
  * Return: If value is not present or array is NULL, -1.
  *         Else, first index where value is located.
  *
  * Description: It prints value every time it is compared in array.
  *              Uses square root of array size as jump step.
  */
int jump_search(int *array, size_t size, int value)
{
	size_t v, jump, step;

	if (array == NULL || size == 0)
		return (-1);

	step = sqrt(size);
	for (v = jump = 0; jump < size && array[jump] < value;)
	{
		printf("Value checked array[%ld] = [%d]\n", jump, array[jump]);
		v = jump;
		jump += step;
	}

	printf("Value found between indexes [%ld] and [%ld]\n", v, jump);

	jump = jump < size - 1 ? jump : size - 1;
	for (; v < jump && array[v] < value; v++)
		printf("Value checked array[%ld] = [%d]\n", v, array[v]);
	printf("Value checked array[%ld] = [%d]\n", v, array[v]);

	return (array[v] == value ? (int)v : -1);
}
