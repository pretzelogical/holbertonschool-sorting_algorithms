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
	int *tmpP;
	int tmp;
	size_t i, j;

	if (array == NULL || size < 2)
		return;

	for (i = 0; i < size - 1; i++)
	{
		tmpP = &array[i];

		for (j = i + 1; j < size; j++)
			if (array[j] < *tmpP)
				tmpP = &array[j];

			if (&array[i] != tmpP)
			{
				tmp = array[i];
				array[i] = *tmpP;
				*tmpP = tmp;
				print_array(array, size);
			}
	}
}
