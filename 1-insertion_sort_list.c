#include "sort.h"

/**
  * insertion_sort_list - Function sorts a doubly linked list of
  * integers using the Insertion sort algorithm.
  *
  * @list: List of integers.
  * Return: void.
  */

void insertion_sort_list(listint_t **list)
{
	listint_t *j, *i;

	if (list)
	{
		i = *list;
	}
	else
	{
		i = NULL;
	}

	while (i && (j = i = i->next))
	{
		while (i->prev && i->prev->n > j->n)
		{
			if (i->next)
				i->next->prev = i->prev;
			i->prev->next = i->next;
			i->next = i->prev;
			i->prev = i->prev->prev;
			i->next->prev = i;
			if (i->prev)
				i->prev->next = i;
			else
			{
				*list = i;
			}
			print_list(*list);
		}
	}
}
