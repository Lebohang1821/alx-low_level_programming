#include "search_algos.h"

/**
  * interpolation_search - It searches for value in sorted array
  *                        integers using interpolation search.
  * @array: Pointer to first element of array to search.
  * @size: Num of elements in array.
  * @value: Value to search for.
  *
  * Return: If value isnot present orrray is NULL, -1.
  *         Otherwise, first index where value is located.
  *
  * Description: It prints value every time it is compared in array..
  */
int interpolation_search(int *array, size_t size, int value)
{
	size_t x, z, a;

	if (array == NULL)
		return (-1);

	for (z = 0, a = size - 1; a >= z;)
	{
		x = z + (((double)(a - z) / (array[a] - array[z])) * (value - array[z]));
		if (x < size)
			printf("Value checked array[%ld] = [%d]\n", x, array[x]);
		else
		{
			printf("Value checked array[%ld] is out of range\n", x);
			break;
		}

		if (array[x] == value)
			return (x);
		if (array[x] > value)
			a = x - 1;
		else
			z = x + 1;
	}

	return (-1);
}
