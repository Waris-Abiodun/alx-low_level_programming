#include "main.h"
#include <stdio.h>

/**
 * rev_string - print reverse string 
 * @s: string to be printed
 * Return: void
 */
void rev_string(char *s)
{
	int a, b, temp = 0;

	while (s[a] != '\0')
	{
		a++;
	}
	a--;
	for (b = 0; a > b; b++, a--)
	{
		temp = s[a];
		s[a] = s[b];
		s[b] = temp;
	}
}
