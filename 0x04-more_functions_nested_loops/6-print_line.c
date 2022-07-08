#include "main.h"
#include <stdio.h>

/**
 * print_line - print astraight line
 * @n: number of times "_" should be printed
 * Return: void
 */

void print_line(int n)
{
	int i = 0;

	while (i < n && n > 0)
	{
		_putchar('_');
		i++
	}
	_putchar('\n');
}
