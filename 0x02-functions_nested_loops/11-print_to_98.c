#include <stdio.h>
#include "main.h"

/**
 * print_to_98- prints to 98
 * @a: number start fro 0
 * Return: 0 or 1 always
 */
void print_to_98(int a)
{
	while (a > 98)
	{
		printf("%i, ", a);
		a--;
	}
	while (a < 98)
	{
		printf("%i, ", a);
		a++;
	}
	printf("98");
	putchar('\n');
}
