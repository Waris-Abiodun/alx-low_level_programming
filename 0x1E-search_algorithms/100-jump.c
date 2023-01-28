#include "search_algos.h"

/**
 * jump_search - a function that searches for a value in an
 * array of intege sing the jump search algorithm
 * @array: where to look for the calue
 * @size: size of that array
 * @value: the value to search for
 * Return: 0 on success
 */

int jump_search(int *array, size_t size, int value)
{
	unsigned int jump = sqrt(size);
	unsigned int k, i = 0, j = 0;

	if (array == NULL)
		return (-1);
	while(i < jump)
	{
		if (value > array[j])
		{
			printf("Value checked array[%d] = [%d]\n",j, array[j]);
			j += jump;
		}
		else 
		{
			k = j - jump;
			printf("Value found between indexes [%d] and [%d]\n", k, j);
			while(j >= k)
			{
				printf("Value checked array[%d] = [%d]\n", k, array[k]);
				if(array[k] == value)
					return (k);
				if(k == size - 1)
					break;
				k++;
			}
			break;
		}
	}


	return (-1);
}
