#include "main.h"
#include <stdio.h>

/**
 * rev_string - reverse the string
 * @s : string to be tested
 * Return : void
 */

void rev_string(char *s)
{
	int x, y, temp = 0;

	while (s[x] != '\0')
	{
		x++;
	}
	x--;

	for (y = 0; x > y; y++, x--)
	{
		temp = s[x];
		s[x] = s[y];
		s[y] = temp;
	}
}
