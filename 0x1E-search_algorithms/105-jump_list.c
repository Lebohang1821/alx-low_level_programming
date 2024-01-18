#include "search_algos.h"
#include <stdio.h>

/**
 * jump_list - It looks for a value in a sorted list of integers
 * using the Jump search algorithm.
 * @list: Pointer to the head of the list to search in
 * @size: Number of nodes in list
 * @value: Value to search for
 *
 * Return: Pointer to first node where value is located,
 * or NULL if the value is not present or if the head is NULL
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
    if (list == NULL)
        return NULL;

	size_t step = sqrt(size);
    listint_t *prev = NULL, *current = list;

    while (current != NULL && current->n < value)
    {
        if (prev != NULL)
            printf("Value checked at index [%lu] = [%d]\n", current->index, current->n);

        prev = current;
        for (size_t i = 0; current->next != NULL && i < step; ++i)
            current = current->next;
    }

    printf("Value found between indexes [%lu] and [%lu]\n", prev->index, current->index);

    while (prev != NULL && prev->index <= current->index)
    {
        printf("Value checked at index [%lu] = [%d]\n", prev->index, prev->n);
        if (prev->n == value)
            return prev;

        prev = prev->next;
    }

    return NULL;
}
