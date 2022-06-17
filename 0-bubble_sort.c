#include "sort.h"

/**
 * bubble_sort - sorts an array of integers in ascending order
 * using the Bubble sort algorithm
 * @array: Pointer to the array.
 * @size: Array's size.
 * Return: void.
 */

void bubble_sort(int *array, size_t size)
{
	size_t i, auxsize = size;
	int aux = 0;

	while (auxsize > 1)
	{
		for (i = 0; i < auxsize - 1; i++)
		{
			if (array[i] > array[i + 1])
			{
				aux = array[i];
				array[i] = array[i + 1];
				array[i + 1] = aux;
				print_array(array, size);
			}
		}
		auxsize--;
	}
}
