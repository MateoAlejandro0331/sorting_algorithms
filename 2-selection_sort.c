#include "sort.h"

/**
 * selection_sort - funtion thet sorts an array of integers in
 * ascending order using the Selection sort algorithm
 * @array: Pointer to the array.
 * @size: Array's size.
 * Return: void.
 */

void selection_sort(int *array, size_t size)
{
	size_t i, j, min;
	int aux = 0;

	for (i = 0; i < size - 1; i++)
	{
		min = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[min])
				min = j;
		}
		if (min != i)
		{
			aux = array[i];
			array[i] = array[min];
			array[min] = aux;
			print_array(array, size);
		}
	}
}
