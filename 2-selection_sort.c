#include "sort.h"

/**
 * selection_sort - Sorts an array of integers in ascending
 *                  order using the Selection sort algorithm
 *
 * @array: pointer to array
 * @size: size of array
 *
 * Return: Nothing
 */
void selection_sort(int *array, size_t size)
{
	size_t min, temp, i, j;

	if (array == NULL || size < 2)
		return;

	for (i = 0; i < size - 1; i++)
	{
		min = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[min])
				min = j;
		}

		if (i != min)
		{
			temp = array[i];
			array[i] = array[min];
			array[min] = temp;
			print_array(array, size);
		}
	}
}
