#include "sort.h"

/**
 * bubble_sort -This is an alogorithm that sorts a list using the bubble method
 * @array: this is an array of integers that is to be sorted
 * @size: size is the size of the array
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, fb = 1;
        int tmp = 0;

        if (array == NULL || size == 0 || size == 1)
                return;
        
        while(fb == 1)
        {
                fb = 0;
                for(i = 1; i < size; i++)
                {
                        if (array[i] < array[i - 1])
                        {
                                fb = 1;
                                tmp = array[i - 1];
                                array[i - 1] = array[i];
                                array[i] = tmp;
                                print_array((const int *)array, size);
                        }
                }
        }
        
} 