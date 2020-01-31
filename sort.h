#ifndef BIG_O
#define BIG_O

/**========================================================================*/
/**-LIBRARIES--------------------------------------------------------------*/
/**========================================================================*/

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/wait.h>
#include <string.h>
#include <signal.h>
#include <errno.h>

/**========================================================================*/
/**-STRUCTURES-& DEFINITIONS-----------------------------------------------*/
/**========================================================================*/

/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;


/**========================================================================*/
/**-FUNCTIONS--------------------------------------------------------------*/
/**========================================================================*/

/** 0. Function that sorts an array of integers */
void bubble_sort(int *array, size_t size);

/** 1. Function that sorts a doubly linked list of integers */
void insertion_sort_list(listint_t **list);

/** 2. Function that sorts an array of integers */
void selection_sort(int *array, size_t size);

/** 3. Function that sorts an array of integers */
void quick_sort(int *array, size_t size);

/** Prints an array of integers */
void print_array(const int *array, size_t size);

/** Prints a list of integers */
void print_list(const listint_t *list);

#endif
