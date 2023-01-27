#include "search_algos.h"

/**
 * linear_search - a function that searches for a value in an
 * array of intege sing the Linear search algorithm
 * @array: where to look for the calue
 * @size: size of that array
 * @value: the value to search for
 * Return: 0 on success
 */


int linear_search(int *array, size_t size, int value)
{
	unsigned int i = 0;

	while(i < size)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if(array[i] == value)
		{
			return (i);
		}
		i++;
		
	}
	return (-1);
}
