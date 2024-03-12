#include "search_algos.h"

/**
 * linear_skip - It searches for an algorithm in sorted singly
 *               linked list of integers using linear skip
 * @list: Pointer to head of the linked list to search.
 * @value: Value to search for.
 *
 * Return: If value is not present or head of list is NULL, NULL.
 *         Otherwise, pointer to first node where value is located.
 *
 * Description: Prints a value every time it is compared in list.
 *              Uses square root of the list size as jump step.
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *node, *jump;

	if (list == NULL)
		return (NULL);

	for (node = jump = list; jump->next != NULL && jump->n < value;)
	{
		node = jump;
		if (jump->express != NULL)
		{
			jump = jump->express;
			printf("Value checked at index [%ld] = [%d]\n",
					jump->index, jump->n);
		}
		else
		{
			while (jump->next != NULL)
				jump = jump->next;
		}
	}

	printf("Value found between indexes [%ld] and [%ld]\n",
			node->index, jump->index);

	for (; node->index < jump->index && node->n < value; node = node->next)
		printf("Value checked at index [%ld] = [%d]\n", node->index, node->n);
	printf("Value checked at index [%ld] = [%d]\n", node->index, node->n);

	return (node->n == value ? node : NULL);
}
