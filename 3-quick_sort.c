#include "sort.h"
/**
* partition -  partition scheme
* @array: array of numbers
* @low: first index of the array
* @high: last index of the array
* @size: size of the array
* Return: position of the pivot in the array
*/

int partition(int *array, int low, int high, size_t size)
{
	int pivot, i, j, temp;

	pivot = array[high];
	i = (low - 1);

	for (j = low; j <= high; j++)
	{
		if (array[j] <= pivot)
		{
			i++;
			if (i != j)
			{
				temp = array[i];
				array[i] = array[j];
				array[j] = temp;
				print_array(array, size);
			}
		}
	}
	return (i);
}

/**
* compare_sort - compares low and high positions
* @array: array of numbers
* @low: first index of the array
* @high: last index of the array
* @size: size of the array
* Return: nothing
*/

void compare_sort(int *array, int low, int high, size_t size)
{
	int pi;

	if (low < high)
	{
		pi = partition(array, low, high, size);
		compare_sort(array, low, pi - 1, size);
		compare_sort(array, pi + 1, high, size);
	}
}

/**
* quick_sort - sorts an array of integers in
* ascending order using the Quick sort algorithm
* @array: array to be sorted
* @size: size of the array
* Return: nothing
*/
void quick_sort(int *array, size_t size)
{
	int low = 0;
	int high = size - 1;

	if (array == NULL || size < 2)
		return;

	compare_sort(array, low, high, size);
}
