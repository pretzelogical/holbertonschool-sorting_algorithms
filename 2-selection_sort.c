#include "sort.h"

/**
 * selection_sort- sorts an array of integers in ascending order
 * @array: array to be sorted
 * @size: size of array
 *
 * Return: void
*/
void selection_sort(int *array, size_t size)
{
	int tmp;
	size_t i, j, pos;

	if (array == NULL || size < 2)
		return;

	for (i = 0; i < size - 1; i++)
	{
		pos = i;

		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[pos])
				pos = j;

			if (pos != i)
			{
				tmp = array[i];
				array[i] = array[pos];
				array[pos] = tmp;
				print_array(array, size);
			}
		}
	}
}
