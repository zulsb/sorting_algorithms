#include "sort.h"

/**
 * selection_sort - Function that sorts an array of integers
 * using the selection sort algorithm.
 * @array: Array of integer to process by the function.
 * @size: Size of the array.
 * Return: No return (Void Function).
 */

void selection_sort(int *array, size_t size)
{
	size_t idx, jdx, menor;
	int tmp;

	if (array == NULL && size == 1)
		return;

	for (idx = 0; idx < size; idx++)
	{
		menor = idx;
		jdx = idx + 1;
		for (; jdx < size; jdx++)
		{
			if (array[jdx] < array[menor])
				menor = jdx;
		}
		if (idx != menor)
		{
			tmp = array[idx];
			array[idx] = array[menor];
			array[menor] = tmp;
			print_array(array, size);
		}
	}
}
