#include <stdio.h>
#include "sort.h"

/**
 * quick_sort - Tri récursif du tableau utilisant Quick sort
 * @array: Tableau à trier
 * @size: Indice de début de la partition
 */
void quick_sort(int *array, size_t size)
{
    if (array == NULL || size <= 1)
        return;

    quick_sort_recursive(array, 0, size - 1);
}
