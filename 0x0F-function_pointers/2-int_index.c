#include "function_pointers.h"

/**
 * int_index - a function to check index
 * @array: array to be counted or check the index of a certain integer
 * @size: size of the array
 * @cmp: function pointer to
 * Return: am integer of -1 if nothing is there
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size > 0)
	{
		if (array != NULL && cmp != NULL)
		{
			for (i = 0; i < size; i++)
			{
				if (cmp(array[i]))
					return (i);
			}
		}
	}
	return (-1);
}
