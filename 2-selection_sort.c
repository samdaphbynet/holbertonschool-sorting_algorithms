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
 * selection_sort - function that sorts in ascending order Selection sort
 * @array: the array to print in order
 * @size: size of array
 */

void selection_sort(int *array, size_t size)
{
	size_t count, find, min_index;

	for (count = 0; count < size - 1; count++)
	{
		min_index = count;

		for (find = count + 1; find < size; find++)
		{
			if (array[find] < array[min_index])
			{
				min_index = find;
			}
		}
		if (min_index != count)
		{
			change(&array[min_index], &array[count]);
			print_array(array, size);
		}
	}
}
