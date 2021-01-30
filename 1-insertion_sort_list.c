#include "sort.h"

/**
 *insertion_sort_list - sorts a list using the insertion algorithm
 *@list: the list to be sorted
 *Return: void, no return
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *cap, *sort;

	cap = (*list)->next;
	sort = cap;
	while (cap != NULL)
	{
		cap = cap->next;
		if (sort->n < sort->prev->n)
		{
			{
				listint_t *prev;

				while (sort->prev != NULL && sort->n < sort->prev->n)
				{
					prev = sort->prev;
					prev->next = sort->next;
					if (prev->prev != NULL)
						prev->prev->next = sort;
					if (sort->next != NULL)
						sort->next->prev = prev;
					sort->prev = prev->prev;
					sort->next = prev;
					prev->prev = sort;
					if (sort->prev == NULL)
						(*list) = sort;
					print_list(*list);
				}
			}
		}
		sort = cap;
	}
}
