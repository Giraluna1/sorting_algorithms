#include "sort.h"

/**
* bubble_sort - sorts an array in ascending order using Bubble sort algorithm
* @array: array of integers
* @size: size of the array
*/
void bubble_sort(int *array, size_t size)
{
	bool swapped = true;
	size_t i;
	int temp;

	if (!array || (size == 0))
		return;
	if  (size == 1)
		return;

	while (swapped == true)
	{
		swapped = false;
		for (i = 0; i < size - 1; i++)
		{

			if (array[i] > array[i + 1])
			{
				temp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = temp;
				swapped = true;
				print_array(array, size);
			}
		}
	}
}
