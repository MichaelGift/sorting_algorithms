#include "sort.h"

/**
 * init_int_array - initializes an int array of size size filled with 0
 * @size: the target size of the array
 * Return: the new filled array, or NULL on failure
 */

int *init_int_array(size_t size)
{
	int *new = NULL;
	size_t i;

	new = malloc(sizeof(int) * size);
	if (new)
	{
		for (i = 0; i < size; i++)
			new[i] = 0;
	}

	return (new);
}

/**
 * count_sort - sorts an array of integers using counting sort
 *
 * @array: the array of integers
 * @size: the size of the array
 * @exp: the exponent value of 10
 */

void count_sort(int *array, size_t size, int exp)
{
	int *count = NULL, *output = NULL;
	size_t i;

	count = init_int_array(10 + 1);
	if (!count)
		return;

	for (i = 0; i < size; i++)
		count[(array[i] / exp) % 10] += 1;
	for (i = 1; i <= 10; i++)
		count[i] += count[i - 1];
	output = init_int_array(size);

	if (!output)
	{
		free(count);
		return;
	}

	for (i = size - 1; (int)i >= 0; i--)
	{
		output[count[(array[i] / exp) % 10] - 1] = array[i];
		count[(array[i] / exp) % 10] -= 1;
	}
	for (i = 0; i < size; i++)
		array[i] = output[i];
	free(output);
	free(output);
}

/**
* radix_sort - sorts an array of integers using LSD radix sort
* @array: the array of integers
* @size: the size of the array
*/
void radix_sort(int *array, size_t size)
{
	int k = -1, exp;
	size_t i;

	if (size < 2)
		return;
	for (i = 0; i < size; i++)
		k = array[i] > k ? array[i] : k;
	for (exp = 1; k / exp > 0; exp *= 10)
	{
		count_sort(array, size, exp);
		print_array(array, size);
	}
}
