#include "sort.h"

/**
 * bubble_sort - Sorts an array of integers in ascending order using the bubble
 * sort algorithm
 *
 * @array: Array of integer to process by the function
 * @size: Size of the array
 * Return: No return (Void Function)
 */

void bubble_sort(int *array, size_t size)
{

	int temp = 0, change = 0;
	unsigned int i = 0;


	if (array == NULL)
	{
		return;
	}

	while (i < (size - 1))
	{
		if (array[i + 1] < array[i])
		{
			temp = array[i];
			array[i] = array[i + 1];
			array[i + 1] = temp;
			change = 1;
			print_array(array, size);
		}
		i++;
		if (i == (size - 1) && !change)
		{
			return;
		}
		else if (i == (size - 1) && change)
		{
			i = 0;
			change = 0;
		}
	}

}
