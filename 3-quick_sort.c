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
 * partition - partitions an array using Lomuto partition scheme
 * @array: array to partition
 * @low: lowest index of partition to sort
 * @high: highest index of partition to sort
 *
 * Return: index of pivot element
 */
int partition(int *array, int low, int high, size_t size)
{
	int j;
	int i = low - 1;

	for (j = low; j < high; j++)
	{
		if (array[j] < array[high])
		{
			i++;
			if (i != j)
			{
				change(&array[i], &array[j]);
				print_array(array, size);
			}
		}
	}
	if (array[high] < array[i + 1])
	{
		change(&array[i + 1], &array[high]);
		print_array(array, size);
	}
	return (i + 1);
}

/**
 * quicksort - sorts an array using quicksort algorithm
 * @array: array to sort
 * @low: lowest index of partition to sort
 * @high: highest index of partition to sort
 */
void quicksort(int *array, int low, int high, size_t size)
{
	int p;

	if (low < high)
	{
		p = partition(array, low, high, size);
		print_array(array, high + 1);
		quicksort(array, low, p - 1, size);
		quicksort(array, p + 1, high, size);
	}
}

/**
 * quick_sort - Tri récursif du tableau utilisant Quick sort
 * @array: Tableau à trier
 * @size: Indice de début de la partition
 */

void quick_sort(int *array, size_t size)
{
	if (size < 2)
		return;

	quicksort(array, 0, (int)size - 1, size);
}
