#include "sort.h"

/**
* recursive_heap - recurrssive heapfiy function
* @array: Array to sort
* @heap: size of heap data
* @i: index
* @size: size of array
*/

void recursive_heap(int *array, int heap, int i, int size)
{
	int largest = i, left = 2 * i + 1, right = 2 * i + 2, temp;

	if (left < heap && array[left] > array[largest])
		largest = left;
	if (right < heap && array[right] > array[largest])
		largest = right;

	if (largest != i)
	{
		temp = array[i]; 
        array[i] = array[largest]; 
        array[largest] = temp;

		print_array(array, size);

		recursive_heap(array, heap, largest, size);
	}
}

/**
* heap_sort - Sorts array with heap sort algo
* @array: array to sort
* @size: Size of array to sort
*/

void heap_sort(int *array, size_t size)
{
	int i = size / 2 - 1, temp;

	if (array == NULL || size < 2)
		return;
	for (; i >= 0; i--)
		recursive_heap(array, size, i, size);
	for (i = size - 1; i >= 0; i--)
	{
		temp = array[0];
		array[0] = array[i];
		array[i] = temp;

		if (i > 0)
			print_array(array, size);
            
		recursive_heap(array, i, 0, size);
	}

}