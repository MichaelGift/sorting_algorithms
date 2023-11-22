#include "sort.h"

/**
 * swap_array_ints - Swaps two values in an array of ints
 * @array: The array of ints
 * @i1: Index of first value
 * @i2: Index of 2nd value
 * Return: the array with value
 */

void swap_array_ints(int **array, ssize_t i1, ssize_t i2)
{
	int tmp;

	tmp = (*array)[i1];
	(*array)[i1] = (*array)[i2];
	(*array)[i2] = tmp;
}

/**
 * bubble_sort - Sorts an array of integers using bubble sort
 * @array: The array of integers
 * @size: The size of the array
 */

void bubble_sort(int *array, size_t size)
{
	size_t arr = size, new_n, i;

	while (arr > 1)
	{
		new_n = 0;
		for (i = 1; i <= arr - 1; i++)
		{
			if (array[i - 1] > array[i])
			{
				swap_array_ints(&array, i - 1, i);
				print_array(array, size);
				new_n = i;
			}
		}
		arr = new_n;
	}
}

