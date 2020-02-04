#include "sort.h"

/**
 * quick_sort - Function sorts an array of integers
 * using the Quick sort algorithm.
 *
 * @array: Array of integer to process by the function.
 * @size: Size of the array.
 *
 * Return: No return (Void Function).
 */

void quick_sort(int *array, size_t size)
{
	if (size > 1)
	{
		int pivot = partition(array, 0, size - 1);

		quick_sort(array, pivot);
		quick_sort(array + pivot + 1, size - pivot - 1);
	}
}

/**
 * swap - Swap Function.
 *
 * @array: Array of integer to process by the function.
 * @size: Size of the array.
 * @a: Starting index.
 * @b: Ending index.
 *
 * Return: No return (Void Function).
 */

void swap(int *a, int *b, int *array, int size)
{
	static int *ptr, s;
	int t = *a;

	if (*a != *b)
	{
		*a = *b;
		*b = t;
		if (!ptr)
		{
			ptr = array, s = size;
		}
		print_array(ptr, s);
	}
}

/**
 * partition - Partition function
 *
 * @array: Array of integer to processby the function
 * @lo: Starting index
 * @hi: Ending index
 * Return: Index of smaller element
 */

int partition(int *array, int lo, int hi)
{
	int i, j, pivot = array[hi];

	for (j = i = lo; j < hi; j++)
	{
		if (array[j] < pivot)
		{
			swap(&array[i++], &array[j], array, hi + 1);
		}
	}
	swap(&array[i], &array[hi], array, hi + 1);
	return (i);
}
