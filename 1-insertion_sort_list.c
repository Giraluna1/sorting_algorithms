#include "sort.h"

/**
 * insertion_sort_list- sorts a DLL using insertion sort algorithm
 * @list: pointer a doubly linked list
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *current = NULL, *ref_prev = NULL, *ref_next = NULL;

	current = (*list)->next;

	if (!list && !*list && !current)
		return;

	while (current)
	{
		ref_next = current->next;
		while (current->prev && current->n < current->prev->n)
		{
			if (current->prev->prev != NULL)
				current->prev->prev->next = current;
			else
				*list = current;
			ref_prev = current->prev->prev;
			current->prev->prev = current;
			if (current->next != NULL)
				current->next->prev = current->prev;
			current->prev->next = current->next;
			current->next = current->prev;
			current->prev =  ref_prev;
			print_list(*list);
		}
		current = ref_next;
	}

}
