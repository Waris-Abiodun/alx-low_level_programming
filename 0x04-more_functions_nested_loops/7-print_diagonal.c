#include "main.h"
#include <stdio.h>

/**
 * print_diagonal - prnt diaginal
 * @n: parameter
 * Return: void
 */

void print_diagonal(int n)
{
	int i;
	int space;

	for (i = 0; i < n; i++)
	{
		for (space = 0; space < i; space++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
	if (n <= 0)
	{
		_putchar('\n');
	}
}
