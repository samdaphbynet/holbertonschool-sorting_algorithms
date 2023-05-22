#include <stdio.h>
#include "sort.h"

/**
 * insertion_sort_list - Sorts a doubly linked list
 *                       using the Insertion sort algorithm
 *
 * @list: Pointer to the head of the list
 */
void insertion_sort_list(listint_t **list)
{
		if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;

		listint_t *current;

		current = (*list)->next;

		while (current != NULL)
	{
		listint_t *temp = current->prev;

		while (temp != NULL && temp->n > current->n)

	{
		if (temp->prev != NULL)
		temp->prev->next = current;
		else
		*list = current;

		if (current->next != NULL)
		current->next->prev = temp;

		temp->next = current->next;
		current->prev = temp->prev;
		current->next = temp;
		temp->prev = current;

		temp = current->prev;
	}
		current = current->next;
	}
}
