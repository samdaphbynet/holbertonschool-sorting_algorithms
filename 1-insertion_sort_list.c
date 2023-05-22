#include <stdio.h>
#include "sort.h"

/**
 * change - function that replace first value of secound value
 * @first: first value
 * @secound: secound value
 */

void change(int *first, int *secound)
{
    int temp;
    temp = *first;
    *first = *secound;
    *secound = temp;
}

/**
 * insertion_sort_list - Sorts a doubly linked list
 *                       using the Insertion sort algorithm
 *
 * @list: Pointer to the head of the list
 */
void insertion_sort_list(listint_t **list)
{
    listint_t *temp;
    listint_t *current = (*list)->next;

    if (list == NULL || *list == NULL || (*list)->next == NULL)
        return;

    while (current != NULL)
    {
        temp = current->prev;

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

            if (temp->prev != NULL)
                temp = temp->prev;
            else
                break;
            print_list(*list);
        }
        current = current->next;
    }
}
