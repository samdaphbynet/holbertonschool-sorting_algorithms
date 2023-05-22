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
 * bubble_sort - function that sorts an array of ints in ascending Bubble sort
 * @array: the array to print in order Bubble sort
 * @size: size of the array
 */

void bubble_sort(int *array, size_t size)
{
	size_t count, comp;

	if (array == NULL)
	{
		return;
	}

	for (count = 0; count < size - 1; count++)
	{
		for (comp = 0; comp < size - count - 1; comp++)
		{
			if (array[comp] > array[comp + 1])
			{
				change(&array[comp], &array[comp + 1]);

				print_array(array, size);
			}
		}
	}
}
