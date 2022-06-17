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

	aux = aux->next;
	while (aux)
	{
		while (aux->n < aux->prev->n)
		{
			aux->prev->next = aux->next;
			if (aux->next)
				aux->next->prev = aux->prev;
			aux->next = aux->prev;
			if (aux->prev->prev)
			{
				aux->prev = aux->prev->prev;
				aux->next->prev = aux;
				aux->prev->next = aux;
			}
			else
			{
				aux->prev = NULL;
				aux->next->prev = aux;
				*list = aux;
				print_list(*list);
				break;
			}
			print_list(*list);
		}
		aux = aux->next;
	}
}
