#include "search_algos.h"

/**
 * binary_search - a function that searches for a value in an
 * array of intege sing the Linear search algorithm
 * @array: where to look for the calue
 * @size: size of that array
 * @value: the value to search for
 * Return: 0 on success
 */


int binary_search(int *array, size_t size, int value)
{
	unsigned int m, k, l = 0;
	unsigned int r = size;


	if (array == NULL)
		return (-1);
	while (l < r)
	{
		k = l;
		printf("Searching in array: ");
		while (k < r)
		{
			if (k == r - 1)
			{
				printf("%d\n", array[k]);
			}
			else
			{
				printf("%d, ", array[k]);
			}
			k++;
		}
		m = ((l + r) - 1) / 2;
		if (array[m] == value)
			return (value);
		else if (array[m] > value)
		{
			r = m;
		}
		else
		{
			l = m + 1;
		}
	}

	return (-1);
}
