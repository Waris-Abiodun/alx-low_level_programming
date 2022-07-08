#include "main.h"

/**
 * _isupper - i want o print aupper letter
 * Desctiption: lets test with range of capital letter
 * Return: 1 for capital letter and 0 for other
 */

int _isupper(int c)
{
	for (c = 'A', c <= 'Z', c++)
	{
		_putchar(c);
		return (1);
	}
	else
	{
		return (0);
	}
}
