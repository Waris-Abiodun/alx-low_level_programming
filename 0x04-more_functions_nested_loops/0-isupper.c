#include "main.h"
#include <stdio.h>

/**
 * main - i want o print aupper letter
 * Desctiption: lets test with range of capital letter
 * Return: 1 for capital letter and 0 for other
 */

int main(void)
{
	char c;

	for (c = 'A')
	{
		printf("%c: %d\n", c, _isupper(c));
		return (0);
	}
	for (c = 'a')
	{
		printf("%c: %d\n", c, _isupper(c));
		return (1);
	}
}
