#include "sort.h"
/**
 * selection_sort - Sorts an array using the algorithm
 * @array: This is an array of integers to be sorted
 * @size: Size of array that is passed
 */
void selection_sort(int *array, size_t size)
{
	size_t i, k, li;
	int least;

	if (array == NULL || size == 0 || size == 1)
		return;

	for (i = 0; i < size; i++)
	{
		k = i;
		least = array[k];
		li = k;
		for (; k < size; k++)
		{
			if (array[k] < least)
			{
				least = array[k];
				li = k;
			}
		}

		array[li] = array[i];
		array[i] = least;
		if (li != i)
			print_array(array, size);
	}
}
