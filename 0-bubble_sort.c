#include "sort.h"

/**
 * 
 * 
 */

void bubble_sort(int *array, size_t size)
{
    size_t i, auxsize = size;
    int aux = 0;

    while (auxsize > 0)
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