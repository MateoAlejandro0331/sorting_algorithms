#include "sort.h"

/**
 * partition_hoare - defines the pivot and swap the integers lower than
 * the pivot.
 * @array: Pointer to the array.
 * @low: Lowest point of the array.
 * @high: Highest point of the array.
 * @size: Array's size.
 * Return: void.
 */

int partition_hoare(int *array, int low, int high, size_t size)
{
	int pivot = array[low], aux = 0;
	int j = high + 1;
	int i = low - 1;

	while (array)
	{
		while (array[i] < pivot)
			i++;
		while ((array[j] > pivot))
			j--;
		if (i >= j)
			return (j);
		aux = array[i];
		array[i] = array[j];
		array[j] = aux;
		print_array(array, size);
	}
	return (i + 1);
}

/**
 * recursion_quick_sort_hoare - recursion that divides the array.
 * @array: Pointer to the array.
 * @low: Lowest point of the array.
 * @high: Highest point of the array.
 * @size: Array's size.
 * Return: void.
 */

void recursion_quick_sort_hoare(int *array, int low, int high, ssize_t size)
{
	int parti;

	if (low < high)
	{
		parti = partition_hoare(array, low, high, size);
		recursion_quick_sort_hoare(array, low, parti, size);
		recursion_quick_sort_hoare(array, parti + 1, high, size);
	}
}

/**
 * quick_sort_hoare - sorts an array of integers in ascending order
 * using the Quick sort algorithm with Hoare partition scheme.
 * @array: Pointer to the array.
 * @size: Array's size.
 * Return: void.
 */

void quick_sort_hoare(int *array, size_t size)
{
	recursion_quick_sort_hoare(array, 0, size - 1, size);
}
