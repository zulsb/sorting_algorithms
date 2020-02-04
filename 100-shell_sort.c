#include "sort.h"
/**
 * shell_sort - Function that uses shell sort technique on an array
 * using Knuth sequence.
 *
 * @array: Array to be sorted.
 * @size: The size of the array to sort.
 *
 * Return: No return (Void Function).
 */
void shell_sort(int *array, size_t size)
{
	unsigned int interval = 1, i, j;
	int temp = 0;

	if (!array || size < 2)
		return;
	while (interval * 3 + 1 < size)
		interval = interval * 3 + 1;
	while (interval > 0)
	{
		for (i = interval; i < size; i++)
		{
			for (j = i; j > interval - 1; j -= interval)
			{
				if (array[j - interval] >= array[j])
				{
					temp = array[j];
					array[j] = array[j - interval];
					array[j - interval] = temp;
				}
			}
		}
		interval = (interval - 1) / 3;
		print_array(array, size);
	}
}
