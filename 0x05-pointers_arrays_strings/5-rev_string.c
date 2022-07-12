#include "main.h"
#include <stdio.h>

/**
 * rev_string - print reverse string 
 * @s: string to be printed
 * Return: void
 */
void rev_string(char *s)
{
	char rev = s[8];
	int f = 0;
	int i;

	while (s[f] != '\0')
		f++;
	for (i = 0; i < f; i++)
	{
		f--;
		rev = s[i];
		s[i] = s(f);
		s[f] = rev;
	}
}
