#include "sort.h"

/**
 * shell_sort - Sorts an array of integers in ascending order
 *              using the shell sort algorithm using the Knuth sequence
 *
 * @array: pointer to array
 * @size: size of array
 *
 * Return: Nothing
 */
void shell_sort(int *array, size_t size)
{
	size_t i, j, temp, gap;

	if (array == NULL)
		return;

	if (size < 2)
		return;

	gap = 1;
	while (gap < (size / 3))
		gap = gap * 3 + 1;

	while (gap >= 1)
	{
		for (i = gap; i < size; i++)
		{
			j = i;
			while (j >= gap && array[j - gap] > array[j])
			{
				temp = array[j];
				array[j] = array[j - gap];
				array[j - gap] = temp;
				j -= gap;
			}
		}
		print_array(array, size);

		gap = gap / 3;
	}
}
