#include "sort.h"
#include <stdlib.h>
void r_quick_sort(int *arr, size_t low, size_t high);
size_t partition(int *array, size_t low, size_t high);
/**
 * quick_sort - This Function implements the quick sort algorithm
 * @array: This is the array of integers
 * @size: This is the Size of the array
 */
void quick_sort(int *array, size_t size)
{
	if (array == NULL)
		return;

	r_quick_sort(array, 0, size - 1);

}
/**
 * 
 * 
 * 
 */ 
size_t partition(int *array, size_t low, size_t high)
{
	size_t pivot = high, i = low - 1, k;

	for (k = low; k < high - 1; k++)
	{
		if (array[k] <= array[pivot])
		{
			i++;
			tmp = array[i];
			array[i] = array[k];
			array[k] = tmp;
		}	
	}
	tmp = array[i + 1];
	array[i + 1] = array[pivot];
	array[pivot] = tmp;
	
	return (i + 1);
}
/**
 * 
 * 
 */
void r_quick_sort(int *arr, size_t low, size_t high)
{
	size_t part;

	part = partition(arr, low, high);

	r_quick_sort(arr, low, part - 1);
	r_quick_sort(arr, part + 1, high);

} 