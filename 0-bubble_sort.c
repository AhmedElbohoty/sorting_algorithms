#include "sort.h"
#include <stdio.h>

/**
 * bubble_sort - Sorts an array of integers in ascending
 *               order using the Bubble sort algorithm
 *
 * @array: pointer to array
 * @size: size of array
 *
 * Return: Nothing
 */
void bubble_sort(int *array, size_t size)
{
    int temp;
    size_t i = 0, new_size = size;

    while (new_size > 1)
    {
        for (i = 0; i < size; i++)
        {
            if (i == size - 1)
                continue;

            if (array[i] > array[i + 1])
            {
                temp = array[i];
                array[i] = array[i + 1];
                array[i + 1] = temp;
                new_size = i + 1;

                print_array(array, size);
            }
        }
    }
}
