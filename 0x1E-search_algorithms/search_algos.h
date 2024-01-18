#ifndef SEARCH_ALGOS_H
#define SEARCH_ALGOS_H

#include <math.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * struct listint_s - This for the singly linked list node
 * @n: Integer
 * @index: AN index of node in list
 * @next: Pointer to next node
 *
 * Desc: singly linked list node structure
 */
typedef struct listint_s
{
		int n;
		size_t index;
		struct listint_s *next;
} listint_t;

/**
 * struct skiplist_s - The singly linked list wit express lane
 *
 * @n: Integer
 * @index: Index of node in list
 * @next: A pointer to next node
 * @express: A pointer to next node in express lane
 *
 * Description: singly linked list node structure with express lane
 */
typedef struct skiplist_s
{
				int n;
				size_t index;
				struct skiplist_s *next;
				struct skiplist_s *express;
} skiplist_t;

int linear_search(int *array, size_t size, int value);
int jump_search(int *array, size_t size, int value);
int interpolation_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int exponential_search(int *array, size_t size, int value);
int advanced_binary(int *array, size_t size, int value);
listint_t *jump_list(listint_t *list, size_t size, int value);
skiplist_t *linear_skip(skiplist_t *list, int value);


#endif /* SEARCH_ALGOS_H */
