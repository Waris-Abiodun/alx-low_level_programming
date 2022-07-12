#include "main.h"
#include <stdio.h>
/**
 * swap_int - swap the values of inentegers using pointer
 * @a: interger a
 * @b :  integer b
 * Return : nothing
 */
void swap_int(int *a, int *b)
{
	int x = *a;
	*a = *b;
	*b = x;
}
