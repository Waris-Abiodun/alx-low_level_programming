#include "search_algos.h"

/**
 * jump_search - a function that searches for a value in an
 * array of intege sing the exponential search and binary search algorithm
 * @array: where to look for the calue
 * @size: size of that array
 * @value: the value to search for
 * Return: 0 on success
 */

int exponential_search(int *array, size_t size, int value)
{
	int exp = 1;
	int pre = 0;
	int len = size;
	int search;

	if (array == NULL)
		return (-1);
	while(len > exp)
	{
		if (value > array[exp])
		{
			printf("Value checked array[%d] = [%d]\n", exp, array[exp]);
			exp *= 2;
		}
		else
		{
			pre = exp / 2;
			printf("Value found between indexes [%d] and [%d]\n", pre, exp);
			search = My_binary_search(array, pre, exp + 1, value);
			return (search);
			break;
		}
	}
	if (pre == 0)
	{
		pre = exp / 2;
		printf("Value found between indexes [%d] and [%d]\n", pre, len - 1);
		search = My_binary_search(array, pre, len, value);
		return (search);

	}

	return (-1);
}

/*
 * My_binary_search - a function that searches for a value in an
 * array of intege sing the Linear search algorithm
 * @array: where to look for the calue
 * @size: size of that array
 * @value: the value to search for
 * Return: 0 on success
 */

int My_binary_search(int *array, int pre, int size, int value)
{
        unsigned int m, k, l = pre;
        unsigned int r = size;


        if (array == NULL)
                return (-1);
        while (l < r)
        {
                k = l;
                printf("Searching in array: ");
                while (k < r)
                {
			if(k == r - 1)
				printf("%d\n", array[k]);
			else
				printf("%d, ", array[k]);
                        k++;
                }
                m = ((l + r) - 1) / 2;
                if (array[m] == value)
                        return(m);
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

