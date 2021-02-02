#include "sort.h"
#include <stdlib.h>

void r_quick_sort(int *arr, int low, int high, size_t size);
int partition(int *array, int low, int high, size_t size);

/**
 * quick_sort - This Function implements the quick sort algorithm
 * @array: This is the array of integers
 * @size: This is the Size of the array
 */

void quick_sort(int *array, size_t size)
{
	if (array == NULL)
		return;

	r_quick_sort(array, 0, (int)(size - 1), size);

}

/**
 *partition - runs the quick sort
 *@array: the array being sorted
 *@low: the bottom of hte part
 *@high: the top of the part
 *@size: size of array (for print purposes)
 *Return: the place of the partition
 */

int partition(int *array, int low, int high, size_t size)
{
	int tmp, i = (int)(low - 1), k, pivot = array[high];


	for (k = low; k <= high - 1; k++)
	{
		if (array[k] <= pivot)
		{
			i++;
			if (i != k)
			{
				tmp = array[i];
				array[i] = array[k];
				array[k] = tmp;
				print_array(array, size);
			}
		}
	}
	if (i + 1 != high)
	{
		tmp = array[i + 1];
		array[i + 1] = array[high];
		array[high] = tmp;
		print_array(array, size);
	}
	return (i + 1);
}

/**
 *r_quick_sort - the real part of the quick sort
 *@arr: the array being sorted
 *@low: the low piece of the array
 *@high: the high fraction of the array
 *@size: size of array (For print purposes)
 *Return: Void no return
 */

void r_quick_sort(int *arr, int low, int high, size_t size)
{
	int part;

	if (low < high)
	{
		part = partition(arr, low, high, size);

		r_quick_sort(arr, low, part - 1, size);
		r_quick_sort(arr, part + 1, high, size);
	}
}
