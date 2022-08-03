#include "function_pointers.h"

/**
 * array_iterator - function ppointer that print an array
 * @array: array to be printed using loop
 * @size: size of the array, how many times we are going throgh the loop
 * @action: the function pointer
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array != NULL && size > 0 && action != NULL)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}

	}
}
