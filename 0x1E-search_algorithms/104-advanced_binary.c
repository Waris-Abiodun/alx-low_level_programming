#include "search_algos.h"

/**
 * advance_binary - a function that searches for a value in an
 * array of integer using the advance binary search algorithm
 * @array: where to look for the calue
 * @size: size of that array
 * @value: the value to search for
 * Return: 0 on success
 */


int advanced_binary(int *array, size_t size, int value)
{
	unsigned int m, k, l = 0;
	unsigned int r = size;


	if (array == NULL)
		return (-1);
	while (r > l)
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
		m = ((l + r)) / 2;
		printf("l = %d, r = %d sol =<%d><%d>", l, r, m , array[m]);
		if (array[m] == value)
			return (m);
		else if ((r - l) == 1 )
			return (-1);
		else if (value > array[m])
		{
			if((l + r) % 2 == 1)
				l = m + 1;
			else
				l = m;
		}
		else
		{
			r = m ;
		}
	}

	return (-1);
}


