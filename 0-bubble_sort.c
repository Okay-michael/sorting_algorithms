#include "sort.h"

/**
 * bubble_sort - this function sorts the data ins ascending order
 *
 * @array: this is an array of integers
 * @size: this is the size of the array
 * Return: void
 */
void bubble_sort(int *array, size_t size)
{
	size_t k;
	int tmp, sort = 0;

	if (array == NULL || size == 0)
		return;
	while (sort == 0)
	{
		sort = 1;
		for (k = 0; k < size - 1; k++)
		{
			if (array[k] > array[k + 1])
			{
				sort = 0;
				tmp = array[k];
				array[k] = array[k + 1];
				array[k + 1] = tmp;
				print_array(array, size);
			}
		}
	}
}
