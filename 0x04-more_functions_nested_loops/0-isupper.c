#include "main.h"

/**
 * _isupper - i want o print aupper letter
 * @c: parameter
 * Desctiption: lets test with range of capital letter
 * Return: 1 for capital letter and 0 for other
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
