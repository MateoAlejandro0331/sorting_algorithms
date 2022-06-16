#include "sort.h"

/**
 * insertion_sort_list - sorts a doubly linked list of integers
 * in ascending order using the Insertion sort algorithm
 * @list: Double pointer to the list's head.
 * Return: void.
 */

void insertion_sort_list(listint_t **list)
{
    listint_t *aux = *list;

    while (aux->next)
    {
        if (aux->n < aux->next->n)
            aux = aux->next;
        aux = aux->next;
        while (aux->n < aux->prev->n)
        {
            aux->prev->next = aux->next;
            aux->next->prev = aux->prev;
            aux->next = aux->prev;
            aux->prev->prev = aux;
            if (aux->prev->prev)
            {
                aux->prev = aux->prev->prev;
                aux->prev->prev->next = aux;
            }
            else
            {
                aux->prev = NULL;
                *list = aux;
            }
            print_list(*list);
            aux = aux->prev;
        }
    }
}
